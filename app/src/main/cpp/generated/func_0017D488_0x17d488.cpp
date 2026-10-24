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

// Function: func_0017D488
// Address: 0x17d488 - 0x17d560
void func_0017D488_0x17d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D488_0x17d488");
#endif

    switch (ctx->pc) {
        case 0x17d4a0u: goto label_17d4a0;
        case 0x17d524u: goto label_17d524;
        case 0x17d538u: goto label_17d538;
        default: break;
    }

    ctx->pc = 0x17d488u;

    // 0x17d488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d48c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17d48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17d490: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17d494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d498: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17D498u;
    SET_GPR_U32(ctx, 31, 0x17D4A0u);
    ctx->pc = 0x17D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D498u;
    // 0x17d49c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17D498u, 0x17D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4A0u;
label_17d4a0:
    // 0x17d4a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17d4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d4a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d4a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x17d4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17d4ac: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x17d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x17d4b0: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x17d4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x17d4b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d4b8: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x17d4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x17d4bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x17d4bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x17d4c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d4c4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17d4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17d4c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17d4c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17d4cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17d4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17d4d0: 0x3c01bf60  lui         $at, 0xBF60
    ctx->pc = 0x17d4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48992 << 16));
    // 0x17d4d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17d4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17d4d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d4dc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17d4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17d4e0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17d4e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17d4e4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x17d4e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17d4e8: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x17d4e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17d4ec: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x17d4ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17d4f0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x17d4f4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x17d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17d4f8: 0xa6110548  sh          $s1, 0x548($s0)
    ctx->pc = 0x17d4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 17));
    // 0x17d4fc: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D4FCu;
    {
        const bool branch_taken_0x17d4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x17D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4FCu;
        // 0x17d500: 0xa611054a  sh          $s1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4fc) {
            ctx->pc = 0x17D51Cu;
            goto label_17d51c;
        }
    }
    ctx->pc = 0x17D504u;
    // 0x17d504: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x17d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d508: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d50c: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x17d50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x17d510: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17d510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17d514: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d518: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17d51c:
    // 0x17d51c: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x17D51Cu;
    SET_GPR_U32(ctx, 31, 0x17D524u);
    ctx->pc = 0x17D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D51Cu;
    // 0x17d520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x17D51Cu, 0x17D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D524u;
label_17d524:
    // 0x17d524: 0xa2110624  sb          $s1, 0x624($s0)
    ctx->pc = 0x17d524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 17));
    // 0x17d528: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x17d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x17d52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d530: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x17D530u;
    SET_GPR_U32(ctx, 31, 0x17D538u);
    ctx->pc = 0x17D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D530u;
    // 0x17d534: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x17D530u, 0x17D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D538u;
label_17d538:
    // 0x17d538: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x17d538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x17d53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d540: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17d540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d544: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17d544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x17d548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d54c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x17d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x17d550: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17d550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d554: 0x3e00008  jr          $ra
    ctx->pc = 0x17D554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D554u;
        // 0x17d558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D55Cu;
    // 0x17d55c: 0x0  nop
    ctx->pc = 0x17d55cu;
    // NOP
    ctx->pc = 0x17d560u;
}
