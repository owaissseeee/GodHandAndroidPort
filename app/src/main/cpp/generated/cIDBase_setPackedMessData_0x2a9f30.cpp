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

// Function: cIDBase_setPackedMessData
// Address: 0x2a9f30 - 0x2aa078
void cIDBase_setPackedMessData_0x2a9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_setPackedMessData_0x2a9f30");
#endif

    switch (ctx->pc) {
        case 0x2a9f5cu: goto label_2a9f5c;
        case 0x2a9f90u: goto label_2a9f90;
        case 0x2a9facu: goto label_2a9fac;
        case 0x2a9fc0u: goto label_2a9fc0;
        case 0x2a9fe8u: goto label_2a9fe8;
        case 0x2aa004u: goto label_2aa004;
        case 0x2aa018u: goto label_2aa018;
        case 0x2aa02cu: goto label_2aa02c;
        case 0x2aa048u: goto label_2aa048;
        case 0x2aa058u: goto label_2aa058;
        default: break;
    }

    ctx->pc = 0x2a9f30u;

    // 0x2a9f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a9f34: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a9f38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a9f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a9f3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a9f40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a9f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9f50: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x2a9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2a9f54: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2A9F54u;
    SET_GPR_U32(ctx, 31, 0x2A9F5Cu);
    ctx->pc = 0x2A9F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F54u;
    // 0x2a9f58: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2A9F54u, 0x2A9F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F5Cu;
label_2a9f5c:
    // 0x2a9f5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a9f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f60: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A9F60u;
    {
        const bool branch_taken_0x2a9f60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F60u;
        // 0x2a9f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f60) {
            ctx->pc = 0x2AA05Cu;
            goto label_2aa05c;
        }
    }
    ctx->pc = 0x2A9F68u;
    // 0x2a9f68: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a9f6c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2a9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2a9f70: 0x244374a0  addiu       $v1, $v0, 0x74A0
    ctx->pc = 0x2a9f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2a9f74: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x2a9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2a9f78: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A9F78u;
    {
        const bool branch_taken_0x2a9f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F78u;
        // 0x2a9f7c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f78) {
            ctx->pc = 0x2A9FC8u;
            goto label_2a9fc8;
        }
    }
    ctx->pc = 0x2A9F80u;
    // 0x2a9f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f84: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x2a9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x2a9f88: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A9F88u;
    SET_GPR_U32(ctx, 31, 0x2A9F90u);
    ctx->pc = 0x2A9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F88u;
    // 0x2a9f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A9F88u, 0x2A9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F90u;
label_2a9f90:
    // 0x2a9f90: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2a9f90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2a9f94: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a9f98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f9c: 0x24a5af28  addiu       $a1, $a1, -0x50D8
    ctx->pc = 0x2a9f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    // 0x2a9fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fa4: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A9FA4u;
    SET_GPR_U32(ctx, 31, 0x2A9FACu);
    ctx->pc = 0x2A9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FA4u;
    // 0x2a9fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A9FA4u, 0x2A9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FACu;
label_2a9fac:
    // 0x2a9fac: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2a9facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2a9fb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a9fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a9fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fb8: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A9FB8u;
    SET_GPR_U32(ctx, 31, 0x2A9FC0u);
    ctx->pc = 0x2A9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FB8u;
    // 0x2a9fbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A9FB8u, 0x2A9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FC0u;
label_2a9fc0:
    // 0x2a9fc0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A9FC0u;
    {
        const bool branch_taken_0x2a9fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FC0u;
        // 0x2a9fc4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fc0) {
            ctx->pc = 0x2AA01Cu;
            goto label_2aa01c;
        }
    }
    ctx->pc = 0x2A9FC8u;
label_2a9fc8:
    // 0x2a9fc8: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A9FC8u;
    {
        const bool branch_taken_0x2a9fc8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FC8u;
        // 0x2a9fcc: 0x28420007  slti        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fc8) {
            ctx->pc = 0x2AA018u;
            goto label_2aa018;
        }
    }
    ctx->pc = 0x2A9FD0u;
    // 0x2a9fd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A9FD0u;
    {
        const bool branch_taken_0x2a9fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FD0u;
        // 0x2a9fd4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fd0) {
            ctx->pc = 0x2AA018u;
            goto label_2aa018;
        }
    }
    ctx->pc = 0x2A9FD8u;
    // 0x2a9fd8: 0x8c640558  lw          $a0, 0x558($v1)
    ctx->pc = 0x2a9fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1368)));
    // 0x2a9fdc: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x2a9fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x2a9fe0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A9FE0u;
    SET_GPR_U32(ctx, 31, 0x2A9FE8u);
    ctx->pc = 0x2A9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FE0u;
    // 0x2a9fe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A9FE0u, 0x2A9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FE8u;
label_2a9fe8:
    // 0x2a9fe8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2a9fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2a9fec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a9fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a9ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ff4: 0x24a5af28  addiu       $a1, $a1, -0x50D8
    ctx->pc = 0x2a9ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    // 0x2a9ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ffc: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A9FFCu;
    SET_GPR_U32(ctx, 31, 0x2AA004u);
    ctx->pc = 0x2AA000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FFCu;
    // 0x2aa000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A9FFCu, 0x2AA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA004u;
label_2aa004:
    // 0x2aa004: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2aa004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2aa008: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aa008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa00c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aa00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa010: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2AA010u;
    SET_GPR_U32(ctx, 31, 0x2AA018u);
    ctx->pc = 0x2AA014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA010u;
    // 0x2aa014: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2AA010u, 0x2AA018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA018u;
label_2aa018:
    // 0x2aa018: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2aa018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2aa01c:
    // 0x2aa01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa020: 0x24a5af30  addiu       $a1, $a1, -0x50D0
    ctx->pc = 0x2aa020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
    // 0x2aa024: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AA024u;
    SET_GPR_U32(ctx, 31, 0x2AA02Cu);
    ctx->pc = 0x2AA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA024u;
    // 0x2aa028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AA024u, 0x2AA02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA02Cu;
label_2aa02c:
    // 0x2aa02c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2aa02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2aa030: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2aa030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2aa034: 0x8c6523a4  lw          $a1, 0x23A4($v1)
    ctx->pc = 0x2aa034u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2aa038: 0x26107510  addiu       $s0, $s0, 0x7510
    ctx->pc = 0x2aa038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29968));
    // 0x2aa03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa040: 0xc0abcfe  jal         func_2AF3F8
    ctx->pc = 0x2AA040u;
    SET_GPR_U32(ctx, 31, 0x2AA048u);
    ctx->pc = 0x2AA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA040u;
    // 0x2aa044: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF3F8u, 0x2AA040u, 0x2AA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA048u;
label_2aa048:
    // 0x2aa048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa04c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2aa04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa050: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2AA050u;
    SET_GPR_U32(ctx, 31, 0x2AA058u);
    ctx->pc = 0x2AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA050u;
    // 0x2aa054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2AA050u, 0x2AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA058u;
label_2aa058:
    // 0x2aa058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa05c:
    // 0x2aa05c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aa05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aa060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa064: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2aa064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa06c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA06Cu;
        // 0x2aa070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA074u;
    // 0x2aa074: 0x0  nop
    ctx->pc = 0x2aa074u;
    // NOP
    ctx->pc = 0x2aa078u;
}
