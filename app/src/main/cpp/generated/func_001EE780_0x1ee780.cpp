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

// Function: func_001EE780
// Address: 0x1ee780 - 0x1ee9a0
void func_001EE780_0x1ee780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EE780_0x1ee780");
#endif

    switch (ctx->pc) {
        case 0x1ee780u: goto label_1ee780;
        case 0x1ee784u: goto label_1ee784;
        case 0x1ee788u: goto label_1ee788;
        case 0x1ee78cu: goto label_1ee78c;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee794u: goto label_1ee794;
        case 0x1ee798u: goto label_1ee798;
        case 0x1ee79cu: goto label_1ee79c;
        case 0x1ee7a0u: goto label_1ee7a0;
        case 0x1ee7a4u: goto label_1ee7a4;
        case 0x1ee7a8u: goto label_1ee7a8;
        case 0x1ee7acu: goto label_1ee7ac;
        case 0x1ee7b0u: goto label_1ee7b0;
        case 0x1ee7b4u: goto label_1ee7b4;
        case 0x1ee7b8u: goto label_1ee7b8;
        case 0x1ee7bcu: goto label_1ee7bc;
        case 0x1ee7c0u: goto label_1ee7c0;
        case 0x1ee7c4u: goto label_1ee7c4;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7ccu: goto label_1ee7cc;
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee7d4u: goto label_1ee7d4;
        case 0x1ee7d8u: goto label_1ee7d8;
        case 0x1ee7dcu: goto label_1ee7dc;
        case 0x1ee7e0u: goto label_1ee7e0;
        case 0x1ee7e4u: goto label_1ee7e4;
        case 0x1ee7e8u: goto label_1ee7e8;
        case 0x1ee7ecu: goto label_1ee7ec;
        case 0x1ee7f0u: goto label_1ee7f0;
        case 0x1ee7f4u: goto label_1ee7f4;
        case 0x1ee7f8u: goto label_1ee7f8;
        case 0x1ee7fcu: goto label_1ee7fc;
        case 0x1ee800u: goto label_1ee800;
        case 0x1ee804u: goto label_1ee804;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee80cu: goto label_1ee80c;
        case 0x1ee810u: goto label_1ee810;
        case 0x1ee814u: goto label_1ee814;
        case 0x1ee818u: goto label_1ee818;
        case 0x1ee81cu: goto label_1ee81c;
        case 0x1ee820u: goto label_1ee820;
        case 0x1ee824u: goto label_1ee824;
        case 0x1ee828u: goto label_1ee828;
        case 0x1ee82cu: goto label_1ee82c;
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee838u: goto label_1ee838;
        case 0x1ee83cu: goto label_1ee83c;
        case 0x1ee840u: goto label_1ee840;
        case 0x1ee844u: goto label_1ee844;
        case 0x1ee848u: goto label_1ee848;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee888u: goto label_1ee888;
        case 0x1ee88cu: goto label_1ee88c;
        case 0x1ee890u: goto label_1ee890;
        case 0x1ee894u: goto label_1ee894;
        case 0x1ee898u: goto label_1ee898;
        case 0x1ee89cu: goto label_1ee89c;
        case 0x1ee8a0u: goto label_1ee8a0;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee8acu: goto label_1ee8ac;
        case 0x1ee8b0u: goto label_1ee8b0;
        case 0x1ee8b4u: goto label_1ee8b4;
        case 0x1ee8b8u: goto label_1ee8b8;
        case 0x1ee8bcu: goto label_1ee8bc;
        case 0x1ee8c0u: goto label_1ee8c0;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8c8u: goto label_1ee8c8;
        case 0x1ee8ccu: goto label_1ee8cc;
        case 0x1ee8d0u: goto label_1ee8d0;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee8d8u: goto label_1ee8d8;
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8e0u: goto label_1ee8e0;
        case 0x1ee8e4u: goto label_1ee8e4;
        case 0x1ee8e8u: goto label_1ee8e8;
        case 0x1ee8ecu: goto label_1ee8ec;
        case 0x1ee8f0u: goto label_1ee8f0;
        case 0x1ee8f4u: goto label_1ee8f4;
        case 0x1ee8f8u: goto label_1ee8f8;
        case 0x1ee8fcu: goto label_1ee8fc;
        case 0x1ee900u: goto label_1ee900;
        case 0x1ee904u: goto label_1ee904;
        case 0x1ee908u: goto label_1ee908;
        case 0x1ee90cu: goto label_1ee90c;
        case 0x1ee910u: goto label_1ee910;
        case 0x1ee914u: goto label_1ee914;
        case 0x1ee918u: goto label_1ee918;
        case 0x1ee91cu: goto label_1ee91c;
        case 0x1ee920u: goto label_1ee920;
        case 0x1ee924u: goto label_1ee924;
        case 0x1ee928u: goto label_1ee928;
        case 0x1ee92cu: goto label_1ee92c;
        case 0x1ee930u: goto label_1ee930;
        case 0x1ee934u: goto label_1ee934;
        case 0x1ee938u: goto label_1ee938;
        case 0x1ee93cu: goto label_1ee93c;
        case 0x1ee940u: goto label_1ee940;
        case 0x1ee944u: goto label_1ee944;
        case 0x1ee948u: goto label_1ee948;
        case 0x1ee94cu: goto label_1ee94c;
        case 0x1ee950u: goto label_1ee950;
        case 0x1ee954u: goto label_1ee954;
        case 0x1ee958u: goto label_1ee958;
        case 0x1ee95cu: goto label_1ee95c;
        case 0x1ee960u: goto label_1ee960;
        case 0x1ee964u: goto label_1ee964;
        case 0x1ee968u: goto label_1ee968;
        case 0x1ee96cu: goto label_1ee96c;
        case 0x1ee970u: goto label_1ee970;
        case 0x1ee974u: goto label_1ee974;
        case 0x1ee978u: goto label_1ee978;
        case 0x1ee97cu: goto label_1ee97c;
        case 0x1ee980u: goto label_1ee980;
        case 0x1ee984u: goto label_1ee984;
        case 0x1ee988u: goto label_1ee988;
        case 0x1ee98cu: goto label_1ee98c;
        case 0x1ee990u: goto label_1ee990;
        case 0x1ee994u: goto label_1ee994;
        case 0x1ee998u: goto label_1ee998;
        case 0x1ee99cu: goto label_1ee99c;
        default: break;
    }

    ctx->pc = 0x1ee780u;

label_1ee780:
    // 0x1ee780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ee784:
    // 0x1ee784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ee784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ee788:
    // 0x1ee788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ee788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ee78c:
    // 0x1ee78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ee78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee790:
    // 0x1ee790: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ee790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ee794:
    // 0x1ee794: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1ee794u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1ee798:
    // 0x1ee798: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ee798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ee79c:
    // 0x1ee79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee7a0:
    // 0x1ee7a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ee7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7a4:
    // 0x1ee7a4: 0xc0c3ea6  jal         func_30FA98
label_1ee7a8:
    if (ctx->pc == 0x1EE7A8u) {
        ctx->pc = 0x1EE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7A4u;
        // 0x1ee7a8: 0x24040371  addiu       $a0, $zero, 0x371 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7ACu;
        goto label_1ee7ac;
    }
    ctx->pc = 0x1EE7A4u;
    SET_GPR_U32(ctx, 31, 0x1EE7ACu);
    ctx->pc = 0x1EE7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7A4u;
    // 0x1ee7a8: 0x24040371  addiu       $a0, $zero, 0x371 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1EE7A4u, 0x1EE7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE7ACu;
label_1ee7ac:
    // 0x1ee7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7b0:
    // 0x1ee7b0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1ee7b4:
    if (ctx->pc == 0x1EE7B4u) {
        ctx->pc = 0x1EE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7B0u;
        // 0x1ee7b4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7B8u;
        goto label_1ee7b8;
    }
    ctx->pc = 0x1EE7B0u;
    {
        const bool branch_taken_0x1ee7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7B0u;
        // 0x1ee7b4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7b0) {
            ctx->pc = 0x1EE7C0u;
            goto label_1ee7c0;
        }
    }
    ctx->pc = 0x1EE7B8u;
label_1ee7b8:
    // 0x1ee7b8: 0x10000073  b           . + 4 + (0x73 << 2)
label_1ee7bc:
    if (ctx->pc == 0x1EE7BCu) {
        ctx->pc = 0x1EE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7B8u;
        // 0x1ee7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7C0u;
        goto label_1ee7c0;
    }
    ctx->pc = 0x1EE7B8u;
    {
        const bool branch_taken_0x1ee7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7B8u;
        // 0x1ee7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7b8) {
            ctx->pc = 0x1EE988u;
            goto label_1ee988;
        }
    }
    ctx->pc = 0x1EE7C0u;
label_1ee7c0:
    // 0x1ee7c0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1ee7c4:
    // 0x1ee7c4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1ee7c8:
    // 0x1ee7c8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1ee7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1ee7cc:
    // 0x1ee7cc: 0x40f809  jalr        $v0
label_1ee7d0:
    if (ctx->pc == 0x1EE7D0u) {
        ctx->pc = 0x1EE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7CCu;
        // 0x1ee7d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7D4u;
        goto label_1ee7d4;
    }
    ctx->pc = 0x1EE7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE7D4u);
        ctx->pc = 0x1EE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7CCu;
        // 0x1ee7d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE7CCu, 0x1EE7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE7D4u;
label_1ee7d4:
    // 0x1ee7d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1ee7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1ee7d8:
    // 0x1ee7d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1ee7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1ee7dc:
    // 0x1ee7dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ee7e0:
    if (ctx->pc == 0x1EE7E0u) {
        ctx->pc = 0x1EE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7DCu;
        // 0x1ee7e0: 0xa2110004  sb          $s1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7E4u;
        goto label_1ee7e4;
    }
    ctx->pc = 0x1EE7DCu;
    {
        const bool branch_taken_0x1ee7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7DCu;
        // 0x1ee7e0: 0xa2110004  sb          $s1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7dc) {
            ctx->pc = 0x1EE800u;
            goto label_1ee800;
        }
    }
    ctx->pc = 0x1EE7E4u;
label_1ee7e4:
    // 0x1ee7e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1ee7e8:
    // 0x1ee7e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ee7ec:
    // 0x1ee7ec: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
label_1ee7f0:
    // 0x1ee7f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ee7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ee7f4:
    // 0x1ee7f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ee7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ee7f8:
    // 0x1ee7f8: 0x800008  jr          $a0
label_1ee7fc:
    if (ctx->pc == 0x1EE7FCu) {
        ctx->pc = 0x1EE800u;
        goto label_1ee800;
    }
    ctx->pc = 0x1EE7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE800u: goto label_1ee800;
            case 0x1EE81Cu: goto label_1ee81c;
            case 0x1EE838u: goto label_1ee838;
            case 0x1EE854u: goto label_1ee854;
            case 0x1EE868u: goto label_1ee868;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE7F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EE800u;
label_1ee800:
    // 0x1ee800: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ee800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee804:
    // 0x1ee804: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1ee808:
    if (ctx->pc == 0x1EE808u) {
        ctx->pc = 0x1EE80Cu;
        goto label_1ee80c;
    }
    ctx->pc = 0x1EE804u;
    {
        const bool branch_taken_0x1ee804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee804) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE80Cu;
label_1ee80c:
    // 0x1ee80c: 0xc06df7a  jal         func_1B7DE8
label_1ee810:
    if (ctx->pc == 0x1EE810u) {
        ctx->pc = 0x1EE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE80Cu;
        // 0x1ee810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE814u;
        goto label_1ee814;
    }
    ctx->pc = 0x1EE80Cu;
    SET_GPR_U32(ctx, 31, 0x1EE814u);
    ctx->pc = 0x1EE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE80Cu;
    // 0x1ee810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1EE80Cu, 0x1EE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE814u;
label_1ee814:
    // 0x1ee814: 0x10000014  b           . + 4 + (0x14 << 2)
label_1ee818:
    if (ctx->pc == 0x1EE818u) {
        ctx->pc = 0x1EE81Cu;
        goto label_1ee81c;
    }
    ctx->pc = 0x1EE814u;
    {
        const bool branch_taken_0x1ee814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee814) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE81Cu;
label_1ee81c:
    // 0x1ee81c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ee81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee820:
    // 0x1ee820: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_1ee824:
    if (ctx->pc == 0x1EE824u) {
        ctx->pc = 0x1EE828u;
        goto label_1ee828;
    }
    ctx->pc = 0x1EE820u;
    {
        const bool branch_taken_0x1ee820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee820) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE828u;
label_1ee828:
    // 0x1ee828: 0xc06df7a  jal         func_1B7DE8
label_1ee82c:
    if (ctx->pc == 0x1EE82Cu) {
        ctx->pc = 0x1EE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE828u;
        // 0x1ee82c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE830u;
        goto label_1ee830;
    }
    ctx->pc = 0x1EE828u;
    SET_GPR_U32(ctx, 31, 0x1EE830u);
    ctx->pc = 0x1EE82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE828u;
    // 0x1ee82c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1EE828u, 0x1EE830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE830u;
label_1ee830:
    // 0x1ee830: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ee834:
    if (ctx->pc == 0x1EE834u) {
        ctx->pc = 0x1EE838u;
        goto label_1ee838;
    }
    ctx->pc = 0x1EE830u;
    {
        const bool branch_taken_0x1ee830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee830) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE838u;
label_1ee838:
    // 0x1ee838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ee838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee83c:
    // 0x1ee83c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1ee840:
    if (ctx->pc == 0x1EE840u) {
        ctx->pc = 0x1EE844u;
        goto label_1ee844;
    }
    ctx->pc = 0x1EE83Cu;
    {
        const bool branch_taken_0x1ee83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee83c) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE844u;
label_1ee844:
    // 0x1ee844: 0xc06df7a  jal         func_1B7DE8
label_1ee848:
    if (ctx->pc == 0x1EE848u) {
        ctx->pc = 0x1EE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE844u;
        // 0x1ee848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE84Cu;
        goto label_1ee84c;
    }
    ctx->pc = 0x1EE844u;
    SET_GPR_U32(ctx, 31, 0x1EE84Cu);
    ctx->pc = 0x1EE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE844u;
    // 0x1ee848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1EE844u, 0x1EE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE84Cu;
label_1ee84c:
    // 0x1ee84c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ee850:
    if (ctx->pc == 0x1EE850u) {
        ctx->pc = 0x1EE854u;
        goto label_1ee854;
    }
    ctx->pc = 0x1EE84Cu;
    {
        const bool branch_taken_0x1ee84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee84c) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE854u;
label_1ee854:
    // 0x1ee854: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ee854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee858:
    // 0x1ee858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1ee85c:
    if (ctx->pc == 0x1EE85Cu) {
        ctx->pc = 0x1EE860u;
        goto label_1ee860;
    }
    ctx->pc = 0x1EE858u;
    {
        const bool branch_taken_0x1ee858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee858) {
            ctx->pc = 0x1EE868u;
            goto label_1ee868;
        }
    }
    ctx->pc = 0x1EE860u;
label_1ee860:
    // 0x1ee860: 0xc06df7a  jal         func_1B7DE8
label_1ee864:
    if (ctx->pc == 0x1EE864u) {
        ctx->pc = 0x1EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE860u;
        // 0x1ee864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE868u;
        goto label_1ee868;
    }
    ctx->pc = 0x1EE860u;
    SET_GPR_U32(ctx, 31, 0x1EE868u);
    ctx->pc = 0x1EE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE860u;
    // 0x1ee864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1EE860u, 0x1EE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE868u;
label_1ee868:
    // 0x1ee868: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1ee868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ee86c:
    // 0x1ee86c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1ee86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ee870:
    // 0x1ee870: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x1ee870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ee874:
    // 0x1ee874: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x1ee874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ee878:
    // 0x1ee878: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x1ee878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ee87c:
    // 0x1ee87c: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x1ee87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ee880:
    // 0x1ee880: 0x6a45001f  ldl         $a1, 0x1F($s2)
    ctx->pc = 0x1ee880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1ee884:
    // 0x1ee884: 0x6e450018  ldr         $a1, 0x18($s2)
    ctx->pc = 0x1ee884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1ee888:
    // 0x1ee888: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x1ee888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee88c:
    // 0x1ee88c: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x1ee88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee890:
    // 0x1ee890: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x1ee890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee894:
    // 0x1ee894: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x1ee894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee898:
    // 0x1ee898: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x1ee898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee89c:
    // 0x1ee89c: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x1ee89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee8a0:
    // 0x1ee8a0: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x1ee8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee8a4:
    // 0x1ee8a4: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x1ee8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee8a8:
    // 0x1ee8a8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1ee8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1ee8ac:
    // 0x1ee8ac: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1ee8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1ee8b0:
    // 0x1ee8b0: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1ee8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ee8b4:
    // 0x1ee8b4: 0xc0c7414  jal         func_31D050
label_1ee8b8:
    if (ctx->pc == 0x1EE8B8u) {
        ctx->pc = 0x1EE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8B4u;
        // 0x1ee8b8: 0xc60d0028  lwc1        $f13, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8BCu;
        goto label_1ee8bc;
    }
    ctx->pc = 0x1EE8B4u;
    SET_GPR_U32(ctx, 31, 0x1EE8BCu);
    ctx->pc = 0x1EE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8B4u;
    // 0x1ee8b8: 0xc60d0028  lwc1        $f13, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1EE8B4u, 0x1EE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8BCu;
label_1ee8bc:
    // 0x1ee8bc: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1ee8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee8c0:
    // 0x1ee8c0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1ee8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee8c4:
    // 0x1ee8c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1ee8c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ee8c8:
    // 0x1ee8c8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1ee8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1ee8cc:
    // 0x1ee8cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ee8d0:
    // 0x1ee8d0: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x1ee8d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1ee8d4:
    // 0x1ee8d4: 0xc0c73f8  jal         func_31CFE0
label_1ee8d8:
    if (ctx->pc == 0x1EE8D8u) {
        ctx->pc = 0x1EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8D4u;
        // 0x1ee8d8: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8DCu;
        goto label_1ee8dc;
    }
    ctx->pc = 0x1EE8D4u;
    SET_GPR_U32(ctx, 31, 0x1EE8DCu);
    ctx->pc = 0x1EE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8D4u;
    // 0x1ee8d8: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1EE8D4u, 0x1EE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8DCu;
label_1ee8dc:
    // 0x1ee8dc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ee8e0:
    // 0x1ee8e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ee8e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ee8e4:
    // 0x1ee8e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1ee8e8:
    if (ctx->pc == 0x1EE8E8u) {
        ctx->pc = 0x1EE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8E4u;
        // 0x1ee8e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8ECu;
        goto label_1ee8ec;
    }
    ctx->pc = 0x1EE8E4u;
    {
        const bool branch_taken_0x1ee8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8e4) {
            ctx->pc = 0x1EE8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE8E4u;
            // 0x1ee8e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE8ECu;
            goto label_1ee8ec;
        }
    }
    ctx->pc = 0x1EE8ECu;
label_1ee8ec:
    // 0x1ee8ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ee8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ee8f0:
    // 0x1ee8f0: 0x2010  mfhi        $a0
    ctx->pc = 0x1ee8f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ee8f4:
    // 0x1ee8f4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ee8f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ee8f8:
    // 0x1ee8f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1ee8fc:
    if (ctx->pc == 0x1EE8FCu) {
        ctx->pc = 0x1EE900u;
        goto label_1ee900;
    }
    ctx->pc = 0x1EE8F8u;
    {
        const bool branch_taken_0x1ee8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8f8) {
            ctx->pc = 0x1EE91Cu;
            goto label_1ee91c;
        }
    }
    ctx->pc = 0x1EE900u;
label_1ee900:
    // 0x1ee900: 0x3c01c22c  lui         $at, 0xC22C
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49708 << 16));
label_1ee904:
    // 0x1ee904: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ee904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee908:
    // 0x1ee908: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x1ee908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
label_1ee90c:
    // 0x1ee90c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee910:
    // 0x1ee910: 0xc0c7414  jal         func_31D050
label_1ee914:
    if (ctx->pc == 0x1EE914u) {
        ctx->pc = 0x1EE918u;
        goto label_1ee918;
    }
    ctx->pc = 0x1EE910u;
    SET_GPR_U32(ctx, 31, 0x1EE918u);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1EE910u, 0x1EE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE918u;
label_1ee918:
    // 0x1ee918: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1ee918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1ee91c:
    // 0x1ee91c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1ee91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1ee920:
    // 0x1ee920: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ee920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ee924:
    // 0x1ee924: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ee924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee928:
    // 0x1ee928: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1ee928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee92c:
    // 0x1ee92c: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1ee92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ee930:
    // 0x1ee930: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ee930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1ee934:
    // 0x1ee934: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ee934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ee938:
    // 0x1ee938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee93c:
    // 0x1ee93c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1ee93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee940:
    // 0x1ee940: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1ee940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1ee944:
    // 0x1ee944: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ee948:
    // 0x1ee948: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1ee948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee94c:
    // 0x1ee94c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ee94cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ee950:
    // 0x1ee950: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1ee950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ee954:
    // 0x1ee954: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x1ee954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_1ee958:
    // 0x1ee958: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1ee958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1ee95c:
    // 0x1ee95c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ee95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1ee960:
    // 0x1ee960: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_1ee964:
    // 0x1ee964: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1ee964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ee968:
    // 0x1ee968: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ee96c:
    // 0x1ee96c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1ee96cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ee970:
    // 0x1ee970: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ee974:
    // 0x1ee974: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ee974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ee978:
    // 0x1ee978: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ee97c:
    // 0x1ee97c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ee97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ee980:
    // 0x1ee980: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ee980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ee984:
    // 0x1ee984: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1ee984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_1ee988:
    // 0x1ee988: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ee988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee98c:
    // 0x1ee98c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ee98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee990:
    // 0x1ee990: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ee990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee994:
    // 0x1ee994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee998:
    // 0x1ee998: 0x3e00008  jr          $ra
label_1ee99c:
    if (ctx->pc == 0x1EE99Cu) {
        ctx->pc = 0x1EE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE998u;
        // 0x1ee99c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE9A0u;
        goto label_fallthrough_0x1ee998;
    }
    ctx->pc = 0x1EE998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE998u;
        // 0x1ee99c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee998:
    ctx->pc = 0x1EE9A0u;
}
