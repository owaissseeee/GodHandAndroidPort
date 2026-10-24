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

// Function: func_001F0360
// Address: 0x1f0360 - 0x1f03e8
void func_001F0360_0x1f0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F0360_0x1f0360");
#endif

    switch (ctx->pc) {
        case 0x1f0394u: goto label_1f0394;
        case 0x1f03b8u: goto label_1f03b8;
        case 0x1f03d0u: goto label_1f03d0;
        default: break;
    }

    ctx->pc = 0x1f0360u;

    // 0x1f0360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0364: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f036c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f036cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0374: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F0374u;
    {
        const bool branch_taken_0x1f0374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0374u;
        // 0x1f0378: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0374) {
            ctx->pc = 0x1F03D0u;
            goto label_1f03d0;
        }
    }
    ctx->pc = 0x1F037Cu;
    // 0x1f037c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x1f0380: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F0380u;
    {
        const bool branch_taken_0x1f0380 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0380u;
        // 0x1f0384: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0380) {
            ctx->pc = 0x1F03D0u;
            goto label_1f03d0;
        }
    }
    ctx->pc = 0x1F0388u;
    // 0x1f0388: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x1f0388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x1f038c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x1F038Cu;
    SET_GPR_U32(ctx, 31, 0x1F0394u);
    ctx->pc = 0x1F0390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F038Cu;
    // 0x1f0390: 0x2484be90  addiu       $a0, $a0, -0x4170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x1F038Cu, 0x1F0394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0394u;
label_1f0394:
    // 0x1f0394: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0394u;
    {
        const bool branch_taken_0x1f0394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0394u;
        // 0x1f0398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0394) {
            ctx->pc = 0x1F03C0u;
            goto label_1f03c0;
        }
    }
    ctx->pc = 0x1F039Cu;
    // 0x1f039c: 0xc60016cc  lwc1        $f0, 0x16CC($s0)
    ctx->pc = 0x1f039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f03a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f03a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f03a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f03a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f03a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f03a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f03ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f03acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03b0: 0xc07c03a  jal         func_1F00E8
    ctx->pc = 0x1F03B0u;
    SET_GPR_U32(ctx, 31, 0x1F03B8u);
    ctx->pc = 0x1F03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03B0u;
    // 0x1f03b4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F00E8u, 0x1F03B0u, 0x1F03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03B8u;
label_1f03b8:
    // 0x1f03b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F03B8u;
    {
        const bool branch_taken_0x1f03b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03B8u;
        // 0x1f03bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03b8) {
            ctx->pc = 0x1F03D4u;
            goto label_1f03d4;
        }
    }
    ctx->pc = 0x1F03C0u;
label_1f03c0:
    // 0x1f03c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f03c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f03c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f03c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f03c8: 0xc07c03a  jal         func_1F00E8
    ctx->pc = 0x1F03C8u;
    SET_GPR_U32(ctx, 31, 0x1F03D0u);
    ctx->pc = 0x1F03CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03C8u;
    // 0x1f03cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F00E8u, 0x1F03C8u, 0x1F03D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03D0u;
label_1f03d0:
    // 0x1f03d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f03d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f03d4:
    // 0x1f03d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f03d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f03d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f03d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f03dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F03DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03DCu;
        // 0x1f03e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F03DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F03E4u;
    // 0x1f03e4: 0x0  nop
    ctx->pc = 0x1f03e4u;
    // NOP
    ctx->pc = 0x1f03e8u;
}
