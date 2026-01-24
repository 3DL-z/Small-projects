class CreateBike:
    def __init__(self,description,cost,sale_price,condition,ex):
        self.Description={'Description':description}
        self.cost={'cost':cost}
        self.sale_price={'sale_price':sale_price}
        self.condition={'condition':condition}
        self.Ex={ex:False}
        #AND THIS HOW TO DO DICT IN DICTIONARY!!! AND EVEN CLASS BUDDY
    def update_sale_price(self,bike,sale_price):
        if bike['sold']:
            print('Action not allowed, bike has already sold')
        else:
            bike['sale_price']=sale_price
            print('bike is still available')
    def sell(self,bike):
        bike['sold']=True


bikee=CreateBike('Univega Alphina',100,500,0.5,'sold')
bikee.update_sale_price(bikee.Ex,350)
bikee.sell(bikee.Ex)
bikee.update_sale_price(bikee.Ex,350)
