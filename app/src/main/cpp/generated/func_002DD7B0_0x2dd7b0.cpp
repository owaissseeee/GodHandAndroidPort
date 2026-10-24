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

// Function: func_002DD7B0
// Address: 0x2dd7b0 - 0x2dd870
void func_002DD7B0_0x2dd7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD7B0_0x2dd7b0");
#endif

    switch (ctx->pc) {
        case 0x2dd7c8u: goto label_2dd7c8;
        case 0x2dd7e4u: goto label_2dd7e4;
        case 0x2dd808u: goto label_2dd808;
        case 0x2dd848u: goto label_2dd848;
        case 0x2dd858u: goto label_2dd858;
        default: break;
    }

    ctx->pc = 0x2dd7b0u;

    // 0x2dd7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd7b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd7bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd7c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD7C0u;
    SET_GPR_U32(ctx, 31, 0x2DD7C8u);
    ctx->pc = 0x2DD7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7C0u;
    // 0x2dd7c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD7C0u, 0x2DD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7C8u;
label_2dd7c8:
    // 0x2dd7c8: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD7C8u;
    {
        const bool branch_taken_0x2dd7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7C8u;
        // 0x2dd7cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7c8) {
            ctx->pc = 0x2DD858u;
            goto label_2dd858;
        }
    }
    ctx->pc = 0x2DD7D0u;
    // 0x2dd7d0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd7d4: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD7D4u;
    {
        const bool branch_taken_0x2dd7d4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd7d4) {
            ctx->pc = 0x2DD7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD7D4u;
            // 0x2dd7d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD85Cu;
            goto label_2dd85c;
        }
    }
    ctx->pc = 0x2DD7DCu;
    // 0x2dd7dc: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD7DCu;
    SET_GPR_U32(ctx, 31, 0x2DD7E4u);
    ctx->pc = 0x2DD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7DCu;
    // 0x2dd7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD7DCu, 0x2DD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7E4u;
label_2dd7e4:
    // 0x2dd7e4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD7E4u;
    {
        const bool branch_taken_0x2dd7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7e4) {
            ctx->pc = 0x2DD7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD7E4u;
            // 0x2dd7e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD85Cu;
            goto label_2dd85c;
        }
    }
    ctx->pc = 0x2DD7ECu;
    // 0x2dd7ec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd7f0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd7f4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd7f8: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD7F8u;
    {
        const bool branch_taken_0x2dd7f8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd7f8) {
            ctx->pc = 0x2DD7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD7F8u;
            // 0x2dd7fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD85Cu;
            goto label_2dd85c;
        }
    }
    ctx->pc = 0x2DD800u;
    // 0x2dd800: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD800u;
    SET_GPR_U32(ctx, 31, 0x2DD808u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD800u, 0x2DD808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD808u;
label_2dd808:
    // 0x2dd808: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD808u;
    {
        const bool branch_taken_0x2dd808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd808) {
            ctx->pc = 0x2DD80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD808u;
            // 0x2dd80c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD85Cu;
            goto label_2dd85c;
        }
    }
    ctx->pc = 0x2DD810u;
    // 0x2dd810: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd81c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2dd81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2dd820: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd824: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd828: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd82c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd838: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd83c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd840: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD840u;
    SET_GPR_U32(ctx, 31, 0x2DD848u);
    ctx->pc = 0x2DD844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD840u;
    // 0x2dd844: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD840u, 0x2DD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD848u;
label_2dd848:
    // 0x2dd848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd850: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD850u;
    SET_GPR_U32(ctx, 31, 0x2DD858u);
    ctx->pc = 0x2DD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD850u;
    // 0x2dd854: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD850u, 0x2DD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD858u;
label_2dd858:
    // 0x2dd858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd85c:
    // 0x2dd85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd864: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD864u;
        // 0x2dd868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD86Cu;
    // 0x2dd86c: 0x0  nop
    ctx->pc = 0x2dd86cu;
    // NOP
    ctx->pc = 0x2dd870u;
}
