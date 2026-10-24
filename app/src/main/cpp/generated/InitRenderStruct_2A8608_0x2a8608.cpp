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

// Function: InitRenderStruct_2A8608
// Address: 0x2a8608 - 0x2a8718
void InitRenderStruct_2A8608_0x2a8608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitRenderStruct_2A8608_0x2a8608");
#endif

    switch (ctx->pc) {
        case 0x2a86dcu: goto label_2a86dc;
        case 0x2a8708u: goto label_2a8708;
        default: break;
    }

    ctx->pc = 0x2a8608u;

    // 0x2a8608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a860c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a860cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a8614: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8614u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8618: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2a8618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a861c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a8620: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2a8620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8624: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a8624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8628: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a8628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a862c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a862cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a8630: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2a8630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a8634: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2a8634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a8638: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2a8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a863c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2a863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8640: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a8640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a8644: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a8644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a8648: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a8648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a864c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a8650: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a8650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8654: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a8654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a8658: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a8658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a865c: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2a865cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a8660: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2a8660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8664: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2a8664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2a8668: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2a8668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2a866c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2a866cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8670: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x2a8670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8674: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2a8674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2a8678: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2a8678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a867c: 0xad480574  sw          $t0, 0x574($t2)
    ctx->pc = 0x2a867cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1396), GPR_U32(ctx, 8));
    // 0x2a8680: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x2a8680u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8684: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x2a8684u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8688: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x2a8688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a868c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2a868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2a8690: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8690u;
    {
        const bool branch_taken_0x2a8690 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8690u;
        // 0x2a8694: 0xa5470570  sh          $a3, 0x570($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 1392), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8690) {
            ctx->pc = 0x2A86E4u;
            goto label_2a86e4;
        }
    }
    ctx->pc = 0x2A8698u;
    // 0x2a8698: 0x1140000a  beqz        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x2A8698u;
    {
        const bool branch_taken_0x2a8698 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8698u;
        // 0x2a869c: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8698) {
            ctx->pc = 0x2A86C4u;
            goto label_2a86c4;
        }
    }
    ctx->pc = 0x2A86A0u;
    // 0x2a86a0: 0x95420434  lhu         $v0, 0x434($t2)
    ctx->pc = 0x2a86a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 1076)));
    // 0x2a86a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a86a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a86a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A86A8u;
    {
        const bool branch_taken_0x2a86a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86A8u;
        // 0x2a86ac: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86a8) {
            ctx->pc = 0x2A86C4u;
            goto label_2a86c4;
        }
    }
    ctx->pc = 0x2A86B0u;
    // 0x2a86b0: 0xc5400114  lwc1        $f0, 0x114($t2)
    ctx->pc = 0x2a86b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a86b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2a86b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2a86b8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2a86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2a86bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a86bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a86c0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2a86c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a86c4:
    // 0x2a86c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a86c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a86c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86cc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2a86ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86d0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a86d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86d4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2A86D4u;
    SET_GPR_U32(ctx, 31, 0x2A86DCu);
    ctx->pc = 0x2A86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86D4u;
    // 0x2a86d8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2A86D4u, 0x2A86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86DCu;
label_2a86dc:
    // 0x2a86dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A86DCu;
    {
        const bool branch_taken_0x2a86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86DCu;
        // 0x2a86e0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86dc) {
            ctx->pc = 0x2A870Cu;
            goto label_2a870c;
        }
    }
    ctx->pc = 0x2A86E4u;
label_2a86e4:
    // 0x2a86e4: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A86E4u;
    {
        const bool branch_taken_0x2a86e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86E4u;
        // 0x2a86e8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86e4) {
            ctx->pc = 0x2A86F4u;
            goto label_2a86f4;
        }
    }
    ctx->pc = 0x2A86ECu;
    // 0x2a86ec: 0xc5400114  lwc1        $f0, 0x114($t2)
    ctx->pc = 0x2a86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a86f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a86f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a86f4:
    // 0x2a86f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a86f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86f8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2a86f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86fc: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2a86fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8700: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2A8700u;
    SET_GPR_U32(ctx, 31, 0x2A8708u);
    ctx->pc = 0x2A8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8700u;
    // 0x2a8704: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2A8700u, 0x2A8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8708u;
label_2a8708:
    // 0x2a8708: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a8708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a870c:
    // 0x2a870c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A870Cu;
        // 0x2a8710: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8714u;
    // 0x2a8714: 0x0  nop
    ctx->pc = 0x2a8714u;
    // NOP
    ctx->pc = 0x2a8718u;
}
