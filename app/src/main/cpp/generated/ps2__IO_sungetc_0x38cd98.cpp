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

// Function: _IO_sungetc
// Address: 0x38cd98 - 0x38ce10
void ps2__IO_sungetc_0x38cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_sungetc_0x38cd98");
#endif

    switch (ctx->pc) {
        case 0x38cd98u: goto label_38cd98;
        case 0x38cd9cu: goto label_38cd9c;
        case 0x38cda0u: goto label_38cda0;
        case 0x38cda4u: goto label_38cda4;
        case 0x38cda8u: goto label_38cda8;
        case 0x38cdacu: goto label_38cdac;
        case 0x38cdb0u: goto label_38cdb0;
        case 0x38cdb4u: goto label_38cdb4;
        case 0x38cdb8u: goto label_38cdb8;
        case 0x38cdbcu: goto label_38cdbc;
        case 0x38cdc0u: goto label_38cdc0;
        case 0x38cdc4u: goto label_38cdc4;
        case 0x38cdc8u: goto label_38cdc8;
        case 0x38cdccu: goto label_38cdcc;
        case 0x38cdd0u: goto label_38cdd0;
        case 0x38cdd4u: goto label_38cdd4;
        case 0x38cdd8u: goto label_38cdd8;
        case 0x38cddcu: goto label_38cddc;
        case 0x38cde0u: goto label_38cde0;
        case 0x38cde4u: goto label_38cde4;
        case 0x38cde8u: goto label_38cde8;
        case 0x38cdecu: goto label_38cdec;
        case 0x38cdf0u: goto label_38cdf0;
        case 0x38cdf4u: goto label_38cdf4;
        case 0x38cdf8u: goto label_38cdf8;
        case 0x38cdfcu: goto label_38cdfc;
        case 0x38ce00u: goto label_38ce00;
        case 0x38ce04u: goto label_38ce04;
        case 0x38ce08u: goto label_38ce08;
        case 0x38ce0cu: goto label_38ce0c;
        default: break;
    }

    ctx->pc = 0x38cd98u;

label_38cd98:
    // 0x38cd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38cd9c:
    // 0x38cd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38cda0:
    // 0x38cda0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38cda4:
    // 0x38cda4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38cda8:
    // 0x38cda8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38cdac:
    // 0x38cdac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x38cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_38cdb0:
    // 0x38cdb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x38cdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38cdb4:
    // 0x38cdb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38cdb8:
    if (ctx->pc == 0x38CDB8u) {
        ctx->pc = 0x38CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDB4u;
        // 0x38cdb8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CDBCu;
        goto label_38cdbc;
    }
    ctx->pc = 0x38CDB4u;
    {
        const bool branch_taken_0x38cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDB4u;
        // 0x38cdb8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cdb4) {
            ctx->pc = 0x38CDC8u;
            goto label_38cdc8;
        }
    }
    ctx->pc = 0x38CDBCu;
label_38cdbc:
    // 0x38cdbc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x38cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_38cdc0:
    // 0x38cdc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_38cdc4:
    if (ctx->pc == 0x38CDC4u) {
        ctx->pc = 0x38CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDC0u;
        // 0x38cdc4: 0x9064ffff  lbu         $a0, -0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CDC8u;
        goto label_38cdc8;
    }
    ctx->pc = 0x38CDC0u;
    {
        const bool branch_taken_0x38cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDC0u;
        // 0x38cdc4: 0x9064ffff  lbu         $a0, -0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cdc0) {
            ctx->pc = 0x38CDE0u;
            goto label_38cde0;
        }
    }
    ctx->pc = 0x38CDC8u;
label_38cdc8:
    // 0x38cdc8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38cdcc:
    // 0x38cdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cdd0:
    // 0x38cdd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38cdd4:
    // 0x38cdd4: 0x40f809  jalr        $v0
label_38cdd8:
    if (ctx->pc == 0x38CDD8u) {
        ctx->pc = 0x38CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDD4u;
        // 0x38cdd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CDDCu;
        goto label_38cddc;
    }
    ctx->pc = 0x38CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CDDCu);
        ctx->pc = 0x38CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDD4u;
        // 0x38cdd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CDD4u, 0x38CDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CDDCu;
label_38cddc:
    // 0x38cddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38cde0:
    // 0x38cde0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38cde4:
    // 0x38cde4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_38cde8:
    if (ctx->pc == 0x38CDE8u) {
        ctx->pc = 0x38CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDE4u;
        // 0x38cde8: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CDECu;
        goto label_38cdec;
    }
    ctx->pc = 0x38CDE4u;
    {
        const bool branch_taken_0x38cde4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x38CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDE4u;
        // 0x38cde8: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cde4) {
            ctx->pc = 0x38CDF8u;
            goto label_38cdf8;
        }
    }
    ctx->pc = 0x38CDECu;
label_38cdec:
    // 0x38cdec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38cdf0:
    // 0x38cdf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38cdf4:
    // 0x38cdf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38cdf8:
    // 0x38cdf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38cdfc:
    // 0x38cdfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38cdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ce00:
    // 0x38ce00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ce00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38ce04:
    // 0x38ce04: 0x3e00008  jr          $ra
label_38ce08:
    if (ctx->pc == 0x38CE08u) {
        ctx->pc = 0x38CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE04u;
        // 0x38ce08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CE0Cu;
        goto label_38ce0c;
    }
    ctx->pc = 0x38CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE04u;
        // 0x38ce08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE0Cu;
label_38ce0c:
    // 0x38ce0c: 0x0  nop
    ctx->pc = 0x38ce0cu;
    // NOP
    ctx->pc = 0x38ce10u;
}
