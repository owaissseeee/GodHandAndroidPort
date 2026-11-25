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

// Function: EntPool_allocClear
// Address: 0x149488 - 0x1494f8
void EntPool_allocClear_0x149488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntPool_allocClear_0x149488");
#endif

    if (__builtin_expect(ctx->pc != 0x149488u, 0)) {
        switch (ctx->pc) {
            case 0x1494a0u: goto label_1494a0;
            case 0x1494dcu: goto label_1494dc;
            case 0x1494e4u: goto label_1494e4;
            default: break;
        }
    }


    // 0x149488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14948c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149498: 0xc0aa5e8  jal         func_2A97A0
    SET_GPR_U32(ctx, 31, 0x1494A0u);
    ctx->pc = 0x14949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149498u;
    // 0x14949c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A97A0_0x2a97a0, 0x2a97a0u, 0x1494a0u)) {
        return;
    }
    ctx->pc = 0x1494A0u;
label_1494a0:
    // 0x1494a0: 0x40882d  daddu       $s1, $v0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494a4: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1494A4u;
    {
        const bool branch_taken_0x1494a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1494a4) {
            ctx->pc = 0x1494A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494A4u;
            // 0x1494a8: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494B4u;
            goto label_1494b4;
        }
    }
    // 0x1494ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1494ACu;
    {
        const bool branch_taken_0x1494ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494ACu;
        // 0x1494b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494ac) {
            ctx->pc = 0x1494E4u;
            goto label_1494e4;
        }
    }
    ctx->pc = 0x1494B4u;
label_1494b4:
    // 0x1494b4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1494b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1494b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1494bc: 0x62102b  sltu        $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1494c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1494C0u;
    {
        const bool branch_taken_0x1494c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494C0u;
        // 0x1494c4: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494c0) {
            ctx->pc = 0x1494CCu;
            goto label_1494cc;
        }
    }
    // 0x1494c8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1494c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1494cc:
    // 0x1494cc: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494d0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494d4: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x1494DCu);
    ctx->pc = 0x1494D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494D4u;
    // 0x1494d8: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x1494dcu)) {
        return;
    }
    ctx->pc = 0x1494DCu;
label_1494dc:
    // 0x1494dc: 0xc0520d6  jal         func_148358
    SET_GPR_U32(ctx, 31, 0x1494E4u);
    ctx->pc = 0x1494E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494DCu;
    // 0x1494e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00148358_0x148358, 0x148358u, 0x1494e4u)) {
        return;
    }
    ctx->pc = 0x1494E4u;
label_1494e4:
    // 0x1494e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1494e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1494e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1494e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1494ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1494ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1494f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1494F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1494F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494F0u;
        // 0x1494f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1494F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1494F8u;
}