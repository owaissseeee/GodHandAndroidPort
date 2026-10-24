#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcRead
// Address: 0x7cdb68 - 0x7cdc80
void sceMcRead_0x7cdb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcRead_0x7cdb68");
#endif

    switch (ctx->pc) {
        case 0x7cdbbcu: goto label_7cdbbc;
        case 0x7cdbf4u: goto label_7cdbf4;
        case 0x7cdc00u: goto label_7cdc00;
        case 0x7cdc30u: goto label_7cdc30;
        case 0x7cdc40u: goto label_7cdc40;
        default: break;
    }

    ctx->pc = 0x7cdb68u;

    // 0x7cdb68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7cdb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7cdb6c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cdb70: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7cdb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7cdb74: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cdb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cdb78: 0x24551980  addiu       $s5, $v0, 0x1980
    ctx->pc = 0x7cdb78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7cdb7c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cdb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cdb80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7cdb80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdb84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cdb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cdb88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7cdb88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdb8c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7cdb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x7cdb90: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7cdb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7cdb94: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cdb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cdb98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cdb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cdb9c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x7cdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cdba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDBA0u;
    {
        const bool branch_taken_0x7cdba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDBA0u;
        // 0x7cdba4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdba0) {
            ctx->pc = 0x7CDBB0u;
            goto label_7cdbb0;
        }
    }
    ctx->pc = 0x7CDBA8u;
    // 0x7cdba8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7CDBA8u;
    {
        const bool branch_taken_0x7cdba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDBA8u;
        // 0x7cdbac: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdba8) {
            ctx->pc = 0x7CDC54u;
            goto label_7cdc54;
        }
    }
    ctx->pc = 0x7CDBB0u;
label_7cdbb0:
    // 0x7cdbb0: 0x3c16007d  lui         $s6, 0x7D
    ctx->pc = 0x7cdbb0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)125 << 16));
    // 0x7cdbb4: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CDBB4u;
    SET_GPR_U32(ctx, 31, 0x7CDBBCu);
    ctx->pc = 0x7CDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDBB4u;
    // 0x7cdbb8: 0x8ec407b4  lw          $a0, 0x7B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CDBB4u, 0x7CDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDBBCu;
label_7cdbbc:
    // 0x7cdbbc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDBBCu;
    {
        const bool branch_taken_0x7cdbbc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDBBCu;
        // 0x7cdbc0: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdbbc) {
            ctx->pc = 0x7CDBCCu;
            goto label_7cdbcc;
        }
    }
    ctx->pc = 0x7CDBC4u;
    // 0x7cdbc4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7CDBC4u;
    {
        const bool branch_taken_0x7cdbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDBC4u;
        // 0x7cdbc8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdbc4) {
            ctx->pc = 0x7CDC54u;
            goto label_7cdc54;
        }
    }
    ctx->pc = 0x7CDBCCu;
label_7cdbcc:
    // 0x7cdbcc: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7cdbccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7cdbd0: 0x24511a00  addiu       $s1, $v0, 0x1A00
    ctx->pc = 0x7cdbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x7cdbd4: 0x26101e80  addiu       $s0, $s0, 0x1E80
    ctx->pc = 0x7cdbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
    // 0x7cdbd8: 0xac541a00  sw          $s4, 0x1A00($v0)
    ctx->pc = 0x7cdbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6656), GPR_U32(ctx, 20));
    // 0x7cdbdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7cdbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdbe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7cdbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdbe4: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x7cdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x7cdbe8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x7cdbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x7cdbec: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CDBECu;
    SET_GPR_U32(ctx, 31, 0x7CDBF4u);
    ctx->pc = 0x7CDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDBECu;
    // 0x7cdbf0: 0xae30001c  sw          $s0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CDBECu, 0x7CDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDBF4u;
label_7cdbf4:
    // 0x7cdbf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cdbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdbf8: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CDBF8u;
    SET_GPR_U32(ctx, 31, 0x7CDC00u);
    ctx->pc = 0x7CDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDBF8u;
    // 0x7cdbfc: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CDBF8u, 0x7CDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDC00u;
label_7cdc00:
    // 0x7cdc00: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cdc00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cdc04: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cdc04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cdc08: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x7cdc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x7cdc0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7cdc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdc10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7cdc10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdc14: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cdc14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cdc18: 0x256bdab8  addiu       $t3, $t3, -0x2548
    ctx->pc = 0x7cdc18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957752));
    // 0x7cdc1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7cdc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7cdc20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cdc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cdc24: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cdc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cdc28: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CDC28u;
    SET_GPR_U32(ctx, 31, 0x7CDC30u);
    ctx->pc = 0x7CDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDC28u;
    // 0x7cdc2c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CDC28u, 0x7CDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDC30u;
label_7cdc30:
    // 0x7cdc30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CDC30u;
    {
        const bool branch_taken_0x7cdc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDC30u;
        // 0x7cdc34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdc30) {
            ctx->pc = 0x7CDC48u;
            goto label_7cdc48;
        }
    }
    ctx->pc = 0x7CDC38u;
    // 0x7cdc38: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CDC38u;
    SET_GPR_U32(ctx, 31, 0x7CDC40u);
    ctx->pc = 0x7CDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDC38u;
    // 0x7cdc3c: 0x8ec407b4  lw          $a0, 0x7B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CDC38u, 0x7CDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDC40u;
label_7cdc40:
    // 0x7cdc40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDC40u;
    {
        const bool branch_taken_0x7cdc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDC40u;
        // 0x7cdc44: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdc40) {
            ctx->pc = 0x7CDC54u;
            goto label_7cdc54;
        }
    }
    ctx->pc = 0x7CDC48u;
label_7cdc48:
    // 0x7cdc48: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cdc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cdc4c: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cdc4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cdc50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cdc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cdc54:
    // 0x7cdc54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x7cdc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7cdc58: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7cdc58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cdc5c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7cdc5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cdc60: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cdc60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cdc64: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cdc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cdc68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cdc68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cdc6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cdc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cdc70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cdc70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cdc74: 0x3e00008  jr          $ra
    ctx->pc = 0x7CDC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDC74u;
        // 0x7cdc78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CDC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CDC7Cu;
    // 0x7cdc7c: 0x0  nop
    ctx->pc = 0x7cdc7cu;
    // NOP
    ctx->pc = 0x7cdc80u;
}
} // namespace gh_mcport
