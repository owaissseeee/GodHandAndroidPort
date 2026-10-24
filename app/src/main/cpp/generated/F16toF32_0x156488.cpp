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

// Function: F16toF32
// Address: 0x156488 - 0x156508
void F16toF32_0x156488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("F16toF32_0x156488");
#endif

    switch (ctx->pc) {
        case 0x1564b8u: goto label_1564b8;
        default: break;
    }

    ctx->pc = 0x156488u;

    // 0x156488: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x156488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15648c: 0x30627c00  andi        $v0, $v1, 0x7C00
    ctx->pc = 0x15648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x156490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156490u;
    {
        const bool branch_taken_0x156490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156490u;
        // 0x156494: 0x306403ff  andi        $a0, $v1, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156490) {
            ctx->pc = 0x1564A8u;
            goto label_1564a8;
        }
    }
    ctx->pc = 0x156498u;
    // 0x156498: 0x31282  srl         $v0, $v1, 10
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x15649c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x15649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1564a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1564A0u;
    {
        const bool branch_taken_0x1564a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A0u;
        // 0x1564a4: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a0) {
            ctx->pc = 0x1564E4u;
            goto label_1564e4;
        }
    }
    ctx->pc = 0x1564A8u;
label_1564a8:
    // 0x1564a8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A8u;
        // 0x1564ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x1564D8u;
            goto label_1564d8;
        }
    }
    ctx->pc = 0x1564B0u;
    // 0x1564b0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1564b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1564b4: 0x0  nop
    ctx->pc = 0x1564b4u;
    // NOP
label_1564b8:
    // 0x1564b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1564b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1564bc: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x1564bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1564c0: 0x0  nop
    ctx->pc = 0x1564c0u;
    // NOP
    // 0x1564c4: 0x0  nop
    ctx->pc = 0x1564c4u;
    // NOP
    // 0x1564c8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1564C8u;
    {
        const bool branch_taken_0x1564c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564C8u;
        // 0x1564cc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564c8) {
            ctx->pc = 0x1564B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1564b8;
        }
    }
    ctx->pc = 0x1564D0u;
    // 0x1564d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1564D0u;
    {
        const bool branch_taken_0x1564d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D0u;
        // 0x1564d4: 0x308403ff  andi        $a0, $a0, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564d0) {
            ctx->pc = 0x1564E4u;
            goto label_1564e4;
        }
    }
    ctx->pc = 0x1564D8u;
label_1564d8:
    // 0x1564d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1564d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1564dc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1564dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1564e0: 0x34a5ff90  ori         $a1, $a1, 0xFF90
    ctx->pc = 0x1564e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65424);
label_1564e4:
    // 0x1564e4: 0x24a20070  addiu       $v0, $a1, 0x70
    ctx->pc = 0x1564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x1564e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1564e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1564ec: 0x215c0  sll         $v0, $v0, 23
    ctx->pc = 0x1564ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x1564f0: 0x42340  sll         $a0, $a0, 13
    ctx->pc = 0x1564f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
    // 0x1564f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1564f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1564f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1564fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1564fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156500: 0x3e00008  jr          $ra
    ctx->pc = 0x156500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156508u;
}
