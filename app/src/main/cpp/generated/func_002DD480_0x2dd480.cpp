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

// Function: func_002DD480
// Address: 0x2dd480 - 0x2dd540
void func_002DD480_0x2dd480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD480_0x2dd480");
#endif

    switch (ctx->pc) {
        case 0x2dd498u: goto label_2dd498;
        case 0x2dd4b4u: goto label_2dd4b4;
        case 0x2dd4d8u: goto label_2dd4d8;
        case 0x2dd518u: goto label_2dd518;
        case 0x2dd528u: goto label_2dd528;
        default: break;
    }

    ctx->pc = 0x2dd480u;

    // 0x2dd480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd490: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD490u;
    SET_GPR_U32(ctx, 31, 0x2DD498u);
    ctx->pc = 0x2DD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD490u;
    // 0x2dd494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD490u, 0x2DD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD498u;
label_2dd498:
    // 0x2dd498: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD498u;
    {
        const bool branch_taken_0x2dd498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD498u;
        // 0x2dd49c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd498) {
            ctx->pc = 0x2DD528u;
            goto label_2dd528;
        }
    }
    ctx->pc = 0x2DD4A0u;
    // 0x2dd4a0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd4a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd4a4: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD4A4u;
    {
        const bool branch_taken_0x2dd4a4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd4a4) {
            ctx->pc = 0x2DD4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4A4u;
            // 0x2dd4a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD52Cu;
            goto label_2dd52c;
        }
    }
    ctx->pc = 0x2DD4ACu;
    // 0x2dd4ac: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD4ACu;
    SET_GPR_U32(ctx, 31, 0x2DD4B4u);
    ctx->pc = 0x2DD4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4ACu;
    // 0x2dd4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD4ACu, 0x2DD4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4B4u;
label_2dd4b4:
    // 0x2dd4b4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD4B4u;
    {
        const bool branch_taken_0x2dd4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4b4) {
            ctx->pc = 0x2DD4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4B4u;
            // 0x2dd4b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD52Cu;
            goto label_2dd52c;
        }
    }
    ctx->pc = 0x2DD4BCu;
    // 0x2dd4bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd4c0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd4c4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd4c8: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD4C8u;
    {
        const bool branch_taken_0x2dd4c8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd4c8) {
            ctx->pc = 0x2DD4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4C8u;
            // 0x2dd4cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD52Cu;
            goto label_2dd52c;
        }
    }
    ctx->pc = 0x2DD4D0u;
    // 0x2dd4d0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD4D0u;
    SET_GPR_U32(ctx, 31, 0x2DD4D8u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD4D0u, 0x2DD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4D8u;
label_2dd4d8:
    // 0x2dd4d8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD4D8u;
    {
        const bool branch_taken_0x2dd4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4d8) {
            ctx->pc = 0x2DD4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4D8u;
            // 0x2dd4dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD52Cu;
            goto label_2dd52c;
        }
    }
    ctx->pc = 0x2DD4E0u;
    // 0x2dd4e0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd4e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd4ec: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2dd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2dd4f0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd4f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd4f8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd4fc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd508: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd50c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd50cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd510: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD510u;
    SET_GPR_U32(ctx, 31, 0x2DD518u);
    ctx->pc = 0x2DD514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD510u;
    // 0x2dd514: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD510u, 0x2DD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD518u;
label_2dd518:
    // 0x2dd518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd520: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD520u;
    SET_GPR_U32(ctx, 31, 0x2DD528u);
    ctx->pc = 0x2DD524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD520u;
    // 0x2dd524: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD520u, 0x2DD528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD528u;
label_2dd528:
    // 0x2dd528: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd52c:
    // 0x2dd52c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd534: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD534u;
        // 0x2dd538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD53Cu;
    // 0x2dd53c: 0x0  nop
    ctx->pc = 0x2dd53cu;
    // NOP
    ctx->pc = 0x2dd540u;
}
