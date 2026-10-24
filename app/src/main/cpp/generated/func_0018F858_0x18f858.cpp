#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0018F858
// Address: 0x18f858 - 0x18fbf0
void func_0018F858_0x18f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018F858_0x18f858");
#endif

    switch (ctx->pc) {
        case 0x18f858u: goto label_18f858;
        case 0x18f85cu: goto label_18f85c;
        case 0x18f860u: goto label_18f860;
        case 0x18f864u: goto label_18f864;
        case 0x18f868u: goto label_18f868;
        case 0x18f86cu: goto label_18f86c;
        case 0x18f870u: goto label_18f870;
        case 0x18f874u: goto label_18f874;
        case 0x18f878u: goto label_18f878;
        case 0x18f87cu: goto label_18f87c;
        case 0x18f880u: goto label_18f880;
        case 0x18f884u: goto label_18f884;
        case 0x18f888u: goto label_18f888;
        case 0x18f88cu: goto label_18f88c;
        case 0x18f890u: goto label_18f890;
        case 0x18f894u: goto label_18f894;
        case 0x18f898u: goto label_18f898;
        case 0x18f89cu: goto label_18f89c;
        case 0x18f8a0u: goto label_18f8a0;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8a8u: goto label_18f8a8;
        case 0x18f8acu: goto label_18f8ac;
        case 0x18f8b0u: goto label_18f8b0;
        case 0x18f8b4u: goto label_18f8b4;
        case 0x18f8b8u: goto label_18f8b8;
        case 0x18f8bcu: goto label_18f8bc;
        case 0x18f8c0u: goto label_18f8c0;
        case 0x18f8c4u: goto label_18f8c4;
        case 0x18f8c8u: goto label_18f8c8;
        case 0x18f8ccu: goto label_18f8cc;
        case 0x18f8d0u: goto label_18f8d0;
        case 0x18f8d4u: goto label_18f8d4;
        case 0x18f8d8u: goto label_18f8d8;
        case 0x18f8dcu: goto label_18f8dc;
        case 0x18f8e0u: goto label_18f8e0;
        case 0x18f8e4u: goto label_18f8e4;
        case 0x18f8e8u: goto label_18f8e8;
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18f8f0u: goto label_18f8f0;
        case 0x18f8f4u: goto label_18f8f4;
        case 0x18f8f8u: goto label_18f8f8;
        case 0x18f8fcu: goto label_18f8fc;
        case 0x18f900u: goto label_18f900;
        case 0x18f904u: goto label_18f904;
        case 0x18f908u: goto label_18f908;
        case 0x18f90cu: goto label_18f90c;
        case 0x18f910u: goto label_18f910;
        case 0x18f914u: goto label_18f914;
        case 0x18f918u: goto label_18f918;
        case 0x18f91cu: goto label_18f91c;
        case 0x18f920u: goto label_18f920;
        case 0x18f924u: goto label_18f924;
        case 0x18f928u: goto label_18f928;
        case 0x18f92cu: goto label_18f92c;
        case 0x18f930u: goto label_18f930;
        case 0x18f934u: goto label_18f934;
        case 0x18f938u: goto label_18f938;
        case 0x18f93cu: goto label_18f93c;
        case 0x18f940u: goto label_18f940;
        case 0x18f944u: goto label_18f944;
        case 0x18f948u: goto label_18f948;
        case 0x18f94cu: goto label_18f94c;
        case 0x18f950u: goto label_18f950;
        case 0x18f954u: goto label_18f954;
        case 0x18f958u: goto label_18f958;
        case 0x18f95cu: goto label_18f95c;
        case 0x18f960u: goto label_18f960;
        case 0x18f964u: goto label_18f964;
        case 0x18f968u: goto label_18f968;
        case 0x18f96cu: goto label_18f96c;
        case 0x18f970u: goto label_18f970;
        case 0x18f974u: goto label_18f974;
        case 0x18f978u: goto label_18f978;
        case 0x18f97cu: goto label_18f97c;
        case 0x18f980u: goto label_18f980;
        case 0x18f984u: goto label_18f984;
        case 0x18f988u: goto label_18f988;
        case 0x18f98cu: goto label_18f98c;
        case 0x18f990u: goto label_18f990;
        case 0x18f994u: goto label_18f994;
        case 0x18f998u: goto label_18f998;
        case 0x18f99cu: goto label_18f99c;
        case 0x18f9a0u: goto label_18f9a0;
        case 0x18f9a4u: goto label_18f9a4;
        case 0x18f9a8u: goto label_18f9a8;
        case 0x18f9acu: goto label_18f9ac;
        case 0x18f9b0u: goto label_18f9b0;
        case 0x18f9b4u: goto label_18f9b4;
        case 0x18f9b8u: goto label_18f9b8;
        case 0x18f9bcu: goto label_18f9bc;
        case 0x18f9c0u: goto label_18f9c0;
        case 0x18f9c4u: goto label_18f9c4;
        case 0x18f9c8u: goto label_18f9c8;
        case 0x18f9ccu: goto label_18f9cc;
        case 0x18f9d0u: goto label_18f9d0;
        case 0x18f9d4u: goto label_18f9d4;
        case 0x18f9d8u: goto label_18f9d8;
        case 0x18f9dcu: goto label_18f9dc;
        case 0x18f9e0u: goto label_18f9e0;
        case 0x18f9e4u: goto label_18f9e4;
        case 0x18f9e8u: goto label_18f9e8;
        case 0x18f9ecu: goto label_18f9ec;
        case 0x18f9f0u: goto label_18f9f0;
        case 0x18f9f4u: goto label_18f9f4;
        case 0x18f9f8u: goto label_18f9f8;
        case 0x18f9fcu: goto label_18f9fc;
        case 0x18fa00u: goto label_18fa00;
        case 0x18fa04u: goto label_18fa04;
        case 0x18fa08u: goto label_18fa08;
        case 0x18fa0cu: goto label_18fa0c;
        case 0x18fa10u: goto label_18fa10;
        case 0x18fa14u: goto label_18fa14;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa1cu: goto label_18fa1c;
        case 0x18fa20u: goto label_18fa20;
        case 0x18fa24u: goto label_18fa24;
        case 0x18fa28u: goto label_18fa28;
        case 0x18fa2cu: goto label_18fa2c;
        case 0x18fa30u: goto label_18fa30;
        case 0x18fa34u: goto label_18fa34;
        case 0x18fa38u: goto label_18fa38;
        case 0x18fa3cu: goto label_18fa3c;
        case 0x18fa40u: goto label_18fa40;
        case 0x18fa44u: goto label_18fa44;
        case 0x18fa48u: goto label_18fa48;
        case 0x18fa4cu: goto label_18fa4c;
        case 0x18fa50u: goto label_18fa50;
        case 0x18fa54u: goto label_18fa54;
        case 0x18fa58u: goto label_18fa58;
        case 0x18fa5cu: goto label_18fa5c;
        case 0x18fa60u: goto label_18fa60;
        case 0x18fa64u: goto label_18fa64;
        case 0x18fa68u: goto label_18fa68;
        case 0x18fa6cu: goto label_18fa6c;
        case 0x18fa70u: goto label_18fa70;
        case 0x18fa74u: goto label_18fa74;
        case 0x18fa78u: goto label_18fa78;
        case 0x18fa7cu: goto label_18fa7c;
        case 0x18fa80u: goto label_18fa80;
        case 0x18fa84u: goto label_18fa84;
        case 0x18fa88u: goto label_18fa88;
        case 0x18fa8cu: goto label_18fa8c;
        case 0x18fa90u: goto label_18fa90;
        case 0x18fa94u: goto label_18fa94;
        case 0x18fa98u: goto label_18fa98;
        case 0x18fa9cu: goto label_18fa9c;
        case 0x18faa0u: goto label_18faa0;
        case 0x18faa4u: goto label_18faa4;
        case 0x18faa8u: goto label_18faa8;
        case 0x18faacu: goto label_18faac;
        case 0x18fab0u: goto label_18fab0;
        case 0x18fab4u: goto label_18fab4;
        case 0x18fab8u: goto label_18fab8;
        case 0x18fabcu: goto label_18fabc;
        case 0x18fac0u: goto label_18fac0;
        case 0x18fac4u: goto label_18fac4;
        case 0x18fac8u: goto label_18fac8;
        case 0x18faccu: goto label_18facc;
        case 0x18fad0u: goto label_18fad0;
        case 0x18fad4u: goto label_18fad4;
        case 0x18fad8u: goto label_18fad8;
        case 0x18fadcu: goto label_18fadc;
        case 0x18fae0u: goto label_18fae0;
        case 0x18fae4u: goto label_18fae4;
        case 0x18fae8u: goto label_18fae8;
        case 0x18faecu: goto label_18faec;
        case 0x18faf0u: goto label_18faf0;
        case 0x18faf4u: goto label_18faf4;
        case 0x18faf8u: goto label_18faf8;
        case 0x18fafcu: goto label_18fafc;
        case 0x18fb00u: goto label_18fb00;
        case 0x18fb04u: goto label_18fb04;
        case 0x18fb08u: goto label_18fb08;
        case 0x18fb0cu: goto label_18fb0c;
        case 0x18fb10u: goto label_18fb10;
        case 0x18fb14u: goto label_18fb14;
        case 0x18fb18u: goto label_18fb18;
        case 0x18fb1cu: goto label_18fb1c;
        case 0x18fb20u: goto label_18fb20;
        case 0x18fb24u: goto label_18fb24;
        case 0x18fb28u: goto label_18fb28;
        case 0x18fb2cu: goto label_18fb2c;
        case 0x18fb30u: goto label_18fb30;
        case 0x18fb34u: goto label_18fb34;
        case 0x18fb38u: goto label_18fb38;
        case 0x18fb3cu: goto label_18fb3c;
        case 0x18fb40u: goto label_18fb40;
        case 0x18fb44u: goto label_18fb44;
        case 0x18fb48u: goto label_18fb48;
        case 0x18fb4cu: goto label_18fb4c;
        case 0x18fb50u: goto label_18fb50;
        case 0x18fb54u: goto label_18fb54;
        case 0x18fb58u: goto label_18fb58;
        case 0x18fb5cu: goto label_18fb5c;
        case 0x18fb60u: goto label_18fb60;
        case 0x18fb64u: goto label_18fb64;
        case 0x18fb68u: goto label_18fb68;
        case 0x18fb6cu: goto label_18fb6c;
        case 0x18fb70u: goto label_18fb70;
        case 0x18fb74u: goto label_18fb74;
        case 0x18fb78u: goto label_18fb78;
        case 0x18fb7cu: goto label_18fb7c;
        case 0x18fb80u: goto label_18fb80;
        case 0x18fb84u: goto label_18fb84;
        case 0x18fb88u: goto label_18fb88;
        case 0x18fb8cu: goto label_18fb8c;
        case 0x18fb90u: goto label_18fb90;
        case 0x18fb94u: goto label_18fb94;
        case 0x18fb98u: goto label_18fb98;
        case 0x18fb9cu: goto label_18fb9c;
        case 0x18fba0u: goto label_18fba0;
        case 0x18fba4u: goto label_18fba4;
        case 0x18fba8u: goto label_18fba8;
        case 0x18fbacu: goto label_18fbac;
        case 0x18fbb0u: goto label_18fbb0;
        case 0x18fbb4u: goto label_18fbb4;
        case 0x18fbb8u: goto label_18fbb8;
        case 0x18fbbcu: goto label_18fbbc;
        case 0x18fbc0u: goto label_18fbc0;
        case 0x18fbc4u: goto label_18fbc4;
        case 0x18fbc8u: goto label_18fbc8;
        case 0x18fbccu: goto label_18fbcc;
        case 0x18fbd0u: goto label_18fbd0;
        case 0x18fbd4u: goto label_18fbd4;
        case 0x18fbd8u: goto label_18fbd8;
        case 0x18fbdcu: goto label_18fbdc;
        case 0x18fbe0u: goto label_18fbe0;
        case 0x18fbe4u: goto label_18fbe4;
        case 0x18fbe8u: goto label_18fbe8;
        case 0x18fbecu: goto label_18fbec;
        default: break;
    }

    ctx->pc = 0x18f858u;

label_18f858:
    // 0x18f858: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18f858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_18f85c:
    // 0x18f85c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x18f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_18f860:
    // 0x18f860: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x18f860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_18f864:
    // 0x18f864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f868:
    // 0x18f868: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_18f86c:
    // 0x18f86c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x18f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18f870:
    // 0x18f870: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_18f874:
    // 0x18f874: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x18f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_18f878:
    // 0x18f878: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x18f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18f87c:
    // 0x18f87c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18f880:
    // 0x18f880: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18f884:
    // 0x18f884: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18f888:
    // 0x18f888: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x18f888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_18f88c:
    // 0x18f88c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x18f88cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18f890:
    // 0x18f890: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18f890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_18f894:
    // 0x18f894: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x18f894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18f898:
    // 0x18f898: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_18f89c:
    if (ctx->pc == 0x18F89Cu) {
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F898u;
        // 0x18f89c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8A0u;
        goto label_18f8a0;
    }
    ctx->pc = 0x18F898u;
    {
        const bool branch_taken_0x18f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F898u;
        // 0x18f89c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f898) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F8A0u;
label_18f8a0:
    // 0x18f8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18f8a4:
    // 0x18f8a4: 0x24423e30  addiu       $v0, $v0, 0x3E30
    ctx->pc = 0x18f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15920));
label_18f8a8:
    // 0x18f8a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18f8ac:
    // 0x18f8ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18f8b0:
    // 0x18f8b0: 0x800008  jr          $a0
label_18f8b4:
    if (ctx->pc == 0x18F8B4u) {
        ctx->pc = 0x18F8B8u;
        goto label_18f8b8;
    }
    ctx->pc = 0x18F8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F8B8u: goto label_18f8b8;
            case 0x18F970u: goto label_18f970;
            case 0x18F980u: goto label_18f980;
            case 0x18F9A8u: goto label_18f9a8;
            case 0x18F9ECu: goto label_18f9ec;
            case 0x18F9FCu: goto label_18f9fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18F8B8u;
label_18f8b8:
    // 0x18f8b8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18f8bc:
    // 0x18f8bc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18f8c0:
    // 0x18f8c0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18f8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_18f8c4:
    // 0x18f8c4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x18f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_18f8c8:
    // 0x18f8c8: 0x40f809  jalr        $v0
label_18f8cc:
    if (ctx->pc == 0x18F8CCu) {
        ctx->pc = 0x18F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C8u;
        // 0x18f8cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8D0u;
        goto label_18f8d0;
    }
    ctx->pc = 0x18F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F8D0u);
        ctx->pc = 0x18F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C8u;
        // 0x18f8cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8C8u, 0x18F8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F8D0u;
label_18f8d0:
    // 0x18f8d0: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_18f8d4:
    if (ctx->pc == 0x18F8D4u) {
        ctx->pc = 0x18F8D8u;
        goto label_18f8d8;
    }
    ctx->pc = 0x18F8D0u;
    {
        const bool branch_taken_0x18f8d0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f8d0) {
            ctx->pc = 0x18F8F0u;
            goto label_18f8f0;
        }
    }
    ctx->pc = 0x18F8D8u;
label_18f8d8:
    // 0x18f8d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f8dc:
    // 0x18f8dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18f8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18f8e0:
    // 0x18f8e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f8e4:
    // 0x18f8e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18f8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18f8e8:
    // 0x18f8e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f8ec:
    // 0x18f8ec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18f8f0:
    // 0x18f8f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18f8f4:
    // 0x18f8f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18f8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f8f8:
    // 0x18f8f8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18f8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18f8fc:
    // 0x18f8fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f900:
    // 0x18f900: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x18f900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_18f904:
    // 0x18f904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f908:
    // 0x18f908: 0xc0c1a0e  jal         func_306838
label_18f90c:
    if (ctx->pc == 0x18F90Cu) {
        ctx->pc = 0x18F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F908u;
        // 0x18f90c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F910u;
        goto label_18f910;
    }
    ctx->pc = 0x18F908u;
    SET_GPR_U32(ctx, 31, 0x18F910u);
    ctx->pc = 0x18F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F908u;
    // 0x18f90c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x18F908u, 0x18F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F910u;
label_18f910:
    // 0x18f910: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18f910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18f914:
    // 0x18f914: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18f914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f918:
    // 0x18f918: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18f918u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f91c:
    // 0x18f91c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18f91cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f920:
    // 0x18f920: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_18f924:
    // 0x18f924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f928:
    // 0x18f928: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f92c:
    // 0x18f92c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18f92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f930:
    // 0x18f930: 0xc0b2e92  jal         func_2CBA48
label_18f934:
    if (ctx->pc == 0x18F934u) {
        ctx->pc = 0x18F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F930u;
        // 0x18f934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F938u;
        goto label_18f938;
    }
    ctx->pc = 0x18F930u;
    SET_GPR_U32(ctx, 31, 0x18F938u);
    ctx->pc = 0x18F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F930u;
    // 0x18f934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18F930u, 0x18F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F938u;
label_18f938:
    // 0x18f938: 0xc063f98  jal         func_18FE60
label_18f93c:
    if (ctx->pc == 0x18F93Cu) {
        ctx->pc = 0x18F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F938u;
        // 0x18f93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F940u;
        goto label_18f940;
    }
    ctx->pc = 0x18F938u;
    SET_GPR_U32(ctx, 31, 0x18F940u);
    ctx->pc = 0x18F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F938u;
    // 0x18f93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE60u, 0x18F938u, 0x18F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F940u;
label_18f940:
    // 0x18f940: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
label_18f944:
    // 0x18f944: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18f948:
    if (ctx->pc == 0x18F948u) {
        ctx->pc = 0x18F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F944u;
        // 0x18f948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F94Cu;
        goto label_18f94c;
    }
    ctx->pc = 0x18F944u;
    {
        const bool branch_taken_0x18f944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F944u;
        // 0x18f948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f944) {
            ctx->pc = 0x18F954u;
            goto label_18f954;
        }
    }
    ctx->pc = 0x18F94Cu;
label_18f94c:
    // 0x18f94c: 0xc07f5c6  jal         func_1FD718
label_18f950:
    if (ctx->pc == 0x18F950u) {
        ctx->pc = 0x18F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F94Cu;
        // 0x18f950: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F954u;
        goto label_18f954;
    }
    ctx->pc = 0x18F94Cu;
    SET_GPR_U32(ctx, 31, 0x18F954u);
    ctx->pc = 0x18F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F94Cu;
    // 0x18f950: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x18F94Cu, 0x18F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F954u;
label_18f954:
    // 0x18f954: 0xc06de42  jal         func_1B7908
label_18f958:
    if (ctx->pc == 0x18F958u) {
        ctx->pc = 0x18F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F954u;
        // 0x18f958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F95Cu;
        goto label_18f95c;
    }
    ctx->pc = 0x18F954u;
    SET_GPR_U32(ctx, 31, 0x18F95Cu);
    ctx->pc = 0x18F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F954u;
    // 0x18f958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x18F954u, 0x18F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F95Cu;
label_18f95c:
    // 0x18f95c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x18f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f960:
    // 0x18f960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f964:
    // 0x18f964: 0xa6220650  sh          $v0, 0x650($s1)
    ctx->pc = 0x18f964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
label_18f968:
    // 0x18f968: 0x1000003b  b           . + 4 + (0x3B << 2)
label_18f96c:
    if (ctx->pc == 0x18F96Cu) {
        ctx->pc = 0x18F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F968u;
        // 0x18f96c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F970u;
        goto label_18f970;
    }
    ctx->pc = 0x18F968u;
    {
        const bool branch_taken_0x18f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F968u;
        // 0x18f96c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f968) {
            ctx->pc = 0x18FA58u;
            goto label_18fa58;
        }
    }
    ctx->pc = 0x18F970u;
label_18f970:
    // 0x18f970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f974:
    // 0x18f974: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18f974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18f978:
    // 0x18f978: 0x10000038  b           . + 4 + (0x38 << 2)
label_18f97c:
    if (ctx->pc == 0x18F97Cu) {
        ctx->pc = 0x18F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F978u;
        // 0x18f97c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F980u;
        goto label_18f980;
    }
    ctx->pc = 0x18F978u;
    {
        const bool branch_taken_0x18f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F978u;
        // 0x18f97c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f978) {
            ctx->pc = 0x18FA5Cu;
            goto label_18fa5c;
        }
    }
    ctx->pc = 0x18F980u;
label_18f980:
    // 0x18f980: 0x96220650  lhu         $v0, 0x650($s1)
    ctx->pc = 0x18f980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1616)));
label_18f984:
    // 0x18f984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18f988:
    // 0x18f988: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18f98c:
    // 0x18f98c: 0x1c600034  bgtz        $v1, . + 4 + (0x34 << 2)
label_18f990:
    if (ctx->pc == 0x18F990u) {
        ctx->pc = 0x18F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F98Cu;
        // 0x18f990: 0xa6220650  sh          $v0, 0x650($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F994u;
        goto label_18f994;
    }
    ctx->pc = 0x18F98Cu;
    {
        const bool branch_taken_0x18f98c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F98Cu;
        // 0x18f990: 0xa6220650  sh          $v0, 0x650($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f98c) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F994u;
label_18f994:
    // 0x18f994: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18f998:
    // 0x18f998: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18f99c:
    // 0x18f99c: 0xa6220650  sh          $v0, 0x650($s1)
    ctx->pc = 0x18f99cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
label_18f9a0:
    // 0x18f9a0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_18f9a4:
    if (ctx->pc == 0x18F9A4u) {
        ctx->pc = 0x18F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9A0u;
        // 0x18f9a4: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9A8u;
        goto label_18f9a8;
    }
    ctx->pc = 0x18F9A0u;
    {
        const bool branch_taken_0x18f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9A0u;
        // 0x18f9a4: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9a0) {
            ctx->pc = 0x18FA58u;
            goto label_18fa58;
        }
    }
    ctx->pc = 0x18F9A8u;
label_18f9a8:
    // 0x18f9a8: 0x96220650  lhu         $v0, 0x650($s1)
    ctx->pc = 0x18f9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1616)));
label_18f9ac:
    // 0x18f9ac: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18f9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_18f9b0:
    // 0x18f9b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f9b4:
    // 0x18f9b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18f9b8:
    // 0x18f9b8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18f9bc:
    // 0x18f9bc: 0xa6220650  sh          $v0, 0x650($s1)
    ctx->pc = 0x18f9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
label_18f9c0:
    // 0x18f9c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18f9c4:
    // 0x18f9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18f9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f9c8:
    // 0x18f9c8: 0x0  nop
    ctx->pc = 0x18f9c8u;
    // NOP
label_18f9cc:
    // 0x18f9cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18f9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18f9d0:
    // 0x18f9d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18f9d0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_18f9d4:
    // 0x18f9d4: 0x1c600022  bgtz        $v1, . + 4 + (0x22 << 2)
label_18f9d8:
    if (ctx->pc == 0x18F9D8u) {
        ctx->pc = 0x18F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9D4u;
        // 0x18f9d8: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9DCu;
        goto label_18f9dc;
    }
    ctx->pc = 0x18F9D4u;
    {
        const bool branch_taken_0x18f9d4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9D4u;
        // 0x18f9d8: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9d4) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F9DCu;
label_18f9dc:
    // 0x18f9dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18f9e0:
    // 0x18f9e0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18f9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18f9e4:
    // 0x18f9e4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_18f9e8:
    if (ctx->pc == 0x18F9E8u) {
        ctx->pc = 0x18F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9E4u;
        // 0x18f9e8: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9ECu;
        goto label_18f9ec;
    }
    ctx->pc = 0x18F9E4u;
    {
        const bool branch_taken_0x18f9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9E4u;
        // 0x18f9e8: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9e4) {
            ctx->pc = 0x18FA5Cu;
            goto label_18fa5c;
        }
    }
    ctx->pc = 0x18F9ECu;
label_18f9ec:
    // 0x18f9ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18f9f0:
    // 0x18f9f0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18f9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18f9f4:
    // 0x18f9f4: 0x10000018  b           . + 4 + (0x18 << 2)
label_18f9f8:
    if (ctx->pc == 0x18F9F8u) {
        ctx->pc = 0x18F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9F4u;
        // 0x18f9f8: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9FCu;
        goto label_18f9fc;
    }
    ctx->pc = 0x18F9F4u;
    {
        const bool branch_taken_0x18f9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9F4u;
        // 0x18f9f8: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9f4) {
            ctx->pc = 0x18FA58u;
            goto label_18fa58;
        }
    }
    ctx->pc = 0x18F9FCu;
label_18f9fc:
    // 0x18f9fc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x18f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_18fa00:
    // 0x18fa00: 0x26220660  addiu       $v0, $s1, 0x660
    ctx->pc = 0x18fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_18fa04:
    // 0x18fa04: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18fa04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18fa08:
    // 0x18fa08: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18fa08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18fa0c:
    // 0x18fa0c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18fa0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fa10:
    // 0x18fa10: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18fa10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fa14:
    // 0x18fa14: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x18fa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_18fa18:
    // 0x18fa18: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18fa18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_18fa1c:
    // 0x18fa1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fa1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fa20:
    // 0x18fa20: 0xda240660  lqc2        $vf4, 0x660($s1)
    ctx->pc = 0x18fa20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1632)));
label_18fa24:
    // 0x18fa24: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18fa24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18fa28:
    // 0x18fa28: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18fa28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18fa2c:
    // 0x18fa2c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18fa2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fa30:
    // 0x18fa30: 0xfa240660  sqc2        $vf4, 0x660($s1)
    ctx->pc = 0x18fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1632), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fa34:
    // 0x18fa34: 0x96220650  lhu         $v0, 0x650($s1)
    ctx->pc = 0x18fa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1616)));
label_18fa38:
    // 0x18fa38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18fa3c:
    // 0x18fa3c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18fa40:
    // 0x18fa40: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
label_18fa44:
    if (ctx->pc == 0x18FA44u) {
        ctx->pc = 0x18FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA40u;
        // 0x18fa44: 0xa6220650  sh          $v0, 0x650($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA48u;
        goto label_18fa48;
    }
    ctx->pc = 0x18FA40u;
    {
        const bool branch_taken_0x18fa40 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA40u;
        // 0x18fa44: 0xa6220650  sh          $v0, 0x650($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1616), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa40) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18FA48u;
label_18fa48:
    // 0x18fa48: 0x96220548  lhu         $v0, 0x548($s1)
    ctx->pc = 0x18fa48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
label_18fa4c:
    // 0x18fa4c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x18fa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_18fa50:
    // 0x18fa50: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x18fa50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_18fa54:
    // 0x18fa54: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18fa54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18fa58:
    // 0x18fa58: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18fa58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18fa5c:
    // 0x18fa5c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18fa60:
    // 0x18fa60: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18fa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18fa64:
    // 0x18fa64: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18fa64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fa68:
    // 0x18fa68: 0x10560052  beq         $v0, $s6, . + 4 + (0x52 << 2)
label_18fa6c:
    if (ctx->pc == 0x18FA6Cu) {
        ctx->pc = 0x18FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA68u;
        // 0x18fa6c: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA70u;
        goto label_18fa70;
    }
    ctx->pc = 0x18FA68u;
    {
        const bool branch_taken_0x18fa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x18FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA68u;
        // 0x18fa6c: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa68) {
            ctx->pc = 0x18FBB4u;
            goto label_18fbb4;
        }
    }
    ctx->pc = 0x18FA70u;
label_18fa70:
    // 0x18fa70: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_18fa74:
    // 0x18fa74: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18fa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18fa78:
    // 0x18fa78: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x18fa78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18fa7c:
    // 0x18fa7c: 0x26350720  addiu       $s5, $s1, 0x720
    ctx->pc = 0x18fa7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
label_18fa80:
    // 0x18fa80: 0x263006f0  addiu       $s0, $s1, 0x6F0
    ctx->pc = 0x18fa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_18fa84:
    // 0x18fa84: 0x26340710  addiu       $s4, $s1, 0x710
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_18fa88:
    // 0x18fa88: 0x26330700  addiu       $s3, $s1, 0x700
    ctx->pc = 0x18fa88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_18fa8c:
    // 0x18fa8c: 0x263206e0  addiu       $s2, $s1, 0x6E0
    ctx->pc = 0x18fa8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_18fa90:
    // 0x18fa90: 0xc05ce40  jal         func_173900
label_18fa94:
    if (ctx->pc == 0x18FA94u) {
        ctx->pc = 0x18FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA90u;
        // 0x18fa94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA98u;
        goto label_18fa98;
    }
    ctx->pc = 0x18FA90u;
    SET_GPR_U32(ctx, 31, 0x18FA98u);
    ctx->pc = 0x18FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA90u;
    // 0x18fa94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x18FA90u, 0x18FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA98u;
label_18fa98:
    // 0x18fa98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fa9c:
    // 0x18fa9c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_18faa0:
    if (ctx->pc == 0x18FAA0u) {
        ctx->pc = 0x18FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA9Cu;
        // 0x18faa0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA4u;
        goto label_18faa4;
    }
    ctx->pc = 0x18FA9Cu;
    {
        const bool branch_taken_0x18fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18fa9c) {
            ctx->pc = 0x18FAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FA9Cu;
            // 0x18faa0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FB8Cu;
            goto label_18fb8c;
        }
    }
    ctx->pc = 0x18FAA4u;
label_18faa4:
    // 0x18faa4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18faa8:
    // 0x18faa8: 0xc0a4bd4  jal         func_292F50
label_18faac:
    if (ctx->pc == 0x18FAACu) {
        ctx->pc = 0x18FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAA8u;
        // 0x18faac: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAB0u;
        goto label_18fab0;
    }
    ctx->pc = 0x18FAA8u;
    SET_GPR_U32(ctx, 31, 0x18FAB0u);
    ctx->pc = 0x18FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAA8u;
    // 0x18faac: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x18FAA8u, 0x18FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FAB0u;
label_18fab0:
    // 0x18fab0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18fab0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18fab4:
    // 0x18fab4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18fab4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18fab8:
    // 0x18fab8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18fab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fabc:
    // 0x18fabc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18fabcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18fac0:
    // 0x18fac0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18fac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18fac4:
    // 0x18fac4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18fac4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18fac8:
    // 0x18fac8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18fac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18facc:
    // 0x18facc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fad0:
    // 0x18fad0: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18fad0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18fad4:
    // 0x18fad4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fad8:
    // 0x18fad8: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18fad8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18fadc:
    // 0x18fadc: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18fadcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18fae0:
    // 0x18fae0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18fae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fae4:
    // 0x18fae4: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fae8:
    // 0x18fae8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18fae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18faec:
    // 0x18faec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18faf0:
    // 0x18faf0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18faf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18faf4:
    // 0x18faf4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18faf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18faf8:
    // 0x18faf8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18faf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18fafc:
    // 0x18fafc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18fafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fb00:
    // 0x18fb00: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fb04:
    // 0x18fb04: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18fb04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18fb08:
    // 0x18fb08: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fb0c:
    // 0x18fb0c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18fb0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18fb10:
    // 0x18fb10: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18fb10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18fb14:
    // 0x18fb14: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18fb14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fb18:
    // 0x18fb18: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18fb1c:
    // 0x18fb1c: 0xc07df68  jal         func_1F7DA0
label_18fb20:
    if (ctx->pc == 0x18FB20u) {
        ctx->pc = 0x18FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB1Cu;
        // 0x18fb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB24u;
        goto label_18fb24;
    }
    ctx->pc = 0x18FB1Cu;
    SET_GPR_U32(ctx, 31, 0x18FB24u);
    ctx->pc = 0x18FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB1Cu;
    // 0x18fb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18FB1Cu, 0x18FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB24u;
label_18fb24:
    // 0x18fb24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fb28:
    // 0x18fb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18fb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fb2c:
    // 0x18fb2c: 0xc051dca  jal         func_147728
label_18fb30:
    if (ctx->pc == 0x18FB30u) {
        ctx->pc = 0x18FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB2Cu;
        // 0x18fb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB34u;
        goto label_18fb34;
    }
    ctx->pc = 0x18FB2Cu;
    SET_GPR_U32(ctx, 31, 0x18FB34u);
    ctx->pc = 0x18FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB2Cu;
    // 0x18fb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18FB2Cu, 0x18FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB34u;
label_18fb34:
    // 0x18fb34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fb38:
    // 0x18fb38: 0xc051f10  jal         func_147C40
label_18fb3c:
    if (ctx->pc == 0x18FB3Cu) {
        ctx->pc = 0x18FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB38u;
        // 0x18fb3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB40u;
        goto label_18fb40;
    }
    ctx->pc = 0x18FB38u;
    SET_GPR_U32(ctx, 31, 0x18FB40u);
    ctx->pc = 0x18FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB38u;
    // 0x18fb3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18FB38u, 0x18FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB40u;
label_18fb40:
    // 0x18fb40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fb44:
    // 0x18fb44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18fb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18fb48:
    // 0x18fb48: 0xc051efe  jal         func_147BF8
label_18fb4c:
    if (ctx->pc == 0x18FB4Cu) {
        ctx->pc = 0x18FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB48u;
        // 0x18fb4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB50u;
        goto label_18fb50;
    }
    ctx->pc = 0x18FB48u;
    SET_GPR_U32(ctx, 31, 0x18FB50u);
    ctx->pc = 0x18FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB48u;
    // 0x18fb4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18FB48u, 0x18FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB50u;
label_18fb50:
    // 0x18fb50: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18fb54:
    // 0x18fb54: 0xc051d4a  jal         func_147528
label_18fb58:
    if (ctx->pc == 0x18FB58u) {
        ctx->pc = 0x18FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB54u;
        // 0x18fb58: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB5Cu;
        goto label_18fb5c;
    }
    ctx->pc = 0x18FB54u;
    SET_GPR_U32(ctx, 31, 0x18FB5Cu);
    ctx->pc = 0x18FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB54u;
    // 0x18fb58: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18FB54u, 0x18FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB5Cu;
label_18fb5c:
    // 0x18fb5c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fb60:
    // 0x18fb60: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fb64:
    // 0x18fb64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18fb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18fb68:
    // 0x18fb68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18fb6c:
    // 0x18fb6c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18fb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fb70:
    // 0x18fb70: 0x0  nop
    ctx->pc = 0x18fb70u;
    // NOP
label_18fb74:
    // 0x18fb74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18fb78:
    if (ctx->pc == 0x18FB78u) {
        ctx->pc = 0x18FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB74u;
        // 0x18fb78: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB7Cu;
        goto label_18fb7c;
    }
    ctx->pc = 0x18FB74u;
    {
        const bool branch_taken_0x18fb74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB74u;
        // 0x18fb78: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb74) {
            ctx->pc = 0x18FB88u;
            goto label_18fb88;
        }
    }
    ctx->pc = 0x18FB7Cu;
label_18fb7c:
    // 0x18fb7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18fb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fb80:
    // 0x18fb80: 0xc05bd90  jal         func_16F640
label_18fb84:
    if (ctx->pc == 0x18FB84u) {
        ctx->pc = 0x18FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB80u;
        // 0x18fb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB88u;
        goto label_18fb88;
    }
    ctx->pc = 0x18FB80u;
    SET_GPR_U32(ctx, 31, 0x18FB88u);
    ctx->pc = 0x18FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB80u;
    // 0x18fb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18FB80u, 0x18FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB88u;
label_18fb88:
    // 0x18fb88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18fb88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18fb8c:
    // 0x18fb8c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_18fb90:
    // 0x18fb90: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18fb94:
    // 0x18fb94: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_18fb98:
    // 0x18fb98: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18fb98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18fb9c:
    // 0x18fb9c: 0x2ac20007  slti        $v0, $s6, 0x7
    ctx->pc = 0x18fb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)7) ? 1 : 0);
label_18fba0:
    // 0x18fba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18fba4:
    if (ctx->pc == 0x18FBA4u) {
        ctx->pc = 0x18FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBA0u;
        // 0x18fba4: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBA8u;
        goto label_18fba8;
    }
    ctx->pc = 0x18FBA0u;
    {
        const bool branch_taken_0x18fba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBA0u;
        // 0x18fba4: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fba0) {
            ctx->pc = 0x18FBB4u;
            goto label_18fbb4;
        }
    }
    ctx->pc = 0x18FBA8u;
label_18fba8:
    // 0x18fba8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18fba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18fbac:
    // 0x18fbac: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_18fbb0:
    if (ctx->pc == 0x18FBB0u) {
        ctx->pc = 0x18FBB4u;
        goto label_18fbb4;
    }
    ctx->pc = 0x18FBACu;
    {
        const bool branch_taken_0x18fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18fbac) {
            ctx->pc = 0x18FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fa90;
        }
    }
    ctx->pc = 0x18FBB4u;
label_18fbb4:
    // 0x18fbb4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x18fbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18fbb8:
    // 0x18fbb8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x18fbb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18fbbc:
    // 0x18fbbc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18fbbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18fbc0:
    // 0x18fbc0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x18fbc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18fbc4:
    // 0x18fbc4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x18fbc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18fbc8:
    // 0x18fbc8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x18fbc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18fbcc:
    // 0x18fbcc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18fbccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18fbd0:
    // 0x18fbd0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18fbd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18fbd4:
    // 0x18fbd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18fbd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18fbd8:
    // 0x18fbd8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18fbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18fbdc:
    // 0x18fbdc: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18fbe0:
    // 0x18fbe0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x18fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18fbe4:
    // 0x18fbe4: 0x3e00008  jr          $ra
label_18fbe8:
    if (ctx->pc == 0x18FBE8u) {
        ctx->pc = 0x18FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBE4u;
        // 0x18fbe8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBECu;
        goto label_18fbec;
    }
    ctx->pc = 0x18FBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBE4u;
        // 0x18fbe8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FBECu;
label_18fbec:
    // 0x18fbec: 0x0  nop
    ctx->pc = 0x18fbecu;
    // NOP
    ctx->pc = 0x18fbf0u;
}
