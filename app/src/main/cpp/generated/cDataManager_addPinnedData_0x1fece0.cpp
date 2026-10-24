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

// Function: cDataManager_addPinnedData
// Address: 0x1fece0 - 0x1fed78
void cDataManager_addPinnedData_0x1fece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_addPinnedData_0x1fece0");
#endif

    switch (ctx->pc) {
        case 0x1fed08u: goto label_1fed08;
        case 0x1fed18u: goto label_1fed18;
        case 0x1fed20u: goto label_1fed20;
        case 0x1fed40u: goto label_1fed40;
        default: break;
    }

    ctx->pc = 0x1fece0u;

    // 0x1fece0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fece4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fece8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fecec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecf0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fecf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fecf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fecfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fed00: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FED00u;
    SET_GPR_U32(ctx, 31, 0x1FED08u);
    ctx->pc = 0x1FED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED00u;
    // 0x1fed04: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FED00u, 0x1FED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED08u;
label_1fed08:
    // 0x1fed08: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED08u;
    {
        const bool branch_taken_0x1fed08 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED08u;
        // 0x1fed0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed08) {
            ctx->pc = 0x1FED18u;
            goto label_1fed18;
        }
    }
    ctx->pc = 0x1FED10u;
    // 0x1fed10: 0xc07fb24  jal         func_1FEC90
    ctx->pc = 0x1FED10u;
    SET_GPR_U32(ctx, 31, 0x1FED18u);
    ctx->pc = 0x1FED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED10u;
    // 0x1fed14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC90u, 0x1FED10u, 0x1FED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED18u;
label_1fed18:
    // 0x1fed18: 0xc07fba8  jal         func_1FEEA0
    ctx->pc = 0x1FED18u;
    SET_GPR_U32(ctx, 31, 0x1FED20u);
    ctx->pc = 0x1FED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED18u;
    // 0x1fed1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEA0u, 0x1FED18u, 0x1FED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED20u;
label_1fed20:
    // 0x1fed20: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0x2410005c  addiu       $s0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FED58u;
            goto label_1fed58;
        }
    }
    ctx->pc = 0x1FED28u;
    // 0x1fed28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1fed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fed2c: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x1fed2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1fed30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fed30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fed34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed38: 0xc07fd1c  jal         func_1FF470
    ctx->pc = 0x1FED38u;
    SET_GPR_U32(ctx, 31, 0x1FED40u);
    ctx->pc = 0x1FED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED38u;
    // 0x1fed3c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF470u, 0x1FED38u, 0x1FED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED40u;
label_1fed40:
    // 0x1fed40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fed44: 0x2404ff9c  addiu       $a0, $zero, -0x64
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1fed48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fed4c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fed50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FED50u;
    {
        const bool branch_taken_0x1fed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED50u;
        // 0x1fed54: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed50) {
            ctx->pc = 0x1FED5Cu;
            goto label_1fed5c;
        }
    }
    ctx->pc = 0x1FED58u;
label_1fed58:
    // 0x1fed58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fed58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fed5c:
    // 0x1fed5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fed5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fed60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fed60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fed64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fed64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fed68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fed68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fed6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED70u;
        // 0x1fed74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED78u;
}
