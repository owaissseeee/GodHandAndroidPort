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

// Function: get__7istream
// Address: 0x389f38 - 0x389fd8
void get__7istream_0x389f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get__7istream_0x389f38");
#endif

    switch (ctx->pc) {
        case 0x389f8cu: goto label_389f8c;
        case 0x389fa4u: goto label_389fa4;
        default: break;
    }

    ctx->pc = 0x389f38u;

    // 0x389f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389f4c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x389f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x389f50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389F50u;
    {
        const bool branch_taken_0x389f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F50u;
        // 0x389f54: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f50) {
            ctx->pc = 0x389F64u;
            goto label_389f64;
        }
    }
    ctx->pc = 0x389F58u;
    // 0x389f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x389F5Cu;
    {
        const bool branch_taken_0x389f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F5Cu;
        // 0x389f60: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f5c) {
            ctx->pc = 0x389F90u;
            goto label_389f90;
        }
    }
    ctx->pc = 0x389F64u;
label_389f64:
    // 0x389f64: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x389f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x389f68: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x389F68u;
    {
        const bool branch_taken_0x389f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F68u;
        // 0x389f6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f68) {
            ctx->pc = 0x389F90u;
            goto label_389f90;
        }
    }
    ctx->pc = 0x389F70u;
    // 0x389f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x389f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x389f74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x389f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x389f78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x389f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x389f7c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389F7Cu;
    {
        const bool branch_taken_0x389f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x389F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F7Cu;
        // 0x389f80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f7c) {
            ctx->pc = 0x389F90u;
            goto label_389f90;
        }
    }
    ctx->pc = 0x389F84u;
    // 0x389f84: 0xc0e249a  jal         func_389268
    ctx->pc = 0x389F84u;
    SET_GPR_U32(ctx, 31, 0x389F8Cu);
    ctx->pc = 0x389F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F84u;
    // 0x389f88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x389F84u, 0x389F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F8Cu;
label_389f8c:
    // 0x389f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x389f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389f90:
    // 0x389f90: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x389F90u;
    {
        const bool branch_taken_0x389f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F90u;
        // 0x389f94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f90) {
            ctx->pc = 0x389FC8u;
            goto label_389fc8;
        }
    }
    ctx->pc = 0x389F98u;
    // 0x389f98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x389f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389f9c: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x389F9Cu;
    SET_GPR_U32(ctx, 31, 0x389FA4u);
    ctx->pc = 0x389FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F9Cu;
    // 0x389fa0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x389F9Cu, 0x389FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389FA4u;
label_389fa4:
    // 0x389fa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x389fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389fa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x389fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389fac: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x389FACu;
    {
        const bool branch_taken_0x389fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x389FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FACu;
        // 0x389fb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fac) {
            ctx->pc = 0x389FC8u;
            goto label_389fc8;
        }
    }
    ctx->pc = 0x389FB4u;
    // 0x389fb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389fb8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x389fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x389fbc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x389fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x389fc0: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x389fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x389fc4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389fc8:
    // 0x389fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x389FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FD0u;
        // 0x389fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389FD8u;
}
