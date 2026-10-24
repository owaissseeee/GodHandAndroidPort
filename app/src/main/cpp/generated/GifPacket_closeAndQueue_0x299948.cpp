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

// Function: GifPacket_closeAndQueue
// Address: 0x299948 - 0x2999d0
void GifPacket_closeAndQueue_0x299948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GifPacket_closeAndQueue_0x299948");
#endif

    switch (ctx->pc) {
        case 0x2999c0u: goto label_2999c0;
        default: break;
    }

    ctx->pc = 0x299948u;

    // 0x299948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29994c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29994cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x299958: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x299958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29995c: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x29995cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x299960: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299964: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x299964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x299968: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29996c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x29996cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x299970: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x299970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x299974: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x299974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x299978: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x299978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29997c: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x29997cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x299980: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x299980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x299984: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x299988: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29998c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299990: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x299990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x299994: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x299994u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x299998: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299998u;
    {
        const bool branch_taken_0x299998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299998u;
        // 0x29999c: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299998) {
            ctx->pc = 0x2999ACu;
            goto label_2999ac;
        }
    }
    ctx->pc = 0x2999A0u;
    // 0x2999a0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2999a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2999a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2999a8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2999a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2999ac:
    // 0x2999ac: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2999acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2999b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2999b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2999b4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2999b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2999b8: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x2999B8u;
    SET_GPR_U32(ctx, 31, 0x2999C0u);
    ctx->pc = 0x2999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999B8u;
    // 0x2999bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x2999B8u, 0x2999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999C0u;
label_2999c0:
    // 0x2999c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2999c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2999c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2999C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999C4u;
        // 0x2999c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2999C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2999CCu;
    // 0x2999cc: 0x0  nop
    ctx->pc = 0x2999ccu;
    // NOP
    ctx->pc = 0x2999d0u;
}
