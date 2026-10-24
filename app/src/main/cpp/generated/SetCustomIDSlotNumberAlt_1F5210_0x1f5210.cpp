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

// Function: SetCustomIDSlotNumberAlt_1F5210
// Address: 0x1f5210 - 0x1f5278
void SetCustomIDSlotNumberAlt_1F5210_0x1f5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCustomIDSlotNumberAlt_1F5210_0x1f5210");
#endif

    switch (ctx->pc) {
        case 0x1f5250u: goto label_1f5250;
        case 0x1f5260u: goto label_1f5260;
        default: break;
    }

    ctx->pc = 0x1f5210u;

    // 0x1f5210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f5214: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f5218: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1f5218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f521c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f5220: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f5220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f5224: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f522c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5230: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x1f5230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f5234: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5234u;
    {
        const bool branch_taken_0x1f5234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5234u;
        // 0x1f5238: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5234) {
            ctx->pc = 0x1F5260u;
            goto label_1f5260;
        }
    }
    ctx->pc = 0x1F523Cu;
    // 0x1f523c: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1f523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1f5240: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1f5240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f5244: 0x24842058  addiu       $a0, $a0, 0x2058
    ctx->pc = 0x1f5244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8280));
    // 0x1f5248: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F5248u;
    SET_GPR_U32(ctx, 31, 0x1F5250u);
    ctx->pc = 0x1F524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5248u;
    // 0x1f524c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F5248u, 0x1F5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5250u;
label_1f5250:
    // 0x1f5250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5254: 0x26050042  addiu       $a1, $s0, 0x42
    ctx->pc = 0x1f5254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x1f5258: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5258u;
    SET_GPR_U32(ctx, 31, 0x1F5260u);
    ctx->pc = 0x1F525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5258u;
    // 0x1f525c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5258u, 0x1F5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5260u;
label_1f5260:
    // 0x1f5260: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f5260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5264: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5268: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f5268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f526c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f526cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5270: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5270u;
        // 0x1f5274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5278u;
}
