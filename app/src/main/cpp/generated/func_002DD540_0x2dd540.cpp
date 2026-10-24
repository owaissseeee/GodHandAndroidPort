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

// Function: func_002DD540
// Address: 0x2dd540 - 0x2dd600
void func_002DD540_0x2dd540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD540_0x2dd540");
#endif

    switch (ctx->pc) {
        case 0x2dd558u: goto label_2dd558;
        case 0x2dd574u: goto label_2dd574;
        case 0x2dd598u: goto label_2dd598;
        case 0x2dd5d8u: goto label_2dd5d8;
        case 0x2dd5e8u: goto label_2dd5e8;
        default: break;
    }

    ctx->pc = 0x2dd540u;

    // 0x2dd540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd544: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd550: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD550u;
    SET_GPR_U32(ctx, 31, 0x2DD558u);
    ctx->pc = 0x2DD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD550u;
    // 0x2dd554: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD550u, 0x2DD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD558u;
label_2dd558:
    // 0x2dd558: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD558u;
    {
        const bool branch_taken_0x2dd558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD558u;
        // 0x2dd55c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd558) {
            ctx->pc = 0x2DD5E8u;
            goto label_2dd5e8;
        }
    }
    ctx->pc = 0x2DD560u;
    // 0x2dd560: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd564: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD564u;
    {
        const bool branch_taken_0x2dd564 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd564) {
            ctx->pc = 0x2DD568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD564u;
            // 0x2dd568: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD56Cu;
    // 0x2dd56c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD56Cu;
    SET_GPR_U32(ctx, 31, 0x2DD574u);
    ctx->pc = 0x2DD570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD56Cu;
    // 0x2dd570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD56Cu, 0x2DD574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD574u;
label_2dd574:
    // 0x2dd574: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD574u;
    {
        const bool branch_taken_0x2dd574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd574) {
            ctx->pc = 0x2DD578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD574u;
            // 0x2dd578: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD57Cu;
    // 0x2dd57c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd580: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd584: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd588: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD588u;
    {
        const bool branch_taken_0x2dd588 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd588) {
            ctx->pc = 0x2DD58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD588u;
            // 0x2dd58c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD590u;
    // 0x2dd590: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD590u;
    SET_GPR_U32(ctx, 31, 0x2DD598u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD590u, 0x2DD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD598u;
label_2dd598:
    // 0x2dd598: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD598u;
    {
        const bool branch_taken_0x2dd598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd598) {
            ctx->pc = 0x2DD59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD598u;
            // 0x2dd59c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD5A0u;
    // 0x2dd5a0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd5ac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2dd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dd5b0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd5b4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd5b8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd5bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd5c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5c8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd5cc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd5d0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD5D0u;
    SET_GPR_U32(ctx, 31, 0x2DD5D8u);
    ctx->pc = 0x2DD5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5D0u;
    // 0x2dd5d4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD5D0u, 0x2DD5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5D8u;
label_2dd5d8:
    // 0x2dd5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5e0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD5E0u;
    SET_GPR_U32(ctx, 31, 0x2DD5E8u);
    ctx->pc = 0x2DD5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5E0u;
    // 0x2dd5e4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD5E0u, 0x2DD5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5E8u;
label_2dd5e8:
    // 0x2dd5e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd5ec:
    // 0x2dd5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5F4u;
        // 0x2dd5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD5FCu;
    // 0x2dd5fc: 0x0  nop
    ctx->pc = 0x2dd5fcu;
    // NOP
    ctx->pc = 0x2dd600u;
}
