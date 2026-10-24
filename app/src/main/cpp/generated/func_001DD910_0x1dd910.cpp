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

// Function: func_001DD910
// Address: 0x1dd910 - 0x1dd9e0
void func_001DD910_0x1dd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD910_0x1dd910");
#endif

    switch (ctx->pc) {
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd988u: goto label_1dd988;
        case 0x1dd998u: goto label_1dd998;
        case 0x1dd9acu: goto label_1dd9ac;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9ccu: goto label_1dd9cc;
        default: break;
    }

    ctx->pc = 0x1dd910u;

    // 0x1dd910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd914: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1dd914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1dd918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd924: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD924u;
    {
        const bool branch_taken_0x1dd924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD924u;
        // 0x1dd928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd924) {
            ctx->pc = 0x1DD964u;
            goto label_1dd964;
        }
    }
    ctx->pc = 0x1DD92Cu;
    // 0x1dd92c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dd92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD930u;
    {
        const bool branch_taken_0x1dd930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd930) {
            ctx->pc = 0x1DD934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD930u;
            // 0x1dd934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD948u;
            goto label_1dd948;
        }
    }
    ctx->pc = 0x1DD938u;
    // 0x1dd938: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD938u;
    {
        const bool branch_taken_0x1dd938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD938u;
        // 0x1dd93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd938) {
            ctx->pc = 0x1DD958u;
            goto label_1dd958;
        }
    }
    ctx->pc = 0x1DD940u;
    // 0x1dd940: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DD940u;
    {
        const bool branch_taken_0x1dd940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD940u;
        // 0x1dd944: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd940) {
            ctx->pc = 0x1DD9D0u;
            goto label_1dd9d0;
        }
    }
    ctx->pc = 0x1DD948u;
label_1dd948:
    // 0x1dd948: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD948u;
    {
        const bool branch_taken_0x1dd948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD948u;
        // 0x1dd94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd948) {
            ctx->pc = 0x1DD9A0u;
            goto label_1dd9a0;
        }
    }
    ctx->pc = 0x1DD950u;
    // 0x1dd950: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD950u;
    {
        const bool branch_taken_0x1dd950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD950u;
        // 0x1dd954: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd950) {
            ctx->pc = 0x1DD9D0u;
            goto label_1dd9d0;
        }
    }
    ctx->pc = 0x1DD958u;
label_1dd958:
    // 0x1dd958: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1dd958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dd95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD95Cu;
    {
        const bool branch_taken_0x1dd95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD95Cu;
        // 0x1dd960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd95c) {
            ctx->pc = 0x1DD970u;
            goto label_1dd970;
        }
    }
    ctx->pc = 0x1DD964u;
label_1dd964:
    // 0x1dd964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd968: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1dd968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dd96c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd970:
    // 0x1dd970: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD970u;
    SET_GPR_U32(ctx, 31, 0x1DD978u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD970u, 0x1DD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD978u;
label_1dd978:
    // 0x1dd978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd97c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1dd97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dd980: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD980u;
    SET_GPR_U32(ctx, 31, 0x1DD988u);
    ctx->pc = 0x1DD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD980u;
    // 0x1dd984: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD980u, 0x1DD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD988u;
label_1dd988:
    // 0x1dd988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd98c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1dd98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1dd990: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD990u;
    SET_GPR_U32(ctx, 31, 0x1DD998u);
    ctx->pc = 0x1DD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD990u;
    // 0x1dd994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD990u, 0x1DD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD998u;
label_1dd998:
    // 0x1dd998: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DD998u;
    {
        const bool branch_taken_0x1dd998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD998u;
        // 0x1dd99c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd998) {
            ctx->pc = 0x1DD9D0u;
            goto label_1dd9d0;
        }
    }
    ctx->pc = 0x1DD9A0u;
label_1dd9a0:
    // 0x1dd9a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1dd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dd9a4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD9A4u;
    SET_GPR_U32(ctx, 31, 0x1DD9ACu);
    ctx->pc = 0x1DD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9A4u;
    // 0x1dd9a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD9A4u, 0x1DD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9ACu;
label_1dd9ac:
    // 0x1dd9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dd9b4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD9B4u;
    SET_GPR_U32(ctx, 31, 0x1DD9BCu);
    ctx->pc = 0x1DD9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9B4u;
    // 0x1dd9b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD9B4u, 0x1DD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9BCu;
label_1dd9bc:
    // 0x1dd9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1dd9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1dd9c4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD9C4u;
    SET_GPR_U32(ctx, 31, 0x1DD9CCu);
    ctx->pc = 0x1DD9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9C4u;
    // 0x1dd9c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD9C4u, 0x1DD9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9CCu;
label_1dd9cc:
    // 0x1dd9cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd9d0:
    // 0x1dd9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D4u;
        // 0x1dd9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9DCu;
    // 0x1dd9dc: 0x0  nop
    ctx->pc = 0x1dd9dcu;
    // NOP
    ctx->pc = 0x1dd9e0u;
}
