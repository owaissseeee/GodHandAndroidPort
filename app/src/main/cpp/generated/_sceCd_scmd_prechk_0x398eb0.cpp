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

// Function: _sceCd_scmd_prechk
// Address: 0x398eb0 - 0x399008
void _sceCd_scmd_prechk_0x398eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_scmd_prechk_0x398eb0");
#endif

    switch (ctx->pc) {
        case 0x398ed0u: goto label_398ed0;
        case 0x398edcu: goto label_398edc;
        case 0x398f08u: goto label_398f08;
        case 0x398f20u: goto label_398f20;
        case 0x398f34u: goto label_398f34;
        case 0x398f44u: goto label_398f44;
        case 0x398f58u: goto label_398f58;
        case 0x398f60u: goto label_398f60;
        case 0x398f80u: goto label_398f80;
        case 0x398f94u: goto label_398f94;
        case 0x398fb8u: goto label_398fb8;
        case 0x398fc0u: goto label_398fc0;
        default: break;
    }

    ctx->pc = 0x398eb0u;

    // 0x398eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x398eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x398eb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x398eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x398eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x398ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ec0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x398ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x398ec4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x398ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x398ec8: 0xc0e618e  jal         func_398638
    ctx->pc = 0x398EC8u;
    SET_GPR_U32(ctx, 31, 0x398ED0u);
    ctx->pc = 0x398ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398EC8u;
    // 0x398ecc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398638u, 0x398EC8u, 0x398ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398ED0u;
label_398ed0:
    // 0x398ed0: 0x8e04866c  lw          $a0, -0x7994($s0)
    ctx->pc = 0x398ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936172)));
    // 0x398ed4: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x398ED4u;
    SET_GPR_U32(ctx, 31, 0x398EDCu);
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x398ED4u, 0x398EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398EDCu;
label_398edc:
    // 0x398edc: 0x8e03866c  lw          $v1, -0x7994($s0)
    ctx->pc = 0x398edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936172)));
    // 0x398ee0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x398EE0u;
    {
        const bool branch_taken_0x398ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x398EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EE0u;
        // 0x398ee4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ee0) {
            ctx->pc = 0x398F10u;
            goto label_398f10;
        }
    }
    ctx->pc = 0x398EE8u;
    // 0x398ee8: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x398ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936144)));
    // 0x398eec: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x398EECu;
    {
        const bool branch_taken_0x398eec = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EECu;
        // 0x398ef0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398eec) {
            ctx->pc = 0x398F34u;
            goto label_398f34;
        }
    }
    ctx->pc = 0x398EF4u;
    // 0x398ef4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x398ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x398ef8: 0x8c468658  lw          $a2, -0x79A8($v0)
    ctx->pc = 0x398ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x398efc: 0x2484e2c0  addiu       $a0, $a0, -0x1D40
    ctx->pc = 0x398efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959808));
    // 0x398f00: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398F00u;
    SET_GPR_U32(ctx, 31, 0x398F08u);
    ctx->pc = 0x398F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F00u;
    // 0x398f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398F00u, 0x398F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F08u;
label_398f08:
    // 0x398f08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x398F08u;
    {
        const bool branch_taken_0x398f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F08u;
        // 0x398f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f08) {
            ctx->pc = 0x398FF0u;
            goto label_398ff0;
        }
    }
    ctx->pc = 0x398F10u;
label_398f10:
    // 0x398f10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398f14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x398f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398f18: 0xc0e6390  jal         func_398E40
    ctx->pc = 0x398F18u;
    SET_GPR_U32(ctx, 31, 0x398F20u);
    ctx->pc = 0x398F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F18u;
    // 0x398f1c: 0xac518658  sw          $s1, -0x79A8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936152), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x398F18u, 0x398F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F20u;
label_398f20:
    // 0x398f20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398F20u;
    {
        const bool branch_taken_0x398f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F20u;
        // 0x398f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f20) {
            ctx->pc = 0x398F3Cu;
            goto label_398f3c;
        }
    }
    ctx->pc = 0x398F28u;
    // 0x398f28: 0x8e04866c  lw          $a0, -0x7994($s0)
    ctx->pc = 0x398f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936172)));
    // 0x398f2c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398F2Cu;
    SET_GPR_U32(ctx, 31, 0x398F34u);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398F2Cu, 0x398F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F34u;
label_398f34:
    // 0x398f34: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x398F34u;
    {
        const bool branch_taken_0x398f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F34u;
        // 0x398f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f34) {
            ctx->pc = 0x398FF0u;
            goto label_398ff0;
        }
    }
    ctx->pc = 0x398F3Cu;
label_398f3c:
    // 0x398f3c: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x398F3Cu;
    SET_GPR_U32(ctx, 31, 0x398F44u);
    ctx->pc = 0x398F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F3Cu;
    // 0x398f40: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x398F3Cu, 0x398F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F44u;
label_398f44:
    // 0x398f44: 0x8e428694  lw          $v0, -0x796C($s2)
    ctx->pc = 0x398f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936212)));
    // 0x398f48: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x398F48u;
    {
        const bool branch_taken_0x398f48 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x398F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F48u;
        // 0x398f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f48) {
            ctx->pc = 0x398FF0u;
            goto label_398ff0;
        }
    }
    ctx->pc = 0x398F50u;
    // 0x398f50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x398F50u;
    {
        const bool branch_taken_0x398f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F50u;
        // 0x398f54: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f50) {
            ctx->pc = 0x398F7Cu;
            goto label_398f7c;
        }
    }
    ctx->pc = 0x398F58u;
label_398f58:
    // 0x398f58: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x398f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x398f5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_398f60:
    // 0x398f60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398f64: 0x0  nop
    ctx->pc = 0x398f64u;
    // NOP
    // 0x398f68: 0x0  nop
    ctx->pc = 0x398f68u;
    // NOP
    // 0x398f6c: 0x0  nop
    ctx->pc = 0x398f6cu;
    // NOP
    // 0x398f70: 0x0  nop
    ctx->pc = 0x398f70u;
    // NOP
    // 0x398f74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x398F74u;
    {
        const bool branch_taken_0x398f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398f74) {
            ctx->pc = 0x398F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398f60;
        }
    }
    ctx->pc = 0x398F7Cu;
label_398f7c:
    // 0x398f7c: 0x2630a1c0  addiu       $s0, $s1, -0x5E40
    ctx->pc = 0x398f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943168));
label_398f80:
    // 0x398f80: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x398f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x398f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398f88: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x398f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x398f8c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x398F8Cu;
    SET_GPR_U32(ctx, 31, 0x398F94u);
    ctx->pc = 0x398F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F8Cu;
    // 0x398f90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x398F8Cu, 0x398F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F94u;
label_398f94:
    // 0x398f94: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x398F94u;
    {
        const bool branch_taken_0x398f94 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x398f94) {
            ctx->pc = 0x398F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398F94u;
            // 0x398f98: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398FE4u;
            goto label_398fe4;
        }
    }
    ctx->pc = 0x398F9Cu;
    // 0x398f9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398fa0: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x398fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8650u));
    // 0x398fa4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x398FA4u;
    {
        const bool branch_taken_0x398fa4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FA4u;
        // 0x398fa8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fa4) {
            ctx->pc = 0x398FBCu;
            goto label_398fbc;
        }
    }
    ctx->pc = 0x398FACu;
    // 0x398fac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x398facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x398fb0: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398FB0u;
    SET_GPR_U32(ctx, 31, 0x398FB8u);
    ctx->pc = 0x398FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398FB0u;
    // 0x398fb4: 0x2484e2e8  addiu       $a0, $a0, -0x1D18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398FB0u, 0x398FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398FB8u;
label_398fb8:
    // 0x398fb8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x398fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_398fbc:
    // 0x398fbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_398fc0:
    // 0x398fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398fc4: 0x0  nop
    ctx->pc = 0x398fc4u;
    // NOP
    // 0x398fc8: 0x0  nop
    ctx->pc = 0x398fc8u;
    // NOP
    // 0x398fcc: 0x0  nop
    ctx->pc = 0x398fccu;
    // NOP
    // 0x398fd0: 0x0  nop
    ctx->pc = 0x398fd0u;
    // NOP
    // 0x398fd4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x398FD4u;
    {
        const bool branch_taken_0x398fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398fd4) {
            ctx->pc = 0x398FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398fc0;
        }
    }
    ctx->pc = 0x398FDCu;
    // 0x398fdc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x398FDCu;
    {
        const bool branch_taken_0x398fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FDCu;
        // 0x398fe0: 0x2630a1c0  addiu       $s0, $s1, -0x5E40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fdc) {
            ctx->pc = 0x398F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398f80;
        }
    }
    ctx->pc = 0x398FE4u;
label_398fe4:
    // 0x398fe4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x398FE4u;
    {
        const bool branch_taken_0x398fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FE4u;
        // 0x398fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fe4) {
            ctx->pc = 0x398F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398f58;
        }
    }
    ctx->pc = 0x398FECu;
    // 0x398fec: 0xae408694  sw          $zero, -0x796C($s2)
    ctx->pc = 0x398fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294936212), GPR_U32(ctx, 0));
label_398ff0:
    // 0x398ff0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x398ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398ff4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x398ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398ff8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x398ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399000: 0x3e00008  jr          $ra
    ctx->pc = 0x399000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399000u;
        // 0x399004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399008u;
}
