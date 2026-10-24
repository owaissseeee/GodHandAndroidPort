#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: func_00799FC8
// Address: 0x799fc8 - 0x79a158
void func_00799FC8_0x799fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799FC8_0x799fc8");
#endif

    switch (ctx->pc) {
        case 0x799ffcu: goto label_799ffc;
        case 0x79a008u: goto label_79a008;
        case 0x79a018u: goto label_79a018;
        case 0x79a024u: goto label_79a024;
        case 0x79a040u: goto label_79a040;
        case 0x79a068u: goto label_79a068;
        case 0x79a098u: goto label_79a098;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a108u: goto label_79a108;
        case 0x79a110u: goto label_79a110;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a134u: goto label_79a134;
        case 0x79a140u: goto label_79a140;
        default: break;
    }

    ctx->pc = 0x799fc8u;

    // 0x799fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799fcc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799fd0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799fd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799fd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799fdc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799fe4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799fec: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799ff0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799ff4: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799FF4u;
    SET_GPR_U32(ctx, 31, 0x799FFCu);
    ctx->pc = 0x799FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF4u;
    // 0x799ff8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799FF4u, 0x799FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a000: 0xc09d87e  jal         func_2761F8
    ctx->pc = 0x79A000u;
    SET_GPR_U32(ctx, 31, 0x79A008u);
    ctx->pc = 0x79A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A000u;
    // 0x79a004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761F8u, 0x79A000u, 0x79A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a00c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a010: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A010u;
    SET_GPR_U32(ctx, 31, 0x79A018u);
    ctx->pc = 0x79A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A010u;
    // 0x79a014: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A010u, 0x79A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A018u;
label_79a018:
    // 0x79a018: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a01c: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x79A01Cu;
    SET_GPR_U32(ctx, 31, 0x79A024u);
    ctx->pc = 0x79A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A01Cu;
    // 0x79a020: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x79A01Cu, 0x79A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A024u;
label_79a024:
    // 0x79a024: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x79a028: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x79a028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
    // 0x79a02c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x79a02cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a030: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x79A030u;
    {
        const bool branch_taken_0x79a030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A030u;
        // 0x79a034: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a030) {
            ctx->pc = 0x79A120u;
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A038u;
    // 0x79a038: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a044: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a048: 0x8044ae20  lb          $a0, -0x51E0($v0)
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AE20u));
    // 0x79a04c: 0x2446ae20  addiu       $a2, $v0, -0x51E0
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946336));
    // 0x79a050: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a058: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A058u;
    {
        const bool branch_taken_0x79a058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a058) {
            ctx->pc = 0x79A090u;
            goto label_79a090;
        }
    }
    ctx->pc = 0x79A060u;
    // 0x79a060: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a064: 0x0  nop
    ctx->pc = 0x79a064u;
    // NOP
label_79a068:
    // 0x79a068: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a06c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a070: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a074: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a078: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a07c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A07Cu;
    {
        const bool branch_taken_0x79a07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A07Cu;
        // 0x79a080: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a07c) {
            ctx->pc = 0x79A090u;
            goto label_79a090;
        }
    }
    ctx->pc = 0x79A084u;
    // 0x79a084: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a088: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A088u;
    {
        const bool branch_taken_0x79a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a088) {
            ctx->pc = 0x79A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A088u;
            // 0x79a08c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a068;
        }
    }
    ctx->pc = 0x79A090u;
label_79a090:
    // 0x79a090: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A090u;
    SET_GPR_U32(ctx, 31, 0x79A098u);
    ctx->pc = 0x79A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A090u;
    // 0x79a094: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A090u, 0x79A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A098u;
label_79a098:
    // 0x79a098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a09c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A0B0u;
            goto label_79a0b0;
        }
    }
    ctx->pc = 0x79A0A4u;
    // 0x79a0a4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x79a0a8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79a0ac: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x79a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_79a0b0:
    // 0x79a0b0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A0B0u;
    SET_GPR_U32(ctx, 31, 0x79A0B8u);
    ctx->pc = 0x79A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B0u;
    // 0x79a0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A0B0u, 0x79A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0B8u;
label_79a0b8:
    // 0x79a0b8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a0bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a0c0: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A0C0u;
    SET_GPR_U32(ctx, 31, 0x79A0C8u);
    ctx->pc = 0x79A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C0u;
    // 0x79a0c4: 0x24a5ae38  addiu       $a1, $a1, -0x51C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A0C0u, 0x79A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C8u;
label_79a0c8:
    // 0x79a0c8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a0cc: 0x24051004  addiu       $a1, $zero, 0x1004
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x79a0d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a0d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0dc: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A0DCu;
    SET_GPR_U32(ctx, 31, 0x79A0E4u);
    ctx->pc = 0x79A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0DCu;
    // 0x79a0e0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A0DCu, 0x79A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A0E4u;
    {
        const bool branch_taken_0x79a0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0e4) {
            ctx->pc = 0x79A100u;
            goto label_79a100;
        }
    }
    ctx->pc = 0x79A0ECu;
    // 0x79a0ec: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x79a0f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a0f4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a0f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a0fc: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x79a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_79a100:
    // 0x79a100: 0xc09d884  jal         func_276210
    ctx->pc = 0x79A100u;
    SET_GPR_U32(ctx, 31, 0x79A108u);
    ctx->pc = 0x79A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A100u;
    // 0x79a104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276210u, 0x79A100u, 0x79A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A108u;
label_79a108:
    // 0x79a108: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A108u;
    SET_GPR_U32(ctx, 31, 0x79A110u);
    ctx->pc = 0x79A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A108u;
    // 0x79a10c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A108u, 0x79A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a114: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A114u;
    SET_GPR_U32(ctx, 31, 0x79A11Cu);
    ctx->pc = 0x79A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A114u;
    // 0x79a118: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A114u, 0x79A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A11Cu;
label_79a11c:
    // 0x79a11c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79a120:
    // 0x79a120: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a128: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a12c: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x79A12Cu;
    SET_GPR_U32(ctx, 31, 0x79A134u);
    ctx->pc = 0x79A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A12Cu;
    // 0x79a130: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x79A12Cu, 0x79A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A134u;
label_79a134:
    // 0x79a134: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a138: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A138u;
    SET_GPR_U32(ctx, 31, 0x79A140u);
    ctx->pc = 0x79A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A138u;
    // 0x79a13c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A138u, 0x79A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a144: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a150: 0x3e00008  jr          $ra
    ctx->pc = 0x79A150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A158u;
}
} // namespace gh_r001
