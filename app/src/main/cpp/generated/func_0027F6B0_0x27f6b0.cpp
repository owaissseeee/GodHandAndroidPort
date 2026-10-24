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

// Function: func_0027F6B0
// Address: 0x27f6b0 - 0x27f780
void func_0027F6B0_0x27f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F6B0_0x27f6b0");
#endif

    switch (ctx->pc) {
        case 0x27f710u: goto label_27f710;
        case 0x27f740u: goto label_27f740;
        case 0x27f754u: goto label_27f754;
        default: break;
    }

    ctx->pc = 0x27f6b0u;

    // 0x27f6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f6b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6c0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27f6c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f6c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F6C4u;
    {
        const bool branch_taken_0x27f6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C4u;
        // 0x27f6c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6c4) {
            ctx->pc = 0x27F6DCu;
            goto label_27f6dc;
        }
    }
    ctx->pc = 0x27F6CCu;
    // 0x27f6cc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27F6CCu;
    {
        const bool branch_taken_0x27f6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f6cc) {
            ctx->pc = 0x27F74Cu;
            goto label_27f74c;
        }
    }
    ctx->pc = 0x27F6D4u;
    // 0x27f6d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x27F6D4u;
    {
        const bool branch_taken_0x27f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6D4u;
        // 0x27f6d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6d4) {
            ctx->pc = 0x27F770u;
            goto label_27f770;
        }
    }
    ctx->pc = 0x27F6DCu;
label_27f6dc:
    // 0x27f6dc: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27f6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27f6e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F6E0u;
    {
        const bool branch_taken_0x27f6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6E0u;
        // 0x27f6e4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6e0) {
            ctx->pc = 0x27F718u;
            goto label_27f718;
        }
    }
    ctx->pc = 0x27F6E8u;
    // 0x27f6e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f6f4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x27f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27f6f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f6f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6fc: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x27f6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x27f700: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f704: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f708: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F708u;
    SET_GPR_U32(ctx, 31, 0x27F710u);
    ctx->pc = 0x27F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F708u;
    // 0x27f70c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F708u, 0x27F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F710u;
label_27f710:
    // 0x27f710: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27F710u;
    {
        const bool branch_taken_0x27f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F710u;
        // 0x27f714: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f710) {
            ctx->pc = 0x27F744u;
            goto label_27f744;
        }
    }
    ctx->pc = 0x27F718u;
label_27f718:
    // 0x27f718: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f724: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x27f724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27f728: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f72c: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x27f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x27f730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f734: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f738: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F738u;
    SET_GPR_U32(ctx, 31, 0x27F740u);
    ctx->pc = 0x27F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F738u;
    // 0x27f73c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F738u, 0x27F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F740u;
label_27f740:
    // 0x27f740: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27f740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27f744:
    // 0x27f744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f748: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27f748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27f74c:
    // 0x27f74c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27F74Cu;
    SET_GPR_U32(ctx, 31, 0x27F754u);
    ctx->pc = 0x27F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F74Cu;
    // 0x27f750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27F74Cu, 0x27F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F754u;
label_27f754:
    // 0x27f754: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F754u;
    {
        const bool branch_taken_0x27f754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f754) {
            ctx->pc = 0x27F758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F754u;
            // 0x27f758: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F770u;
            goto label_27f770;
        }
    }
    ctx->pc = 0x27F75Cu;
    // 0x27f75c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27f75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f760: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27f760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f764: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27f764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f768: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27f768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f76c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f770:
    // 0x27f770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f774: 0x3e00008  jr          $ra
    ctx->pc = 0x27F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F774u;
        // 0x27f778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F77Cu;
    // 0x27f77c: 0x0  nop
    ctx->pc = 0x27f77cu;
    // NOP
    ctx->pc = 0x27f780u;
}
