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

// Function: func_0030AC40
// Address: 0x30ac40 - 0x30b090
void func_0030AC40_0x30ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030AC40_0x30ac40");
#endif

    switch (ctx->pc) {
        case 0x30ac78u: goto label_30ac78;
        case 0x30ac80u: goto label_30ac80;
        case 0x30ac88u: goto label_30ac88;
        case 0x30ac90u: goto label_30ac90;
        case 0x30ac98u: goto label_30ac98;
        case 0x30aca0u: goto label_30aca0;
        case 0x30aca8u: goto label_30aca8;
        case 0x30acd8u: goto label_30acd8;
        case 0x30ace0u: goto label_30ace0;
        case 0x30acecu: goto label_30acec;
        case 0x30ad08u: goto label_30ad08;
        case 0x30ad18u: goto label_30ad18;
        case 0x30ad40u: goto label_30ad40;
        case 0x30ad48u: goto label_30ad48;
        case 0x30ad98u: goto label_30ad98;
        case 0x30ada0u: goto label_30ada0;
        case 0x30add8u: goto label_30add8;
        case 0x30ade0u: goto label_30ade0;
        case 0x30ae08u: goto label_30ae08;
        case 0x30ae38u: goto label_30ae38;
        case 0x30ae40u: goto label_30ae40;
        case 0x30ae78u: goto label_30ae78;
        case 0x30ae80u: goto label_30ae80;
        case 0x30aeb0u: goto label_30aeb0;
        case 0x30aed0u: goto label_30aed0;
        case 0x30af28u: goto label_30af28;
        case 0x30af38u: goto label_30af38;
        case 0x30af40u: goto label_30af40;
        case 0x30af50u: goto label_30af50;
        case 0x30af60u: goto label_30af60;
        case 0x30af68u: goto label_30af68;
        case 0x30af78u: goto label_30af78;
        case 0x30af80u: goto label_30af80;
        case 0x30afa4u: goto label_30afa4;
        case 0x30afb8u: goto label_30afb8;
        case 0x30afc4u: goto label_30afc4;
        case 0x30afd0u: goto label_30afd0;
        case 0x30affcu: goto label_30affc;
        case 0x30b008u: goto label_30b008;
        case 0x30b010u: goto label_30b010;
        case 0x30b018u: goto label_30b018;
        case 0x30b02cu: goto label_30b02c;
        case 0x30b038u: goto label_30b038;
        case 0x30b044u: goto label_30b044;
        case 0x30b050u: goto label_30b050;
        case 0x30b068u: goto label_30b068;
        case 0x30b070u: goto label_30b070;
        case 0x30b078u: goto label_30b078;
        case 0x30b088u: goto label_30b088;
        default: break;
    }

    ctx->pc = 0x30ac40u;

    // 0x30ac40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30ac44: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30ac48: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30ac4c: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x30ac4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x30ac50: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30ac54: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30ac58: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x30ac5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30ac60: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x30ac64: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x30ac68: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x30ac6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ac70: 0xc0c76d4  jal         func_31DB50
    ctx->pc = 0x30AC70u;
    SET_GPR_U32(ctx, 31, 0x30AC78u);
    ctx->pc = 0x30AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC70u;
    // 0x30ac74: 0x3c150074  lui         $s5, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB50u, 0x30AC70u, 0x30AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC78u;
label_30ac78:
    // 0x30ac78: 0xc0c394e  jal         func_30E538
    ctx->pc = 0x30AC78u;
    SET_GPR_U32(ctx, 31, 0x30AC80u);
    ctx->pc = 0x30E538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E538u, 0x30AC78u, 0x30AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC80u;
label_30ac80:
    // 0x30ac80: 0xc0c3950  jal         func_30E540
    ctx->pc = 0x30AC80u;
    SET_GPR_U32(ctx, 31, 0x30AC88u);
    ctx->pc = 0x30E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E540u, 0x30AC80u, 0x30AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC88u;
label_30ac88:
    // 0x30ac88: 0xc0c3952  jal         func_30E548
    ctx->pc = 0x30AC88u;
    SET_GPR_U32(ctx, 31, 0x30AC90u);
    ctx->pc = 0x30E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E548u, 0x30AC88u, 0x30AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC90u;
label_30ac90:
    // 0x30ac90: 0xc0c3954  jal         func_30E550
    ctx->pc = 0x30AC90u;
    SET_GPR_U32(ctx, 31, 0x30AC98u);
    ctx->pc = 0x30E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E550u, 0x30AC90u, 0x30AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC98u;
label_30ac98:
    // 0x30ac98: 0xc0c3956  jal         func_30E558
    ctx->pc = 0x30AC98u;
    SET_GPR_U32(ctx, 31, 0x30ACA0u);
    ctx->pc = 0x30E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E558u, 0x30AC98u, 0x30ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACA0u;
label_30aca0:
    // 0x30aca0: 0xc0c2ca6  jal         func_30B298
    ctx->pc = 0x30ACA0u;
    SET_GPR_U32(ctx, 31, 0x30ACA8u);
    ctx->pc = 0x30B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B298u, 0x30ACA0u, 0x30ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACA8u;
label_30aca8:
    // 0x30aca8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x30acac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30acb0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x30acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x30acb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30acb8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x30acb8u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x30acbc: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x30acbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x30acc0: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x30acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x30acc4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30acc8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30acc8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x30accc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x30acccu;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 5));
    // 0x30acd0: 0xc0c2da6  jal         func_30B698
    ctx->pc = 0x30ACD0u;
    SET_GPR_U32(ctx, 31, 0x30ACD8u);
    ctx->pc = 0x30B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B698u, 0x30ACD0u, 0x30ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACD8u;
label_30acd8:
    // 0x30acd8: 0xc0c2dca  jal         func_30B728
    ctx->pc = 0x30ACD8u;
    SET_GPR_U32(ctx, 31, 0x30ACE0u);
    ctx->pc = 0x30ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACD8u;
    // 0x30acdc: 0x26b074a0  addiu       $s0, $s5, 0x74A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B728u, 0x30ACD8u, 0x30ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACE0u;
label_30ace0:
    // 0x30ace0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30ace0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ace4: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30ACE4u;
    SET_GPR_U32(ctx, 31, 0x30ACECu);
    ctx->pc = 0x30ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACE4u;
    // 0x30ace8: 0x3c130075  lui         $s3, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30ACE4u, 0x30ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACECu;
label_30acec:
    // 0x30acec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x30acecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30acf0: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x30acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x30acf4: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x30acf4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x30acf8: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x30acf8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x30acfc: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x30acfcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x30ad00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30ad04: 0x0  nop
    ctx->pc = 0x30ad04u;
    // NOP
label_30ad08:
    // 0x30ad08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad0c: 0x24447a2c  addiu       $a0, $v0, 0x7A2C
    ctx->pc = 0x30ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x30ad10: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x30AD10u;
    SET_GPR_U32(ctx, 31, 0x30AD18u);
    ctx->pc = 0x30AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD10u;
    // 0x30ad14: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x30AD10u, 0x30AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD18u;
label_30ad18:
    // 0x30ad18: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ad1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30ad20: 0x8c822ce4  lw          $v0, 0x2CE4($a0)
    ctx->pc = 0x30ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x752CE4u));
    // 0x30ad24: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x30ad24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x30ad28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x30ad2c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x30ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x30ad30: 0xae603d84  sw          $zero, 0x3D84($s3)
    ctx->pc = 0x30ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15748), GPR_U32(ctx, 0));
    // 0x30ad34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x30ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ad38: 0xac622ce4  sw          $v0, 0x2CE4($v1)
    ctx->pc = 0x30ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11492), GPR_U32(ctx, 2));
    // 0x30ad3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ad40:
    // 0x30ad40: 0xc0e543e  jal         func_3950F8
    ctx->pc = 0x30AD40u;
    SET_GPR_U32(ctx, 31, 0x30AD48u);
    ctx->pc = 0x30AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD40u;
    // 0x30ad44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3950F8u, 0x30AD40u, 0x30AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD48u;
label_30ad48:
    // 0x30ad48: 0x0  nop
    ctx->pc = 0x30ad48u;
    // NOP
    // 0x30ad4c: 0x0  nop
    ctx->pc = 0x30ad4cu;
    // NOP
    // 0x30ad50: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30AD50u;
    {
        const bool branch_taken_0x30ad50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD50u;
        // 0x30ad54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad50) {
            ctx->pc = 0x30AD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ad40;
        }
    }
    ctx->pc = 0x30AD58u;
    // 0x30ad58: 0x26a374a0  addiu       $v1, $s5, 0x74A0
    ctx->pc = 0x30ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x30ad5c: 0x8c620578  lw          $v0, 0x578($v1)
    ctx->pc = 0x30ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1400)));
    // 0x30ad60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30ad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30ad64: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30AD64u;
    {
        const bool branch_taken_0x30ad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD64u;
        // 0x30ad68: 0x8c6205e4  lw          $v0, 0x5E4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad64) {
            ctx->pc = 0x30AE10u;
            goto label_30ae10;
        }
    }
    ctx->pc = 0x30AD6Cu;
    // 0x30ad6c: 0xae773d84  sw          $s7, 0x3D84($s3)
    ctx->pc = 0x30ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15748), GPR_U32(ctx, 23));
    // 0x30ad70: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x30ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x30ad74: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x30AD74u;
    {
        const bool branch_taken_0x30ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad74) {
            ctx->pc = 0x30AD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AD74u;
            // 0x30ad78: 0x92020569  lbu         $v0, 0x569($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ADBCu;
            goto label_30adbc;
        }
    }
    ctx->pc = 0x30AD7Cu;
    // 0x30ad7c: 0x8e823d80  lw          $v0, 0x3D80($s4)
    ctx->pc = 0x30ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15744)));
    // 0x30ad80: 0x8e030570  lw          $v1, 0x570($s0)
    ctx->pc = 0x30ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x30ad84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30ad84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ad88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x30AD88u;
    {
        const bool branch_taken_0x30ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad88) {
            ctx->pc = 0x30ADF4u;
            goto label_30adf4;
        }
    }
    ctx->pc = 0x30AD90u;
    // 0x30ad90: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30ad94: 0x0  nop
    ctx->pc = 0x30ad94u;
    // NOP
label_30ad98:
    // 0x30ad98: 0xc0ad2f0  jal         func_2B4BC0
    ctx->pc = 0x30AD98u;
    SET_GPR_U32(ctx, 31, 0x30ADA0u);
    ctx->pc = 0x30AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD98u;
    // 0x30ad9c: 0x264479d0  addiu       $a0, $s2, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BC0u, 0x30AD98u, 0x30ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADA0u;
label_30ada0:
    // 0x30ada0: 0x8e223d80  lw          $v0, 0x3D80($s1)
    ctx->pc = 0x30ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15744)));
    // 0x30ada4: 0x8e030570  lw          $v1, 0x570($s0)
    ctx->pc = 0x30ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x30ada8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30ada8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30adac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30ADACu;
    {
        const bool branch_taken_0x30adac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30adac) {
            ctx->pc = 0x30AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ad98;
        }
    }
    ctx->pc = 0x30ADB4u;
    // 0x30adb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30ADB4u;
    {
        const bool branch_taken_0x30adb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30adb4) {
            ctx->pc = 0x30ADF4u;
            goto label_30adf4;
        }
    }
    ctx->pc = 0x30ADBCu;
label_30adbc:
    // 0x30adbc: 0x8e833d80  lw          $v1, 0x3D80($s4)
    ctx->pc = 0x30adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15744)));
    // 0x30adc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30adc4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x30adc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30adc8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30ADC8u;
    {
        const bool branch_taken_0x30adc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADC8u;
        // 0x30adcc: 0xae020570  sw          $v0, 0x570($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30adc8) {
            ctx->pc = 0x30ADF4u;
            goto label_30adf4;
        }
    }
    ctx->pc = 0x30ADD0u;
    // 0x30add0: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30add0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30add4: 0x0  nop
    ctx->pc = 0x30add4u;
    // NOP
label_30add8:
    // 0x30add8: 0xc0ad2f0  jal         func_2B4BC0
    ctx->pc = 0x30ADD8u;
    SET_GPR_U32(ctx, 31, 0x30ADE0u);
    ctx->pc = 0x30ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADD8u;
    // 0x30addc: 0x264479d0  addiu       $a0, $s2, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BC0u, 0x30ADD8u, 0x30ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADE0u;
label_30ade0:
    // 0x30ade0: 0x92030569  lbu         $v1, 0x569($s0)
    ctx->pc = 0x30ade0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
    // 0x30ade4: 0x8e223d80  lw          $v0, 0x3D80($s1)
    ctx->pc = 0x30ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15744)));
    // 0x30ade8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30ade8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30adec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30ADECu;
    {
        const bool branch_taken_0x30adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30adec) {
            ctx->pc = 0x30ADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30add8;
        }
    }
    ctx->pc = 0x30ADF4u;
label_30adf4:
    // 0x30adf4: 0x8e623d84  lw          $v0, 0x3D84($s3)
    ctx->pc = 0x30adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15748)));
    // 0x30adf8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x30ADF8u;
    {
        const bool branch_taken_0x30adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30adf8) {
            ctx->pc = 0x30AED8u;
            goto label_30aed8;
        }
    }
    ctx->pc = 0x30AE00u;
    // 0x30ae00: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30AE00u;
    SET_GPR_U32(ctx, 31, 0x30AE08u);
    ctx->pc = 0x30AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE00u;
    // 0x30ae04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30AE00u, 0x30AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE08u;
label_30ae08:
    // 0x30ae08: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30AE08u;
    {
        const bool branch_taken_0x30ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae08) {
            ctx->pc = 0x30AED8u;
            goto label_30aed8;
        }
    }
    ctx->pc = 0x30AE10u;
label_30ae10:
    // 0x30ae10: 0xae773d84  sw          $s7, 0x3D84($s3)
    ctx->pc = 0x30ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15748), GPR_U32(ctx, 23));
    // 0x30ae14: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x30ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x30ae18: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x30AE18u;
    {
        const bool branch_taken_0x30ae18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae18) {
            ctx->pc = 0x30AE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AE18u;
            // 0x30ae1c: 0x92020569  lbu         $v0, 0x569($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AE5Cu;
            goto label_30ae5c;
        }
    }
    ctx->pc = 0x30AE20u;
    // 0x30ae20: 0x8ec23d88  lw          $v0, 0x3D88($s6)
    ctx->pc = 0x30ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15752)));
    // 0x30ae24: 0x8e030570  lw          $v1, 0x570($s0)
    ctx->pc = 0x30ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x30ae28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30ae28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ae2c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30AE2Cu;
    {
        const bool branch_taken_0x30ae2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae2c) {
            ctx->pc = 0x30AE94u;
            goto label_30ae94;
        }
    }
    ctx->pc = 0x30AE34u;
    // 0x30ae34: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30ae34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
label_30ae38:
    // 0x30ae38: 0xc0ad2f0  jal         func_2B4BC0
    ctx->pc = 0x30AE38u;
    SET_GPR_U32(ctx, 31, 0x30AE40u);
    ctx->pc = 0x30AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE38u;
    // 0x30ae3c: 0x264479d0  addiu       $a0, $s2, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BC0u, 0x30AE38u, 0x30AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE40u;
label_30ae40:
    // 0x30ae40: 0x8e223d88  lw          $v0, 0x3D88($s1)
    ctx->pc = 0x30ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15752)));
    // 0x30ae44: 0x8e030570  lw          $v1, 0x570($s0)
    ctx->pc = 0x30ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x30ae48: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30ae48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ae4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30AE4Cu;
    {
        const bool branch_taken_0x30ae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ae4c) {
            ctx->pc = 0x30AE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ae38;
        }
    }
    ctx->pc = 0x30AE54u;
    // 0x30ae54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30AE54u;
    {
        const bool branch_taken_0x30ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae54) {
            ctx->pc = 0x30AE94u;
            goto label_30ae94;
        }
    }
    ctx->pc = 0x30AE5Cu;
label_30ae5c:
    // 0x30ae5c: 0x8ec33d88  lw          $v1, 0x3D88($s6)
    ctx->pc = 0x30ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15752)));
    // 0x30ae60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae64: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x30ae64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30ae68: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30AE68u;
    {
        const bool branch_taken_0x30ae68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE68u;
        // 0x30ae6c: 0xae020570  sw          $v0, 0x570($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae68) {
            ctx->pc = 0x30AE94u;
            goto label_30ae94;
        }
    }
    ctx->pc = 0x30AE70u;
    // 0x30ae70: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30ae70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30ae74: 0x0  nop
    ctx->pc = 0x30ae74u;
    // NOP
label_30ae78:
    // 0x30ae78: 0xc0ad2f0  jal         func_2B4BC0
    ctx->pc = 0x30AE78u;
    SET_GPR_U32(ctx, 31, 0x30AE80u);
    ctx->pc = 0x30AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE78u;
    // 0x30ae7c: 0x264479d0  addiu       $a0, $s2, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BC0u, 0x30AE78u, 0x30AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE80u;
label_30ae80:
    // 0x30ae80: 0x92030569  lbu         $v1, 0x569($s0)
    ctx->pc = 0x30ae80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
    // 0x30ae84: 0x8e223d88  lw          $v0, 0x3D88($s1)
    ctx->pc = 0x30ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15752)));
    // 0x30ae88: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30ae88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ae8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30AE8Cu;
    {
        const bool branch_taken_0x30ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ae8c) {
            ctx->pc = 0x30AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ae78;
        }
    }
    ctx->pc = 0x30AE94u;
label_30ae94:
    // 0x30ae94: 0x8e623d84  lw          $v0, 0x3D84($s3)
    ctx->pc = 0x30ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15748)));
    // 0x30ae98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30AE98u;
    {
        const bool branch_taken_0x30ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE98u;
        // 0x30ae9c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae98) {
            ctx->pc = 0x30AED8u;
            goto label_30aed8;
        }
    }
    ctx->pc = 0x30AEA0u;
    // 0x30aea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30aea4: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x30aea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x30aea8: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x30AEA8u;
    SET_GPR_U32(ctx, 31, 0x30AEB0u);
    ctx->pc = 0x30AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEA8u;
    // 0x30aeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x30AEA8u, 0x30AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AEB0u;
label_30aeb0:
    // 0x30aeb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30AEB0u;
    {
        const bool branch_taken_0x30aeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aeb0) {
            ctx->pc = 0x30AED8u;
            goto label_30aed8;
        }
    }
    ctx->pc = 0x30AEB8u;
    // 0x30aeb8: 0x8e823d80  lw          $v0, 0x3D80($s4)
    ctx->pc = 0x30aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15744)));
    // 0x30aebc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30aec0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30aec4: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x30aec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x30aec8: 0xc0e5cfa  jal         func_3973E8
    ctx->pc = 0x30AEC8u;
    SET_GPR_U32(ctx, 31, 0x30AED0u);
    ctx->pc = 0x30AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEC8u;
    // 0x30aecc: 0x24452d80  addiu       $a1, $v0, 0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973E8u, 0x30AEC8u, 0x30AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AED0u;
label_30aed0:
    // 0x30aed0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x30aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x30aed4: 0xac603d84  sw          $zero, 0x3D84($v1)
    ctx->pc = 0x30aed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x753D84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x753D84u, _value); } while (0);
label_30aed8:
    // 0x30aed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30aed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30aedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30aedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30aee0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30aee4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x30aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30aee8: 0x92040569  lbu         $a0, 0x569($s0)
    ctx->pc = 0x30aee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
    // 0x30aeec: 0xe600055c  swc1        $f0, 0x55C($s0)
    ctx->pc = 0x30aeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1372), bits); }
    // 0x30aef0: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x30aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x30aef4: 0xa2030568  sb          $v1, 0x568($s0)
    ctx->pc = 0x30aef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 3));
    // 0x30aef8: 0x14970009  bne         $a0, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x30AEF8u;
    {
        const bool branch_taken_0x30aef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        ctx->pc = 0x30AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEF8u;
        // 0x30aefc: 0xae000564  sw          $zero, 0x564($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aef8) {
            ctx->pc = 0x30AF20u;
            goto label_30af20;
        }
    }
    ctx->pc = 0x30AF00u;
    // 0x30af00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30af04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30af04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30af08: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x30af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x30af0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30af10: 0xa2020568  sb          $v0, 0x568($s0)
    ctx->pc = 0x30af10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 2));
    // 0x30af14: 0xe600055c  swc1        $f0, 0x55C($s0)
    ctx->pc = 0x30af14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1372), bits); }
    // 0x30af18: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x30af18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    // 0x30af1c: 0xae040564  sw          $a0, 0x564($s0)
    ctx->pc = 0x30af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 4));
label_30af20:
    // 0x30af20: 0xc0ad294  jal         func_2B4A50
    ctx->pc = 0x30AF20u;
    SET_GPR_U32(ctx, 31, 0x30AF28u);
    ctx->pc = 0x30AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF20u;
    // 0x30af24: 0x264479d0  addiu       $a0, $s2, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A50u, 0x30AF20u, 0x30AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF28u;
label_30af28:
    // 0x30af28: 0xae803d80  sw          $zero, 0x3D80($s4)
    ctx->pc = 0x30af28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15744), GPR_U32(ctx, 0));
    // 0x30af2c: 0xaec03d88  sw          $zero, 0x3D88($s6)
    ctx->pc = 0x30af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15752), GPR_U32(ctx, 0));
    // 0x30af30: 0xc0c32a8  jal         func_30CAA0
    ctx->pc = 0x30AF30u;
    SET_GPR_U32(ctx, 31, 0x30AF38u);
    ctx->pc = 0x30CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAA0u, 0x30AF30u, 0x30AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF38u;
label_30af38:
    // 0x30af38: 0xc0c2b0e  jal         func_30AC38
    ctx->pc = 0x30AF38u;
    SET_GPR_U32(ctx, 31, 0x30AF40u);
    ctx->pc = 0x30AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AC38u, 0x30AF38u, 0x30AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF40u;
label_30af40:
    // 0x30af40: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30af40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30af44: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x30af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x30af48: 0xc0c694e  jal         func_31A538
    ctx->pc = 0x30AF48u;
    SET_GPR_U32(ctx, 31, 0x30AF50u);
    ctx->pc = 0x31A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A538u, 0x30AF48u, 0x30AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF50u;
label_30af50:
    // 0x30af50: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x30af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x30af54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30af58: 0xc056c30  jal         func_15B0C0
    ctx->pc = 0x30AF58u;
    SET_GPR_U32(ctx, 31, 0x30AF60u);
    ctx->pc = 0x30AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF58u;
    // 0x30af5c: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C0u, 0x30AF58u, 0x30AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF60u;
label_30af60:
    // 0x30af60: 0xc0c1b44  jal         func_306D10
    ctx->pc = 0x30AF60u;
    SET_GPR_U32(ctx, 31, 0x30AF68u);
    ctx->pc = 0x306D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306D10u, 0x30AF60u, 0x30AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF68u;
label_30af68:
    // 0x30af68: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30af68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30af6c: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x30af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x30af70: 0xc0c68ce  jal         func_31A338
    ctx->pc = 0x30AF70u;
    SET_GPR_U32(ctx, 31, 0x30AF78u);
    ctx->pc = 0x31A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A338u, 0x30AF70u, 0x30AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF78u;
label_30af78:
    // 0x30af78: 0xc0c2c24  jal         func_30B090
    ctx->pc = 0x30AF78u;
    SET_GPR_U32(ctx, 31, 0x30AF80u);
    ctx->pc = 0x30B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B090u, 0x30AF78u, 0x30AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF80u;
label_30af80:
    // 0x30af80: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x30af80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30af84: 0x8c837a24  lw          $v1, 0x7A24($a0)
    ctx->pc = 0x30af84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x30af88: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x30af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x30af8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AF8Cu;
    {
        const bool branch_taken_0x30af8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF8Cu;
        // 0x30af90: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af8c) {
            ctx->pc = 0x30AFACu;
            goto label_30afac;
        }
    }
    ctx->pc = 0x30AF94u;
    // 0x30af94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AF94u;
    {
        const bool branch_taken_0x30af94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF94u;
        // 0x30af98: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af94) {
            ctx->pc = 0x30AFB0u;
            goto label_30afb0;
        }
    }
    ctx->pc = 0x30AF9Cu;
    // 0x30af9c: 0xc0c2d08  jal         func_30B420
    ctx->pc = 0x30AF9Cu;
    SET_GPR_U32(ctx, 31, 0x30AFA4u);
    ctx->pc = 0x30B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B420u, 0x30AF9Cu, 0x30AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFA4u;
label_30afa4:
    // 0x30afa4: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x30AFA4u;
    {
        const bool branch_taken_0x30afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30afa4) {
            ctx->pc = 0x30ACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30acd8;
        }
    }
    ctx->pc = 0x30AFACu;
label_30afac:
    // 0x30afac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x30afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_30afb0:
    // 0x30afb0: 0xc0542aa  jal         func_150AA8
    ctx->pc = 0x30AFB0u;
    SET_GPR_U32(ctx, 31, 0x30AFB8u);
    ctx->pc = 0x30AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFB0u;
    // 0x30afb4: 0x244464a0  addiu       $a0, $v0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AA8u, 0x30AFB0u, 0x30AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFB8u;
label_30afb8:
    // 0x30afb8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x30afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x30afbc: 0xc0af6f4  jal         func_2BDBD0
    ctx->pc = 0x30AFBCu;
    SET_GPR_U32(ctx, 31, 0x30AFC4u);
    ctx->pc = 0x30AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFBCu;
    // 0x30afc0: 0x246480e0  addiu       $a0, $v1, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDBD0u, 0x30AFBCu, 0x30AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFC4u;
label_30afc4:
    // 0x30afc4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x30afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x30afc8: 0xc0af880  jal         func_2BE200
    ctx->pc = 0x30AFC8u;
    SET_GPR_U32(ctx, 31, 0x30AFD0u);
    ctx->pc = 0x30AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFC8u;
    // 0x30afcc: 0x24448140  addiu       $a0, $v0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE200u, 0x30AFC8u, 0x30AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFD0u;
label_30afd0:
    // 0x30afd0: 0x26a374a0  addiu       $v1, $s5, 0x74A0
    ctx->pc = 0x30afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x30afd4: 0x8c620578  lw          $v0, 0x578($v1)
    ctx->pc = 0x30afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1400)));
    // 0x30afd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30afdc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30AFDCu;
    {
        const bool branch_taken_0x30afdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30afdc) {
            ctx->pc = 0x30AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AFDCu;
            // 0x30afe0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B000u;
            goto label_30b000;
        }
    }
    ctx->pc = 0x30AFE4u;
    // 0x30afe4: 0x906205d9  lbu         $v0, 0x5D9($v1)
    ctx->pc = 0x30afe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1497)));
    // 0x30afe8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x30afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x30afec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AFECu;
    {
        const bool branch_taken_0x30afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFECu;
        // 0x30aff0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afec) {
            ctx->pc = 0x30B000u;
            goto label_30b000;
        }
    }
    ctx->pc = 0x30AFF4u;
    // 0x30aff4: 0xc0c36b6  jal         func_30DAD8
    ctx->pc = 0x30AFF4u;
    SET_GPR_U32(ctx, 31, 0x30AFFCu);
    ctx->pc = 0x30DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DAD8u, 0x30AFF4u, 0x30AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFFCu;
label_30affc:
    // 0x30affc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30affcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_30b000:
    // 0x30b000: 0xc0a937e  jal         func_2A4DF8
    ctx->pc = 0x30B000u;
    SET_GPR_U32(ctx, 31, 0x30B008u);
    ctx->pc = 0x30B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B000u;
    // 0x30b004: 0x8c642380  lw          $a0, 0x2380($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4DF8u, 0x30B000u, 0x30B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B008u;
label_30b008:
    // 0x30b008: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x30B008u;
    SET_GPR_U32(ctx, 31, 0x30B010u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x30B008u, 0x30B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B010u;
label_30b010:
    // 0x30b010: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x30B010u;
    SET_GPR_U32(ctx, 31, 0x30B018u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x30B010u, 0x30B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B018u;
label_30b018:
    // 0x30b018: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x30b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x30b01c: 0x26a274a0  addiu       $v0, $s5, 0x74A0
    ctx->pc = 0x30b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x30b020: 0xe4400604  swc1        $f0, 0x604($v0)
    ctx->pc = 0x30b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1540), bits); }
    // 0x30b024: 0xc0b54a8  jal         func_2D52A0
    ctx->pc = 0x30B024u;
    SET_GPR_U32(ctx, 31, 0x30B02Cu);
    ctx->pc = 0x30B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B024u;
    // 0x30b028: 0x24642c00  addiu       $a0, $v1, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D52A0u, 0x30B024u, 0x30B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B02Cu;
label_30b02c:
    // 0x30b02c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30b030: 0xc0c1ce2  jal         func_307388
    ctx->pc = 0x30B030u;
    SET_GPR_U32(ctx, 31, 0x30B038u);
    ctx->pc = 0x30B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B030u;
    // 0x30b034: 0x24447470  addiu       $a0, $v0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307388u, 0x30B030u, 0x30B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B038u;
label_30b038:
    // 0x30b038: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x30b038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x30b03c: 0xc0802c8  jal         func_200B20
    ctx->pc = 0x30B03Cu;
    SET_GPR_U32(ctx, 31, 0x30B044u);
    ctx->pc = 0x30B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B03Cu;
    // 0x30b040: 0x24643f20  addiu       $a0, $v1, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B20u, 0x30B03Cu, 0x30B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B044u;
label_30b044:
    // 0x30b044: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30b044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30b048: 0xc0b291c  jal         func_2CA470
    ctx->pc = 0x30B048u;
    SET_GPR_U32(ctx, 31, 0x30B050u);
    ctx->pc = 0x30B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B048u;
    // 0x30b04c: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA470u, 0x30B048u, 0x30B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B050u;
label_30b050:
    // 0x30b050: 0x92020569  lbu         $v0, 0x569($s0)
    ctx->pc = 0x30b050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
    // 0x30b054: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30b054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30b058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B058u;
    {
        const bool branch_taken_0x30b058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b058) {
            ctx->pc = 0x30B068u;
            goto label_30b068;
        }
    }
    ctx->pc = 0x30B060u;
    // 0x30b060: 0xc0ad2f0  jal         func_2B4BC0
    ctx->pc = 0x30B060u;
    SET_GPR_U32(ctx, 31, 0x30B068u);
    ctx->pc = 0x30B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B060u;
    // 0x30b064: 0x264479d0  addiu       $a0, $s2, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BC0u, 0x30B060u, 0x30B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B068u;
label_30b068:
    // 0x30b068: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x30B068u;
    SET_GPR_U32(ctx, 31, 0x30B070u);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x30B068u, 0x30B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B070u;
label_30b070:
    // 0x30b070: 0xc0bc6a4  jal         func_2F1A90
    ctx->pc = 0x30B070u;
    SET_GPR_U32(ctx, 31, 0x30B078u);
    ctx->pc = 0x2F1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1A90u, 0x30B070u, 0x30B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B078u;
label_30b078:
    // 0x30b078: 0x1040ff23  beqz        $v0, . + 4 + (-0xDD << 2)
    ctx->pc = 0x30B078u;
    {
        const bool branch_taken_0x30b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B078u;
        // 0x30b07c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b078) {
            ctx->pc = 0x30AD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ad08;
        }
    }
    ctx->pc = 0x30B080u;
    // 0x30b080: 0xc0bc5d6  jal         func_2F1758
    ctx->pc = 0x30B080u;
    SET_GPR_U32(ctx, 31, 0x30B088u);
    ctx->pc = 0x2F1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1758u, 0x30B080u, 0x30B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B088u;
label_30b088:
    // 0x30b088: 0x1000ff1f  b           . + 4 + (-0xE1 << 2)
    ctx->pc = 0x30B088u;
    {
        const bool branch_taken_0x30b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B088u;
        // 0x30b08c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b088) {
            ctx->pc = 0x30AD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ad08;
        }
    }
    ctx->pc = 0x30B090u;
}
