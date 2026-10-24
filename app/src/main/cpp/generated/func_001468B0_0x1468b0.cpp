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

// Function: func_001468B0
// Address: 0x1468b0 - 0x146978
void func_001468B0_0x1468b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001468B0_0x1468b0");
#endif

    switch (ctx->pc) {
        case 0x1468e0u: goto label_1468e0;
        case 0x1468e8u: goto label_1468e8;
        case 0x146908u: goto label_146908;
        case 0x146920u: goto label_146920;
        case 0x146928u: goto label_146928;
        case 0x146948u: goto label_146948;
        default: break;
    }

    ctx->pc = 0x1468b0u;

    // 0x1468b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1468b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1468b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1468b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1468b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1468bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1468bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1468c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1468c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1468c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1468c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1468cc: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x1468ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x1468d0: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x1468d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x1468d4: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x1468d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x1468d8: 0xa220007c  sb          $zero, 0x7C($s1)
    ctx->pc = 0x1468d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1468dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1468dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1468e0:
    // 0x1468e0: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x1468E0u;
    SET_GPR_U32(ctx, 31, 0x1468E8u);
    ctx->pc = 0x1468E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1468E0u;
    // 0x1468e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x1468E0u, 0x1468E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468E8u;
label_1468e8:
    // 0x1468e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1468ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1468ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1468f0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1468f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1468f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1468F4u;
    {
        const bool branch_taken_0x1468f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1468F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468F4u;
        // 0x1468f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468f4) {
            ctx->pc = 0x1468E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468e0;
        }
    }
    ctx->pc = 0x1468FCu;
    // 0x1468fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1468fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146900: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x146900u;
    SET_GPR_U32(ctx, 31, 0x146908u);
    ctx->pc = 0x146904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146900u;
    // 0x146904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x146900u, 0x146908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146908u;
label_146908:
    // 0x146908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14690c: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x14690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x146910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146914: 0x263200a0  addiu       $s2, $s1, 0xA0
    ctx->pc = 0x146914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x146918: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x146918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x14691c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146920:
    // 0x146920: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x146920u;
    SET_GPR_U32(ctx, 31, 0x146928u);
    ctx->pc = 0x146924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146920u;
    // 0x146924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x146920u, 0x146928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146928u;
label_146928:
    // 0x146928: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14692c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14692cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x146930: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x146930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146934: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146934u;
    {
        const bool branch_taken_0x146934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146934u;
        // 0x146938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146934) {
            ctx->pc = 0x146920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146920;
        }
    }
    ctx->pc = 0x14693Cu;
    // 0x14693c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146940: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x146940u;
    SET_GPR_U32(ctx, 31, 0x146948u);
    ctx->pc = 0x146944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146940u;
    // 0x146944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x146940u, 0x146948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146948u;
label_146948:
    // 0x146948: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x14694c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14694cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146950: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x146950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x146954: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x146954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146958: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x146958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x14695c: 0xa6230102  sh          $v1, 0x102($s1)
    ctx->pc = 0x14695cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 3));
    // 0x146960: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x146960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146964: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x146964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14696c: 0x3e00008  jr          $ra
    ctx->pc = 0x14696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14696Cu;
        // 0x146970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146974u;
    // 0x146974: 0x0  nop
    ctx->pc = 0x146974u;
    // NOP
    ctx->pc = 0x146978u;
}
