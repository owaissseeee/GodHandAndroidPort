#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_0079A890
// Address: 0x79a890 - 0x79ac50
void func_0079A890_0x79a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A890_0x79a890");
#endif

    switch (ctx->pc) {
        case 0x79a890u: goto label_79a890;
        case 0x79a894u: goto label_79a894;
        case 0x79a898u: goto label_79a898;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8bcu: goto label_79a8bc;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        case 0x79a920u: goto label_79a920;
        case 0x79a924u: goto label_79a924;
        case 0x79a928u: goto label_79a928;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a930u: goto label_79a930;
        case 0x79a934u: goto label_79a934;
        case 0x79a938u: goto label_79a938;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a940u: goto label_79a940;
        case 0x79a944u: goto label_79a944;
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa6cu: goto label_79aa6c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa74u: goto label_79aa74;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa84u: goto label_79aa84;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa94u: goto label_79aa94;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aaa4u: goto label_79aaa4;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aaacu: goto label_79aaac;
        case 0x79aab0u: goto label_79aab0;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaecu: goto label_79aaec;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79aafcu: goto label_79aafc;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab04u: goto label_79ab04;
        case 0x79ab08u: goto label_79ab08;
        case 0x79ab0cu: goto label_79ab0c;
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab14u: goto label_79ab14;
        case 0x79ab18u: goto label_79ab18;
        case 0x79ab1cu: goto label_79ab1c;
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab24u: goto label_79ab24;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab38u: goto label_79ab38;
        case 0x79ab3cu: goto label_79ab3c;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abc8u: goto label_79abc8;
        case 0x79abccu: goto label_79abcc;
        case 0x79abd0u: goto label_79abd0;
        case 0x79abd4u: goto label_79abd4;
        case 0x79abd8u: goto label_79abd8;
        case 0x79abdcu: goto label_79abdc;
        case 0x79abe0u: goto label_79abe0;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abe8u: goto label_79abe8;
        case 0x79abecu: goto label_79abec;
        case 0x79abf0u: goto label_79abf0;
        case 0x79abf4u: goto label_79abf4;
        case 0x79abf8u: goto label_79abf8;
        case 0x79abfcu: goto label_79abfc;
        case 0x79ac00u: goto label_79ac00;
        case 0x79ac04u: goto label_79ac04;
        case 0x79ac08u: goto label_79ac08;
        case 0x79ac0cu: goto label_79ac0c;
        case 0x79ac10u: goto label_79ac10;
        case 0x79ac14u: goto label_79ac14;
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac24u: goto label_79ac24;
        case 0x79ac28u: goto label_79ac28;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac30u: goto label_79ac30;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac38u: goto label_79ac38;
        case 0x79ac3cu: goto label_79ac3c;
        case 0x79ac40u: goto label_79ac40;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac48u: goto label_79ac48;
        case 0x79ac4cu: goto label_79ac4c;
        default: break;
    }

    ctx->pc = 0x79a890u;

label_79a890:
    // 0x79a890: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x79a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_79a894:
    // 0x79a894: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a898:
    // 0x79a898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a89c:
    // 0x79a89c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x79a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_79a8a0:
    // 0x79a8a0: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x79a8a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_79a8a4:
    // 0x79a8a4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x79a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_79a8a8:
    // 0x79a8a8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x79a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_79a8ac:
    // 0x79a8ac: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x79a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_79a8b0:
    // 0x79a8b0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x79a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_79a8b4:
    // 0x79a8b4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_79a8b8:
    // 0x79a8b8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x79a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_79a8bc:
    // 0x79a8bc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x79a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_79a8c0:
    // 0x79a8c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x79a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_79a8c4:
    // 0x79a8c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_79a8c8:
    // 0x79a8c8: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x79a8c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_79a8cc:
    // 0x79a8cc: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x79a8ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_79a8d0:
    // 0x79a8d0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x79a8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_79a8d4:
    // 0x79a8d4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a8d8:
    // 0x79a8d8: 0x8c83bb80  lw          $v1, -0x4480($a0)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949760)));
label_79a8dc:
    // 0x79a8dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_79a8e0:
    // 0x79a8e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79a8e4:
    // 0x79a8e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a8e8:
    // 0x79a8e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_79a8ec:
    if (ctx->pc == 0x79A8ECu) {
        ctx->pc = 0x79A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E8u;
        // 0x79a8ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8F0u;
        goto label_79a8f0;
    }
    ctx->pc = 0x79A8E8u;
    {
        const bool branch_taken_0x79a8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E8u;
        // 0x79a8ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e8) {
            ctx->pc = 0x79A904u;
            goto label_79a904;
        }
    }
    ctx->pc = 0x79A8F0u;
label_79a8f0:
    // 0x79a8f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a8f4:
    // 0x79a8f4: 0xc0a572a  jal         func_295CA8
label_79a8f8:
    if (ctx->pc == 0x79A8F8u) {
        ctx->pc = 0x79A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F4u;
        // 0x79a8f8: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8FCu;
        goto label_79a8fc;
    }
    ctx->pc = 0x79A8F4u;
    SET_GPR_U32(ctx, 31, 0x79A8FCu);
    ctx->pc = 0x79A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8F4u;
    // 0x79a8f8: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A8F4u, 0x79A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8FCu;
label_79a8fc:
    // 0x79a8fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a900:
    if (ctx->pc == 0x79A900u) {
        ctx->pc = 0x79A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8FCu;
        // 0x79a900: 0x8ea2bb80  lw          $v0, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A904u;
        goto label_79a904;
    }
    ctx->pc = 0x79A8FCu;
    {
        const bool branch_taken_0x79a8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8FCu;
        // 0x79a900: 0x8ea2bb80  lw          $v0, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8fc) {
            ctx->pc = 0x79A91Cu;
            goto label_79a91c;
        }
    }
    ctx->pc = 0x79A904u;
label_79a904:
    // 0x79a904: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a908:
    // 0x79a908: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a90c:
    // 0x79a90c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x79a90cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a910:
    // 0x79a910: 0xc0b5692  jal         func_2D5A48
label_79a914:
    if (ctx->pc == 0x79A914u) {
        ctx->pc = 0x79A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A910u;
        // 0x79a914: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A918u;
        goto label_79a918;
    }
    ctx->pc = 0x79A910u;
    SET_GPR_U32(ctx, 31, 0x79A918u);
    ctx->pc = 0x79A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A910u;
    // 0x79a914: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A910u, 0x79A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A918u;
label_79a918:
    // 0x79a918: 0x8ea2bb80  lw          $v0, -0x4480($s5)
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79a91c:
    // 0x79a91c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a920:
    // 0x79a920: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x79a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79a924:
    // 0x79a924: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a928:
    // 0x79a928: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a92c:
    // 0x79a92c: 0x40f809  jalr        $v0
label_79a930:
    if (ctx->pc == 0x79A930u) {
        ctx->pc = 0x79A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A92Cu;
        // 0x79a930: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A934u;
        goto label_79a934;
    }
    ctx->pc = 0x79A92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A934u);
        ctx->pc = 0x79A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A92Cu;
        // 0x79a930: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A92Cu, 0x79A934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A934u;
label_79a934:
    // 0x79a934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a938:
    // 0x79a938: 0xc0a56ae  jal         func_295AB8
label_79a93c:
    if (ctx->pc == 0x79A93Cu) {
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A940u;
        goto label_79a940;
    }
    ctx->pc = 0x79A938u;
    SET_GPR_U32(ctx, 31, 0x79A940u);
    ctx->pc = 0x79A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A938u;
    // 0x79a93c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A938u, 0x79A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A940u;
label_79a940:
    // 0x79a940: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a944:
    // 0x79a944: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79a944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79a948:
    // 0x79a948: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79a948u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a94c:
    // 0x79a94c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a94cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79a950:
    // 0x79a950: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a954:
    // 0x79a954: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a958:
    // 0x79a958: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a95c:
    // 0x79a95c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a960:
    // 0x79a960: 0x8ea3bb80  lw          $v1, -0x4480($s5)
    ctx->pc = 0x79a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79a964:
    // 0x79a964: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x79a964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_79a968:
    // 0x79a968: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x79a968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a96c:
    // 0x79a96c: 0x1000009e  b           . + 4 + (0x9E << 2)
label_79a970:
    if (ctx->pc == 0x79A970u) {
        ctx->pc = 0x79A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A96Cu;
        // 0x79a970: 0x3c170058  lui         $s7, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A974u;
        goto label_79a974;
    }
    ctx->pc = 0x79A96Cu;
    {
        const bool branch_taken_0x79a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A96Cu;
        // 0x79a970: 0x3c170058  lui         $s7, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a96c) {
            ctx->pc = 0x79ABE8u;
            goto label_79abe8;
        }
    }
    ctx->pc = 0x79A974u;
label_79a974:
    // 0x79a974: 0x0  nop
    ctx->pc = 0x79a974u;
    // NOP
label_79a978:
    // 0x79a978: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_79a97c:
    // 0x79a97c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_79a980:
    if (ctx->pc == 0x79A980u) {
        ctx->pc = 0x79A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A97Cu;
        // 0x79a980: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A984u;
        goto label_79a984;
    }
    ctx->pc = 0x79A97Cu;
    {
        const bool branch_taken_0x79a97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A97Cu;
        // 0x79a980: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a97c) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A984u;
label_79a984:
    // 0x79a984: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79a984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79a988:
    // 0x79a988: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x79a988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_79a98c:
    // 0x79a98c: 0x8c637a84  lw          $v1, 0x7A84($v1)
    ctx->pc = 0x79a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_79a990:
    // 0x79a990: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a994:
    // 0x79a994: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_79a998:
    if (ctx->pc == 0x79A998u) {
        ctx->pc = 0x79A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A994u;
        // 0x79a998: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A99Cu;
        goto label_79a99c;
    }
    ctx->pc = 0x79A994u;
    {
        const bool branch_taken_0x79a994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A994u;
        // 0x79a998: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a994) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A99Cu;
label_79a99c:
    // 0x79a99c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_79a9a0:
    // 0x79a9a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a9a4:
    // 0x79a9a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_79a9a8:
    if (ctx->pc == 0x79A9A8u) {
        ctx->pc = 0x79A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A4u;
        // 0x79a9a8: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ACu;
        goto label_79a9ac;
    }
    ctx->pc = 0x79A9A4u;
    {
        const bool branch_taken_0x79a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A4u;
        // 0x79a9a8: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9a4) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A9ACu;
label_79a9ac:
    // 0x79a9ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79a9b0:
    // 0x79a9b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a9b4:
    // 0x79a9b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79a9b8:
    // 0x79a9b8: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_79a9bc:
    // 0x79a9bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a9bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9c0:
    // 0x79a9c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a9c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9c4:
    // 0x79a9c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a9c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9c8:
    // 0x79a9c8: 0xc0b2e92  jal         func_2CBA48
label_79a9cc:
    if (ctx->pc == 0x79A9CCu) {
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9D0u;
        goto label_79a9d0;
    }
    ctx->pc = 0x79A9C8u;
    SET_GPR_U32(ctx, 31, 0x79A9D0u);
    ctx->pc = 0x79A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C8u;
    // 0x79a9cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79A9C8u, 0x79A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0x8ea3bb80  lw          $v1, -0x4480($s5)
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79a9d4:
    // 0x79a9d4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x79a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_79a9d8:
    // 0x79a9d8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79a9dc:
    // 0x79a9dc: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79a9e0:
    // 0x79a9e0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a9e4:
    // 0x79a9e4: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
label_79a9e8:
    if (ctx->pc == 0x79A9E8u) {
        ctx->pc = 0x79A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E4u;
        // 0x79a9e8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ECu;
        goto label_79a9ec;
    }
    ctx->pc = 0x79A9E4u;
    {
        const bool branch_taken_0x79a9e4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E4u;
        // 0x79a9e8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e4) {
            ctx->pc = 0x79AA18u;
            goto label_79aa18;
        }
    }
    ctx->pc = 0x79A9ECu;
label_79a9ec:
    // 0x79a9ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x79a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_79a9f0:
    // 0x79a9f0: 0x8c637a8c  lw          $v1, 0x7A8C($v1)
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_79a9f4:
    // 0x79a9f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a9f8:
    // 0x79a9f8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_79a9fc:
    if (ctx->pc == 0x79A9FCu) {
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA00u;
        goto label_79aa00;
    }
    ctx->pc = 0x79A9F8u;
    {
        const bool branch_taken_0x79a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f8) {
            ctx->pc = 0x79AA54u;
            goto label_79aa54;
        }
    }
    ctx->pc = 0x79AA00u;
label_79aa00:
    // 0x79aa00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79aa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79aa04:
    // 0x79aa04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_79aa08:
    if (ctx->pc == 0x79AA08u) {
        ctx->pc = 0x79AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA04u;
        // 0x79aa08: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA0Cu;
        goto label_79aa0c;
    }
    ctx->pc = 0x79AA04u;
    {
        const bool branch_taken_0x79aa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA04u;
        // 0x79aa08: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa04) {
            ctx->pc = 0x79AA54u;
            goto label_79aa54;
        }
    }
    ctx->pc = 0x79AA0Cu;
label_79aa0c:
    // 0x79aa0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79aa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79aa10:
    // 0x79aa10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_79aa14:
    if (ctx->pc == 0x79AA14u) {
        ctx->pc = 0x79AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA10u;
        // 0x79aa14: 0x8ea2bb80  lw          $v0, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA18u;
        goto label_79aa18;
    }
    ctx->pc = 0x79AA10u;
    {
        const bool branch_taken_0x79aa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA10u;
        // 0x79aa14: 0x8ea2bb80  lw          $v0, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa10) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79AA18u;
label_79aa18:
    // 0x79aa18: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_79aa1c:
    // 0x79aa1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79aa1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79aa20:
    // 0x79aa20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79aa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79aa24:
    // 0x79aa24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x79aa24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79aa28:
    // 0x79aa28: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x79aa28u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_79aa2c:
    // 0x79aa2c: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x79aa2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79aa30:
    // 0x79aa30: 0x0  nop
    ctx->pc = 0x79aa30u;
    // NOP
label_79aa34:
    // 0x79aa34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_79aa38:
    if (ctx->pc == 0x79AA38u) {
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x8ea2bb80  lw          $v0, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA3Cu;
        goto label_79aa3c;
    }
    ctx->pc = 0x79AA34u;
    {
        const bool branch_taken_0x79aa34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x8ea2bb80  lw          $v0, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa34) {
            ctx->pc = 0x79AA54u;
            goto label_79aa54;
        }
    }
    ctx->pc = 0x79AA3Cu;
label_79aa3c:
    // 0x79aa3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79aa40:
    // 0x79aa40: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79aa44:
    // 0x79aa44: 0xc0b2ee8  jal         func_2CBBA0
label_79aa48:
    if (ctx->pc == 0x79AA48u) {
        ctx->pc = 0x79AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA44u;
        // 0x79aa48: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA4Cu;
        goto label_79aa4c;
    }
    ctx->pc = 0x79AA44u;
    SET_GPR_U32(ctx, 31, 0x79AA4Cu);
    ctx->pc = 0x79AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA44u;
    // 0x79aa48: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79AA44u, 0x79AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA4Cu;
label_79aa4c:
    // 0x79aa4c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_79aa50:
    if (ctx->pc == 0x79AA50u) {
        ctx->pc = 0x79AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA4Cu;
        // 0x79aa50: 0x8fc22f84  lw          $v0, 0x2F84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA54u;
        goto label_79aa54;
    }
    ctx->pc = 0x79AA4Cu;
    {
        const bool branch_taken_0x79aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA4Cu;
        // 0x79aa50: 0x8fc22f84  lw          $v0, 0x2F84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa4c) {
            ctx->pc = 0x79AC08u;
            goto label_79ac08;
        }
    }
    ctx->pc = 0x79AA54u;
label_79aa54:
    // 0x79aa54: 0x8ea2bb80  lw          $v0, -0x4480($s5)
    ctx->pc = 0x79aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79aa58:
    // 0x79aa58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79aa5c:
    // 0x79aa5c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79aa60:
    // 0x79aa60: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_79aa64:
    // 0x79aa64: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_79aa68:
    // 0x79aa68: 0x40f809  jalr        $v0
label_79aa6c:
    if (ctx->pc == 0x79AA6Cu) {
        ctx->pc = 0x79AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA68u;
        // 0x79aa6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA70u;
        goto label_79aa70;
    }
    ctx->pc = 0x79AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AA70u);
        ctx->pc = 0x79AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA68u;
        // 0x79aa6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
label_79aa74:
    if (ctx->pc == 0x79AA74u) {
        ctx->pc = 0x79AA78u;
        goto label_79aa78;
    }
    ctx->pc = 0x79AA70u;
    {
        const bool branch_taken_0x79aa70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x79aa70) {
            ctx->pc = 0x79AA90u;
            goto label_79aa90;
        }
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79aa7c:
    // 0x79aa7c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x79aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_79aa80:
    // 0x79aa80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79aa84:
    // 0x79aa84: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x79aa84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_79aa88:
    // 0x79aa88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79aa8c:
    // 0x79aa8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x79aa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_79aa90:
    // 0x79aa90: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_79aa94:
    // 0x79aa94: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x79aa94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_79aa98:
    // 0x79aa98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79aa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79aa9c:
    // 0x79aa9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aaa0:
    // 0x79aaa0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x79aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79aaa4:
    // 0x79aaa4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x79aaa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_79aaa8:
    // 0x79aaa8: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x79aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
label_79aaac:
    // 0x79aaac: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x79aaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_79aab0:
    // 0x79aab0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x79aab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_79aab4:
    // 0x79aab4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_79aab8:
    // 0x79aab8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79aab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79aabc:
    // 0x79aabc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79aabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79aac0:
    // 0x79aac0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79aac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_79aac4:
    // 0x79aac4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x79aac4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_79aac8:
    // 0x79aac8: 0xc07df52  jal         func_1F7D48
label_79aacc:
    if (ctx->pc == 0x79AACCu) {
        ctx->pc = 0x79AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC8u;
        // 0x79aacc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAD0u;
        goto label_79aad0;
    }
    ctx->pc = 0x79AAC8u;
    SET_GPR_U32(ctx, 31, 0x79AAD0u);
    ctx->pc = 0x79AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAC8u;
    // 0x79aacc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79AAC8u, 0x79AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAD0u;
label_79aad0:
    // 0x79aad0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x79aad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_79aad4:
    // 0x79aad4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x79aad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79aad8:
    // 0x79aad8: 0x8ea2bb80  lw          $v0, -0x4480($s5)
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79aadc:
    // 0x79aadc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79aae0:
    // 0x79aae0: 0x8cc30214  lw          $v1, 0x214($a2)
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_79aae4:
    // 0x79aae4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_79aae8:
    // 0x79aae8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_79aaec:
    // 0x79aaec: 0x40f809  jalr        $v0
label_79aaf0:
    if (ctx->pc == 0x79AAF0u) {
        ctx->pc = 0x79AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAECu;
        // 0x79aaf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAF4u;
        goto label_79aaf4;
    }
    ctx->pc = 0x79AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AAF4u);
        ctx->pc = 0x79AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAECu;
        // 0x79aaf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAECu, 0x79AAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AAF4u;
label_79aaf4:
    // 0x79aaf4: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79aaf8:
    // 0x79aaf8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x79aaf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79aafc:
    // 0x79aafc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79ab00:
    // 0x79ab00: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_79ab04:
    // 0x79ab04: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x79ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_79ab08:
    // 0x79ab08: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_79ab0c:
    // 0x79ab0c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_79ab10:
    // 0x79ab10: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x79ab10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_79ab14:
    // 0x79ab14: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ab18:
    // 0x79ab18: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x79ab18u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79ab1c:
    // 0x79ab1c: 0x0  nop
    ctx->pc = 0x79ab1cu;
    // NOP
label_79ab20:
    // 0x79ab20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ab20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79ab24:
    // 0x79ab24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ab28:
    // 0x79ab28: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x79ab28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_79ab2c:
    // 0x79ab2c: 0xc0a572a  jal         func_295CA8
label_79ab30:
    if (ctx->pc == 0x79AB30u) {
        ctx->pc = 0x79AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB2Cu;
        // 0x79ab30: 0x46150501  sub.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB34u;
        goto label_79ab34;
    }
    ctx->pc = 0x79AB2Cu;
    SET_GPR_U32(ctx, 31, 0x79AB34u);
    ctx->pc = 0x79AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB2Cu;
    // 0x79ab30: 0x46150501  sub.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AB2Cu, 0x79AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB34u;
label_79ab34:
    // 0x79ab34: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_79ab38:
    if (ctx->pc == 0x79AB38u) {
        ctx->pc = 0x79AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB34u;
        // 0x79ab38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB3Cu;
        goto label_79ab3c;
    }
    ctx->pc = 0x79AB34u;
    {
        const bool branch_taken_0x79ab34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ab34) {
            ctx->pc = 0x79AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB34u;
            // 0x79ab38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ABCCu;
            goto label_79abcc;
        }
    }
    ctx->pc = 0x79AB3Cu;
label_79ab3c:
    // 0x79ab3c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x79ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79ab40:
    // 0x79ab40: 0xc07df52  jal         func_1F7D48
label_79ab44:
    if (ctx->pc == 0x79AB44u) {
        ctx->pc = 0x79AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB40u;
        // 0x79ab44: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB48u;
        goto label_79ab48;
    }
    ctx->pc = 0x79AB40u;
    SET_GPR_U32(ctx, 31, 0x79AB48u);
    ctx->pc = 0x79AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB40u;
    // 0x79ab44: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79AB40u, 0x79AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB48u;
label_79ab48:
    // 0x79ab48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x79ab48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_79ab4c:
    // 0x79ab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab50:
    // 0x79ab50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab54:
    // 0x79ab54: 0xc054222  jal         func_150888
label_79ab58:
    if (ctx->pc == 0x79AB58u) {
        ctx->pc = 0x79AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB54u;
        // 0x79ab58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB5Cu;
        goto label_79ab5c;
    }
    ctx->pc = 0x79AB54u;
    SET_GPR_U32(ctx, 31, 0x79AB5Cu);
    ctx->pc = 0x79AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB54u;
    // 0x79ab58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150888u, 0x79AB54u, 0x79AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB5Cu;
label_79ab5c:
    // 0x79ab5c: 0x8ea2bb80  lw          $v0, -0x4480($s5)
    ctx->pc = 0x79ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79ab60:
    // 0x79ab60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ab64:
    // 0x79ab64: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_79ab68:
    // 0x79ab68: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79ab6c:
    // 0x79ab6c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79ab70:
    // 0x79ab70: 0x40f809  jalr        $v0
label_79ab74:
    if (ctx->pc == 0x79AB74u) {
        ctx->pc = 0x79AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB70u;
        // 0x79ab74: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB78u;
        goto label_79ab78;
    }
    ctx->pc = 0x79AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AB78u);
        ctx->pc = 0x79AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB70u;
        // 0x79ab74: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB70u, 0x79AB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AB78u;
label_79ab78:
    // 0x79ab78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79ab78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79ab7c:
    // 0x79ab7c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ab80:
    // 0x79ab80: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79ab80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79ab84:
    // 0x79ab84: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x79ab84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79ab88:
    // 0x79ab88: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ab88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ab8c:
    // 0x79ab8c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79ab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ab90:
    // 0x79ab90: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79ab90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_79ab94:
    // 0x79ab94: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ab98:
    // 0x79ab98: 0x4615a300  add.s       $f12, $f20, $f21
    ctx->pc = 0x79ab98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_79ab9c:
    // 0x79ab9c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x79ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79aba0:
    // 0x79aba0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x79aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79aba4:
    // 0x79aba4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x79aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79aba8:
    // 0x79aba8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x79aba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_79abac:
    // 0x79abac: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x79abacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79abb0:
    // 0x79abb0: 0xc07df52  jal         func_1F7D48
label_79abb4:
    if (ctx->pc == 0x79ABB4u) {
        ctx->pc = 0x79ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB0u;
        // 0x79abb4: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABB8u;
        goto label_79abb8;
    }
    ctx->pc = 0x79ABB0u;
    SET_GPR_U32(ctx, 31, 0x79ABB8u);
    ctx->pc = 0x79ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABB0u;
    // 0x79abb4: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79ABB0u, 0x79ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABB8u;
label_79abb8:
    // 0x79abb8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x79abb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_79abbc:
    // 0x79abbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79abbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79abc0:
    // 0x79abc0: 0xc0a5682  jal         func_295A08
label_79abc4:
    if (ctx->pc == 0x79ABC4u) {
        ctx->pc = 0x79ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC0u;
        // 0x79abc4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABC8u;
        goto label_79abc8;
    }
    ctx->pc = 0x79ABC0u;
    SET_GPR_U32(ctx, 31, 0x79ABC8u);
    ctx->pc = 0x79ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABC0u;
    // 0x79abc4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A08u, 0x79ABC0u, 0x79ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABC8u;
label_79abc8:
    // 0x79abc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79abc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79abcc:
    // 0x79abcc: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x79abccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_79abd0:
    // 0x79abd0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_79abd4:
    if (ctx->pc == 0x79ABD4u) {
        ctx->pc = 0x79ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD0u;
        // 0x79abd4: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABD8u;
        goto label_79abd8;
    }
    ctx->pc = 0x79ABD0u;
    {
        const bool branch_taken_0x79abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD0u;
        // 0x79abd4: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd0) {
            ctx->pc = 0x79AB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab08;
        }
    }
    ctx->pc = 0x79ABD8u;
label_79abd8:
    // 0x79abd8: 0x8fc22f84  lw          $v0, 0x2F84($fp)
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
label_79abdc:
    // 0x79abdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79abe0:
    // 0x79abe0: 0xc0b56a8  jal         func_2D5AA0
label_79abe4:
    if (ctx->pc == 0x79ABE4u) {
        ctx->pc = 0x79ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE0u;
        // 0x79abe4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABE8u;
        goto label_79abe8;
    }
    ctx->pc = 0x79ABE0u;
    SET_GPR_U32(ctx, 31, 0x79ABE8u);
    ctx->pc = 0x79ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABE0u;
    // 0x79abe4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ABE0u, 0x79ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABE8u;
label_79abe8:
    // 0x79abe8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_79abec:
    // 0x79abec: 0xc0a4bd4  jal         func_292F50
label_79abf0:
    if (ctx->pc == 0x79ABF0u) {
        ctx->pc = 0x79ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABECu;
        // 0x79abf0: 0x26e464f0  addiu       $a0, $s7, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABF4u;
        goto label_79abf4;
    }
    ctx->pc = 0x79ABECu;
    SET_GPR_U32(ctx, 31, 0x79ABF4u);
    ctx->pc = 0x79ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABECu;
    // 0x79abf0: 0x26e464f0  addiu       $a0, $s7, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x79ABECu, 0x79ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF4u;
label_79abf4:
    // 0x79abf4: 0x8ea2bb80  lw          $v0, -0x4480($s5)
    ctx->pc = 0x79abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79abf8:
    // 0x79abf8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79abfc:
    // 0x79abfc: 0x14e0ff5e  bnez        $a3, . + 4 + (-0xA2 << 2)
label_79ac00:
    if (ctx->pc == 0x79AC00u) {
        ctx->pc = 0x79AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABFCu;
        // 0x79ac00: 0x4600b502  mul.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC04u;
        goto label_79ac04;
    }
    ctx->pc = 0x79ABFCu;
    {
        const bool branch_taken_0x79abfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABFCu;
        // 0x79ac00: 0x4600b502  mul.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abfc) {
            ctx->pc = 0x79A978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a978;
        }
    }
    ctx->pc = 0x79AC04u;
label_79ac04:
    // 0x79ac04: 0x8fc22f84  lw          $v0, 0x2F84($fp)
    ctx->pc = 0x79ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
label_79ac08:
    // 0x79ac08: 0xc0b5692  jal         func_2D5A48
label_79ac0c:
    if (ctx->pc == 0x79AC0Cu) {
        ctx->pc = 0x79AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC08u;
        // 0x79ac0c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC10u;
        goto label_79ac10;
    }
    ctx->pc = 0x79AC08u;
    SET_GPR_U32(ctx, 31, 0x79AC10u);
    ctx->pc = 0x79AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC08u;
    // 0x79ac0c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AC08u, 0x79AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC10u;
label_79ac10:
    // 0x79ac10: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x79ac10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79ac14:
    // 0x79ac14: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x79ac14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79ac18:
    // 0x79ac18: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x79ac18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79ac1c:
    // 0x79ac1c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x79ac1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79ac20:
    // 0x79ac20: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x79ac20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79ac24:
    // 0x79ac24: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x79ac24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79ac28:
    // 0x79ac28: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x79ac28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79ac2c:
    // 0x79ac2c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x79ac2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79ac30:
    // 0x79ac30: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x79ac30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79ac34:
    // 0x79ac34: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_79ac38:
    // 0x79ac38: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x79ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_79ac3c:
    // 0x79ac3c: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x79ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79ac40:
    // 0x79ac40: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x79ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79ac44:
    // 0x79ac44: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x79ac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79ac48:
    // 0x79ac48: 0x3e00008  jr          $ra
label_79ac4c:
    if (ctx->pc == 0x79AC4Cu) {
        ctx->pc = 0x79AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC48u;
        // 0x79ac4c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC50u;
        goto label_fallthrough_0x79ac48;
    }
    ctx->pc = 0x79AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC48u;
        // 0x79ac4c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79ac48:
    ctx->pc = 0x79AC50u;
}
} // namespace gh_r601
