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

// Function: func_0032DA78
// Address: 0x32da78 - 0x32db70
void func_0032DA78_0x32da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DA78_0x32da78");
#endif

    switch (ctx->pc) {
        case 0x32daa8u: goto label_32daa8;
        case 0x32dab8u: goto label_32dab8;
        case 0x32dac0u: goto label_32dac0;
        case 0x32dae0u: goto label_32dae0;
        case 0x32daf0u: goto label_32daf0;
        case 0x32db1cu: goto label_32db1c;
        case 0x32db34u: goto label_32db34;
        default: break;
    }

    ctx->pc = 0x32da78u;

    // 0x32da78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32da7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32da80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32da80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32da88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32da88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32da90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32da90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da94: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32DA94u;
    {
        const bool branch_taken_0x32da94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA94u;
        // 0x32da98: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da94) {
            ctx->pc = 0x32DAB0u;
            goto label_32dab0;
        }
    }
    ctx->pc = 0x32DA9Cu;
    // 0x32da9c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32daa0: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32DAA0u;
    SET_GPR_U32(ctx, 31, 0x32DAA8u);
    ctx->pc = 0x32DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DAA0u;
    // 0x32daa4: 0x24842aa8  addiu       $a0, $a0, 0x2AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32DAA0u, 0x32DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAA8u;
label_32daa8:
    // 0x32daa8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x32DAA8u;
    {
        const bool branch_taken_0x32daa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAA8u;
        // 0x32daac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32daa8) {
            ctx->pc = 0x32DB38u;
            goto label_32db38;
        }
    }
    ctx->pc = 0x32DAB0u;
label_32dab0:
    // 0x32dab0: 0xc0cb6e8  jal         func_32DBA0
    ctx->pc = 0x32DAB0u;
    SET_GPR_U32(ctx, 31, 0x32DAB8u);
    ctx->pc = 0x32DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DBA0u, 0x32DAB0u, 0x32DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAB8u;
label_32dab8:
    // 0x32dab8: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32DAB8u;
    SET_GPR_U32(ctx, 31, 0x32DAC0u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32DAB8u, 0x32DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAC0u;
label_32dac0:
    // 0x32dac0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x32dac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x32dac4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32dac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32dac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32daccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dad0: 0x24c65c40  addiu       $a2, $a2, 0x5C40
    ctx->pc = 0x32dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23616));
    // 0x32dad4: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x32dad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x32dad8: 0xc0c916c  jal         func_3245B0
    ctx->pc = 0x32DAD8u;
    SET_GPR_U32(ctx, 31, 0x32DAE0u);
    ctx->pc = 0x32DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DAD8u;
    // 0x32dadc: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245B0u, 0x32DAD8u, 0x32DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAE0u;
label_32dae0:
    // 0x32dae0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32DAE0u;
    {
        const bool branch_taken_0x32dae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAE0u;
        // 0x32dae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dae0) {
            ctx->pc = 0x32DB2Cu;
            goto label_32db2c;
        }
    }
    ctx->pc = 0x32DAE8u;
    // 0x32dae8: 0xc0c91f4  jal         func_3247D0
    ctx->pc = 0x32DAE8u;
    SET_GPR_U32(ctx, 31, 0x32DAF0u);
    ctx->pc = 0x3247D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247D0u, 0x32DAE8u, 0x32DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DAF0u;
label_32daf0:
    // 0x32daf0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x32daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x32daf4: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x32daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x32daf8: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x32daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x32dafc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32db00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32db04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x32db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32db08: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x32db08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32db0c: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x32db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x32db10: 0xae0301d8  sw          $v1, 0x1D8($s0)
    ctx->pc = 0x32db10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 3));
    // 0x32db14: 0xc0cbd2c  jal         func_32F4B0
    ctx->pc = 0x32DB14u;
    SET_GPR_U32(ctx, 31, 0x32DB1Cu);
    ctx->pc = 0x32DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB14u;
    // 0x32db18: 0xae0601dc  sw          $a2, 0x1DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4B0u, 0x32DB14u, 0x32DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB1Cu;
label_32db1c:
    // 0x32db1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32db20: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32db20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32db24: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x32db24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x32db28: 0xa20201b2  sb          $v0, 0x1B2($s0)
    ctx->pc = 0x32db28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 2));
label_32db2c:
    // 0x32db2c: 0xc0cff22  jal         func_33FC88
    ctx->pc = 0x32DB2Cu;
    SET_GPR_U32(ctx, 31, 0x32DB34u);
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32DB2Cu, 0x32DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB34u;
label_32db34:
    // 0x32db34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32db34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32db38:
    // 0x32db38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32db38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32db3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32db3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32db40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32db44: 0x3e00008  jr          $ra
    ctx->pc = 0x32DB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB44u;
        // 0x32db48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DB4Cu;
    // 0x32db4c: 0x0  nop
    ctx->pc = 0x32db4cu;
    // NOP
    // 0x32db50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32db54: 0x0  nop
    ctx->pc = 0x32db54u;
    // NOP
    // 0x32db58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32db58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32db5c: 0x0  nop
    ctx->pc = 0x32db5cu;
    // NOP
    // 0x32db60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32db64: 0x0  nop
    ctx->pc = 0x32db64u;
    // NOP
    // 0x32db68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32db6c: 0x0  nop
    ctx->pc = 0x32db6cu;
    // NOP
    ctx->pc = 0x32db70u;
}
