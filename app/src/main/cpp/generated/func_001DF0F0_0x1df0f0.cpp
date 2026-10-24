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

// Function: func_001DF0F0
// Address: 0x1df0f0 - 0x1df198
void func_001DF0F0_0x1df0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF0F0_0x1df0f0");
#endif

    switch (ctx->pc) {
        case 0x1df178u: goto label_1df178;
        case 0x1df188u: goto label_1df188;
        default: break;
    }

    ctx->pc = 0x1df0f0u;

    // 0x1df0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df0f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1df0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0f8: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DF0F8u;
    {
        const bool branch_taken_0x1df0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0F8u;
        // 0x1df0fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0f8) {
            ctx->pc = 0x1DF180u;
            goto label_1df180;
        }
    }
    ctx->pc = 0x1DF100u;
    // 0x1df100: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1df100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1df104: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1df104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1df108: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1df108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1df10c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1df10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1df110: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1df110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1df114: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1df114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1df118: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1df118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1df11c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1df11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1df120: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1df124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1df128: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1df128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1df12c: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1df12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1df130: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1df130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1df134: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1df134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1df138: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1df138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1df13c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1df140: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1df140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1df144: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1df144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1df148: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1df148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1df14c: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1df14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1df150: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1df154: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df158: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1df158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1df15c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1df15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1df160: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1df160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1df164: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df168: 0x24e40250  addiu       $a0, $a3, 0x250
    ctx->pc = 0x1df168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 592));
    // 0x1df16c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1df16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1df170: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DF170u;
    SET_GPR_U32(ctx, 31, 0x1DF178u);
    ctx->pc = 0x1DF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF170u;
    // 0x1df174: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DF170u, 0x1DF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF178u;
label_1df178:
    // 0x1df178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF178u;
    {
        const bool branch_taken_0x1df178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF178u;
        // 0x1df17c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df178) {
            ctx->pc = 0x1DF18Cu;
            goto label_1df18c;
        }
    }
    ctx->pc = 0x1DF180u;
label_1df180:
    // 0x1df180: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DF180u;
    SET_GPR_U32(ctx, 31, 0x1DF188u);
    ctx->pc = 0x1DF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF180u;
    // 0x1df184: 0x24e40250  addiu       $a0, $a3, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DF180u, 0x1DF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF188u;
label_1df188:
    // 0x1df188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df18c:
    // 0x1df18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF18Cu;
        // 0x1df190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF194u;
    // 0x1df194: 0x0  nop
    ctx->pc = 0x1df194u;
    // NOP
    ctx->pc = 0x1df198u;
}
