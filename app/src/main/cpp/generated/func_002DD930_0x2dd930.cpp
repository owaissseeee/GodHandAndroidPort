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

// Function: func_002DD930
// Address: 0x2dd930 - 0x2dd9f0
void func_002DD930_0x2dd930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD930_0x2dd930");
#endif

    switch (ctx->pc) {
        case 0x2dd948u: goto label_2dd948;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd988u: goto label_2dd988;
        case 0x2dd9c8u: goto label_2dd9c8;
        case 0x2dd9d8u: goto label_2dd9d8;
        default: break;
    }

    ctx->pc = 0x2dd930u;

    // 0x2dd930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd934: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd93c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd940: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD940u;
    SET_GPR_U32(ctx, 31, 0x2DD948u);
    ctx->pc = 0x2DD944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD940u;
    // 0x2dd944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD940u, 0x2DD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD948u;
label_2dd948:
    // 0x2dd948: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD948u;
    {
        const bool branch_taken_0x2dd948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD948u;
        // 0x2dd94c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd948) {
            ctx->pc = 0x2DD9D8u;
            goto label_2dd9d8;
        }
    }
    ctx->pc = 0x2DD950u;
    // 0x2dd950: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd954: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD954u;
    {
        const bool branch_taken_0x2dd954 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd954) {
            ctx->pc = 0x2DD958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD954u;
            // 0x2dd958: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9DCu;
            goto label_2dd9dc;
        }
    }
    ctx->pc = 0x2DD95Cu;
    // 0x2dd95c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD95Cu;
    SET_GPR_U32(ctx, 31, 0x2DD964u);
    ctx->pc = 0x2DD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD95Cu;
    // 0x2dd960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD95Cu, 0x2DD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD964u;
    {
        const bool branch_taken_0x2dd964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd964) {
            ctx->pc = 0x2DD968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD964u;
            // 0x2dd968: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9DCu;
            goto label_2dd9dc;
        }
    }
    ctx->pc = 0x2DD96Cu;
    // 0x2dd96c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd970: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd974: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd978: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD978u;
    {
        const bool branch_taken_0x2dd978 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd978) {
            ctx->pc = 0x2DD97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD978u;
            // 0x2dd97c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9DCu;
            goto label_2dd9dc;
        }
    }
    ctx->pc = 0x2DD980u;
    // 0x2dd980: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD980u;
    SET_GPR_U32(ctx, 31, 0x2DD988u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD980u, 0x2DD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD988u;
label_2dd988:
    // 0x2dd988: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD988u;
    {
        const bool branch_taken_0x2dd988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd988) {
            ctx->pc = 0x2DD98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD988u;
            // 0x2dd98c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9DCu;
            goto label_2dd9dc;
        }
    }
    ctx->pc = 0x2DD990u;
    // 0x2dd990: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd99c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x2dd99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2dd9a0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd9a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd9a8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd9ac: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd9b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9b8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd9bc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd9c0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD9C0u;
    SET_GPR_U32(ctx, 31, 0x2DD9C8u);
    ctx->pc = 0x2DD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9C0u;
    // 0x2dd9c4: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD9C0u, 0x2DD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9C8u;
label_2dd9c8:
    // 0x2dd9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9d0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD9D0u;
    SET_GPR_U32(ctx, 31, 0x2DD9D8u);
    ctx->pc = 0x2DD9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9D0u;
    // 0x2dd9d4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD9D0u, 0x2DD9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9D8u;
label_2dd9d8:
    // 0x2dd9d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd9dc:
    // 0x2dd9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9E4u;
        // 0x2dd9e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD9ECu;
    // 0x2dd9ec: 0x0  nop
    ctx->pc = 0x2dd9ecu;
    // NOP
    ctx->pc = 0x2dd9f0u;
}
