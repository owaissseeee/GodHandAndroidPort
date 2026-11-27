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

// Function: func_00279F68
// Address: 0x279f68 - 0x279ff0
void func_00279F68_0x279f68(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279F68_0x279f68");
#endif

    if (__builtin_expect(ctx->pc != 0x279f68u, 0)) {
        switch (ctx->pc) {
            case 0x279f84u: goto label_279f84;
            case 0x279f98u: goto label_279f98;
            case 0x279fb0u: goto label_279fb0;
            case 0x279fd4u: goto label_279fd4;
            default: break;
        }
    }


    // 0x279f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279f6c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x279f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x279f74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279f7c: 0xc05657a  jal         func_1595E8
    SET_GPR_U32(ctx, 31, 0x279F84u);
    ctx->pc = 0x279F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F7Cu;
    // 0x279f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Field_424_1595E8_0x1595e8, 0x1595e8u, 0x279f84u)) {
        return;
    }
label_279f84:
    // 0x279f84: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x279f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x279f88: 0x3c050044  lui         $a1, 0x44
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x279f8c: 0x24a57e58  addiu       $a1, $a1, 0x7E58
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32344));
    // 0x279f90: 0xc0c733c  jal         func_31CCF0
    SET_GPR_U32(ctx, 31, 0x279F98u);
    ctx->pc = 0x279F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F90u;
    // 0x279f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SearchData_0x31ccf0, 0x31ccf0u, 0x279f98u)) {
        return;
    }
label_279f98:
    // 0x279f98: 0x3c050044  lui         $a1, 0x44
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x279f9c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x279f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x279fa0: 0x40882d  daddu       $s1, $v0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fa4: 0x24a57e60  addiu       $a1, $a1, 0x7E60
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32352));
    // 0x279fa8: 0xc0c733c  jal         func_31CCF0
    SET_GPR_U32(ctx, 31, 0x279FB0u);
    ctx->pc = 0x279FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FA8u;
    // 0x279fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SearchData_0x31ccf0, 0x31ccf0u, 0x279fb0u)) {
        return;
    }
label_279fb0:
    // 0x279fb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279FB0u;
    {
        const bool branch_taken_0x279fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FB0u;
        // 0x279fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb0) {
            ctx->pc = 0x279FC0u;
            goto label_279fc0;
        }
    }
    // 0x279fb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x279FB8u;
    {
        const bool branch_taken_0x279fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FB8u;
        // 0x279fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb8) {
            ctx->pc = 0x279FD4u;
            goto label_279fd4;
        }
    }
label_279fc0:
    // 0x279fc0: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fc4: 0x40302d  daddu       $a2, $v0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fc8: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fcc: 0xc0525ce  jal         func_149738
    SET_GPR_U32(ctx, 31, 0x279FD4u);
    ctx->pc = 0x279FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FCCu;
    // 0x279fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cModel_setupModel_0x149738, 0x149738u, 0x279fd4u)) {
        return;
    }
label_279fd4:
    // 0x279fd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x279fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x279FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FE0u;
        // 0x279fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x279fe8: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279fec: 0x0  nop
    // NOP
    ctx->pc = 0x279ff0u;
}