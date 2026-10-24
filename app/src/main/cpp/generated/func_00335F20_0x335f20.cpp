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

// Function: func_00335F20
// Address: 0x335f20 - 0x336048
void func_00335F20_0x335f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335F20_0x335f20");
#endif

    switch (ctx->pc) {
        case 0x335f58u: goto label_335f58;
        case 0x335f60u: goto label_335f60;
        case 0x335f6cu: goto label_335f6c;
        case 0x335f80u: goto label_335f80;
        case 0x335fe0u: goto label_335fe0;
        case 0x335fecu: goto label_335fec;
        case 0x33600cu: goto label_33600c;
        case 0x336018u: goto label_336018;
        case 0x336020u: goto label_336020;
        default: break;
    }

    ctx->pc = 0x335f20u;

    // 0x335f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335f34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x335f38: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x335f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x335f3c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x335f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x335f40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x335f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x335f44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x335f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335f48: 0x18600039  blez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x335F48u;
    {
        const bool branch_taken_0x335f48 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x335F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F48u;
        // 0x335f4c: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f48) {
            ctx->pc = 0x336030u;
            goto label_336030;
        }
    }
    ctx->pc = 0x335F50u;
    // 0x335f50: 0xc0ca0b4  jal         func_3282D0
    ctx->pc = 0x335F50u;
    SET_GPR_U32(ctx, 31, 0x335F58u);
    ctx->pc = 0x335F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F50u;
    // 0x335f54: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x335F50u, 0x335F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F58u;
label_335f58:
    // 0x335f58: 0xc0c9fea  jal         func_327FA8
    ctx->pc = 0x335F58u;
    SET_GPR_U32(ctx, 31, 0x335F60u);
    ctx->pc = 0x335F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F58u;
    // 0x335f5c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FA8u, 0x335F58u, 0x335F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F60u;
label_335f60:
    // 0x335f60: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x335f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335f64: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x335F64u;
    SET_GPR_U32(ctx, 31, 0x335F6Cu);
    ctx->pc = 0x335F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F64u;
    // 0x335f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x335F64u, 0x335F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F6Cu;
label_335f6c:
    // 0x335f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x335f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f74: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x335F74u;
    {
        const bool branch_taken_0x335f74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F74u;
        // 0x335f78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f74) {
            ctx->pc = 0x335F9Cu;
            goto label_335f9c;
        }
    }
    ctx->pc = 0x335F7Cu;
    // 0x335f7c: 0x0  nop
    ctx->pc = 0x335f7cu;
    // NOP
label_335f80:
    // 0x335f80: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x335f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x335f84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x335f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x335f88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x335f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335f8c: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x335f8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x335f90: 0x0  nop
    ctx->pc = 0x335f90u;
    // NOP
    // 0x335f94: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x335F94u;
    {
        const bool branch_taken_0x335f94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F94u;
        // 0x335f98: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f94) {
            ctx->pc = 0x335F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335f80;
        }
    }
    ctx->pc = 0x335F9Cu;
label_335f9c:
    // 0x335f9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x335f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x335fa0: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335FA0u;
    {
        const bool branch_taken_0x335fa0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x335FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FA0u;
        // 0x335fa4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335fa0) {
            ctx->pc = 0x335FC8u;
            goto label_335fc8;
        }
    }
    ctx->pc = 0x335FA8u;
    // 0x335fa8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x335fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335fb0: 0x24845000  addiu       $a0, $a0, 0x5000
    ctx->pc = 0x335fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
    // 0x335fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335fb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335fbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x335fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335fc0: 0x80cd750  j           func_335D40
    ctx->pc = 0x335FC0u;
    ctx->pc = 0x335FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FC0u;
    // 0x335fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335FC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335FC8u;
label_335fc8:
    // 0x335fc8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x335fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x335fcc: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x335fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x335fd0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x335fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x335fd4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x335fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x335fd8: 0xc0c9f86  jal         func_327E18
    ctx->pc = 0x335FD8u;
    SET_GPR_U32(ctx, 31, 0x335FE0u);
    ctx->pc = 0x335FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FD8u;
    // 0x335fdc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327E18u, 0x335FD8u, 0x335FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FE0u;
label_335fe0:
    // 0x335fe0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x335fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x335fe4: 0xc0ca112  jal         func_328448
    ctx->pc = 0x335FE4u;
    SET_GPR_U32(ctx, 31, 0x335FECu);
    ctx->pc = 0x335FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FE4u;
    // 0x335fe8: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x335FE4u, 0x335FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FECu;
label_335fec:
    // 0x335fec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x335fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x335ff0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x335ff4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x335ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x335ff8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x335ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x335ffc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x335ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x336000: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x336000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x336004: 0xc0ca320  jal         func_328C80
    ctx->pc = 0x336004u;
    SET_GPR_U32(ctx, 31, 0x33600Cu);
    ctx->pc = 0x336008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336004u;
    // 0x336008: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x336004u, 0x33600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33600Cu;
label_33600c:
    // 0x33600c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x33600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x336010: 0xc0ca036  jal         func_3280D8
    ctx->pc = 0x336010u;
    SET_GPR_U32(ctx, 31, 0x336018u);
    ctx->pc = 0x336014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336010u;
    // 0x336014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x336010u, 0x336018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336018u;
label_336018:
    // 0x336018: 0xc0ca072  jal         func_3281C8
    ctx->pc = 0x336018u;
    SET_GPR_U32(ctx, 31, 0x336020u);
    ctx->pc = 0x33601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336018u;
    // 0x33601c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x336018u, 0x336020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336020u;
label_336020:
    // 0x336020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336028: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x336028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x33602c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x33602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_336030:
    // 0x336030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336038: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33603c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336040: 0x3e00008  jr          $ra
    ctx->pc = 0x336040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336040u;
        // 0x336044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336048u;
}
