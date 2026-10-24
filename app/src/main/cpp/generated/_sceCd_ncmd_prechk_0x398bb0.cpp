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

// Function: _sceCd_ncmd_prechk
// Address: 0x398bb0 - 0x398d08
void _sceCd_ncmd_prechk_0x398bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_ncmd_prechk_0x398bb0");
#endif

    switch (ctx->pc) {
        case 0x398bd0u: goto label_398bd0;
        case 0x398bdcu: goto label_398bdc;
        case 0x398c08u: goto label_398c08;
        case 0x398c20u: goto label_398c20;
        case 0x398c34u: goto label_398c34;
        case 0x398c44u: goto label_398c44;
        case 0x398c58u: goto label_398c58;
        case 0x398c60u: goto label_398c60;
        case 0x398c80u: goto label_398c80;
        case 0x398c94u: goto label_398c94;
        case 0x398cb8u: goto label_398cb8;
        case 0x398cc0u: goto label_398cc0;
        default: break;
    }

    ctx->pc = 0x398bb0u;

    // 0x398bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x398bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x398bb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x398bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x398bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x398bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398bc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x398bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x398bc4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x398bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x398bc8: 0xc0e618e  jal         func_398638
    ctx->pc = 0x398BC8u;
    SET_GPR_U32(ctx, 31, 0x398BD0u);
    ctx->pc = 0x398BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BC8u;
    // 0x398bcc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398638u, 0x398BC8u, 0x398BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BD0u;
label_398bd0:
    // 0x398bd0: 0x8e048668  lw          $a0, -0x7998($s0)
    ctx->pc = 0x398bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
    // 0x398bd4: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x398BD4u;
    SET_GPR_U32(ctx, 31, 0x398BDCu);
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x398BD4u, 0x398BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BDCu;
label_398bdc:
    // 0x398bdc: 0x8e038668  lw          $v1, -0x7998($s0)
    ctx->pc = 0x398bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
    // 0x398be0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x398BE0u;
    {
        const bool branch_taken_0x398be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x398BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BE0u;
        // 0x398be4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398be0) {
            ctx->pc = 0x398C10u;
            goto label_398c10;
        }
    }
    ctx->pc = 0x398BE8u;
    // 0x398be8: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x398be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936144)));
    // 0x398bec: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x398BECu;
    {
        const bool branch_taken_0x398bec = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BECu;
        // 0x398bf0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398bec) {
            ctx->pc = 0x398C34u;
            goto label_398c34;
        }
    }
    ctx->pc = 0x398BF4u;
    // 0x398bf4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x398bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x398bf8: 0x8c46865c  lw          $a2, -0x79A4($v0)
    ctx->pc = 0x398bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936156)));
    // 0x398bfc: 0x2484e260  addiu       $a0, $a0, -0x1DA0
    ctx->pc = 0x398bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959712));
    // 0x398c00: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398C00u;
    SET_GPR_U32(ctx, 31, 0x398C08u);
    ctx->pc = 0x398C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C00u;
    // 0x398c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398C00u, 0x398C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C08u;
label_398c08:
    // 0x398c08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x398C08u;
    {
        const bool branch_taken_0x398c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C08u;
        // 0x398c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c08) {
            ctx->pc = 0x398CF0u;
            goto label_398cf0;
        }
    }
    ctx->pc = 0x398C10u;
label_398c10:
    // 0x398c10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x398c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398c18: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x398C18u;
    SET_GPR_U32(ctx, 31, 0x398C20u);
    ctx->pc = 0x398C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C18u;
    // 0x398c1c: 0xac51865c  sw          $s1, -0x79A4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936156), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x398C18u, 0x398C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C20u;
label_398c20:
    // 0x398c20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398C20u;
    {
        const bool branch_taken_0x398c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C20u;
        // 0x398c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c20) {
            ctx->pc = 0x398C3Cu;
            goto label_398c3c;
        }
    }
    ctx->pc = 0x398C28u;
    // 0x398c28: 0x8e048668  lw          $a0, -0x7998($s0)
    ctx->pc = 0x398c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
    // 0x398c2c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398C2Cu;
    SET_GPR_U32(ctx, 31, 0x398C34u);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398C2Cu, 0x398C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C34u;
label_398c34:
    // 0x398c34: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x398C34u;
    {
        const bool branch_taken_0x398c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C34u;
        // 0x398c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c34) {
            ctx->pc = 0x398CF0u;
            goto label_398cf0;
        }
    }
    ctx->pc = 0x398C3Cu;
label_398c3c:
    // 0x398c3c: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x398C3Cu;
    SET_GPR_U32(ctx, 31, 0x398C44u);
    ctx->pc = 0x398C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C3Cu;
    // 0x398c40: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x398C3Cu, 0x398C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C44u;
label_398c44:
    // 0x398c44: 0x8e42867c  lw          $v0, -0x7984($s2)
    ctx->pc = 0x398c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936188)));
    // 0x398c48: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x398C48u;
    {
        const bool branch_taken_0x398c48 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x398C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C48u;
        // 0x398c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c48) {
            ctx->pc = 0x398CF0u;
            goto label_398cf0;
        }
    }
    ctx->pc = 0x398C50u;
    // 0x398c50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x398C50u;
    {
        const bool branch_taken_0x398c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C50u;
        // 0x398c54: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398c50) {
            ctx->pc = 0x398C7Cu;
            goto label_398c7c;
        }
    }
    ctx->pc = 0x398C58u;
label_398c58:
    // 0x398c58: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x398c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x398c5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_398c60:
    // 0x398c60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398c64: 0x0  nop
    ctx->pc = 0x398c64u;
    // NOP
    // 0x398c68: 0x0  nop
    ctx->pc = 0x398c68u;
    // NOP
    // 0x398c6c: 0x0  nop
    ctx->pc = 0x398c6cu;
    // NOP
    // 0x398c70: 0x0  nop
    ctx->pc = 0x398c70u;
    // NOP
    // 0x398c74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x398C74u;
    {
        const bool branch_taken_0x398c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398c74) {
            ctx->pc = 0x398C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398c60;
        }
    }
    ctx->pc = 0x398C7Cu;
label_398c7c:
    // 0x398c7c: 0x26309810  addiu       $s0, $s1, -0x67F0
    ctx->pc = 0x398c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940688));
label_398c80:
    // 0x398c80: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x398c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x398c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c88: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x398c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x398c8c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x398C8Cu;
    SET_GPR_U32(ctx, 31, 0x398C94u);
    ctx->pc = 0x398C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C8Cu;
    // 0x398c90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x398C8Cu, 0x398C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C94u;
label_398c94:
    // 0x398c94: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x398C94u;
    {
        const bool branch_taken_0x398c94 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x398c94) {
            ctx->pc = 0x398C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398C94u;
            // 0x398c98: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398CE4u;
            goto label_398ce4;
        }
    }
    ctx->pc = 0x398C9Cu;
    // 0x398c9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398ca0: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x398ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8650u));
    // 0x398ca4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x398CA4u;
    {
        const bool branch_taken_0x398ca4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CA4u;
        // 0x398ca8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ca4) {
            ctx->pc = 0x398CBCu;
            goto label_398cbc;
        }
    }
    ctx->pc = 0x398CACu;
    // 0x398cac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x398cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x398cb0: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398CB0u;
    SET_GPR_U32(ctx, 31, 0x398CB8u);
    ctx->pc = 0x398CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CB0u;
    // 0x398cb4: 0x2484e288  addiu       $a0, $a0, -0x1D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398CB0u, 0x398CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CB8u;
label_398cb8:
    // 0x398cb8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x398cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_398cbc:
    // 0x398cbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_398cc0:
    // 0x398cc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398cc4: 0x0  nop
    ctx->pc = 0x398cc4u;
    // NOP
    // 0x398cc8: 0x0  nop
    ctx->pc = 0x398cc8u;
    // NOP
    // 0x398ccc: 0x0  nop
    ctx->pc = 0x398cccu;
    // NOP
    // 0x398cd0: 0x0  nop
    ctx->pc = 0x398cd0u;
    // NOP
    // 0x398cd4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x398CD4u;
    {
        const bool branch_taken_0x398cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398cd4) {
            ctx->pc = 0x398CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398cc0;
        }
    }
    ctx->pc = 0x398CDCu;
    // 0x398cdc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x398CDCu;
    {
        const bool branch_taken_0x398cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CDCu;
        // 0x398ce0: 0x26309810  addiu       $s0, $s1, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398cdc) {
            ctx->pc = 0x398C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398c80;
        }
    }
    ctx->pc = 0x398CE4u;
label_398ce4:
    // 0x398ce4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x398CE4u;
    {
        const bool branch_taken_0x398ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CE4u;
        // 0x398ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ce4) {
            ctx->pc = 0x398C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398c58;
        }
    }
    ctx->pc = 0x398CECu;
    // 0x398cec: 0xae40867c  sw          $zero, -0x7984($s2)
    ctx->pc = 0x398cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294936188), GPR_U32(ctx, 0));
label_398cf0:
    // 0x398cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x398cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398cf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x398cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398cf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x398cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398d00: 0x3e00008  jr          $ra
    ctx->pc = 0x398D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D00u;
        // 0x398d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398D08u;
}
