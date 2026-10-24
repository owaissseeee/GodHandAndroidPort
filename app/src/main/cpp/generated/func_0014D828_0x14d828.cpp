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

// Function: func_0014D828
// Address: 0x14d828 - 0x14dfd8
void func_0014D828_0x14d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014D828_0x14d828");
#endif

    switch (ctx->pc) {
        case 0x14d898u: goto label_14d898;
        case 0x14d8b8u: goto label_14d8b8;
        case 0x14d8ccu: goto label_14d8cc;
        case 0x14d8d8u: goto label_14d8d8;
        case 0x14d938u: goto label_14d938;
        case 0x14da30u: goto label_14da30;
        case 0x14da44u: goto label_14da44;
        case 0x14da70u: goto label_14da70;
        case 0x14dad0u: goto label_14dad0;
        case 0x14db9cu: goto label_14db9c;
        case 0x14dc14u: goto label_14dc14;
        case 0x14dc80u: goto label_14dc80;
        case 0x14dcd8u: goto label_14dcd8;
        case 0x14dd18u: goto label_14dd18;
        case 0x14dd30u: goto label_14dd30;
        case 0x14dd54u: goto label_14dd54;
        case 0x14dd7cu: goto label_14dd7c;
        case 0x14ddc0u: goto label_14ddc0;
        case 0x14de28u: goto label_14de28;
        case 0x14de48u: goto label_14de48;
        case 0x14de94u: goto label_14de94;
        case 0x14dea4u: goto label_14dea4;
        case 0x14dee8u: goto label_14dee8;
        case 0x14df24u: goto label_14df24;
        default: break;
    }

    ctx->pc = 0x14d828u;

    // 0x14d828: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x14d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x14d82c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x14d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x14d830: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x14d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x14d834: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x14d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x14d838: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x14d838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d83c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x14d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x14d840: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x14d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x14d844: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x14d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x14d848: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x14d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x14d84c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x14d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x14d850: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x14d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x14d854: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x14d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x14d858: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x14d858u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x14d85c: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x14d85cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x14d860: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x14d860u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x14d864: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x14d864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x14d868: 0x8ee20250  lw          $v0, 0x250($s7)
    ctx->pc = 0x14d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 592)));
    // 0x14d86c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14d870: 0x144001c8  bnez        $v0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x14D870u;
    {
        const bool branch_taken_0x14d870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D870u;
        // 0x14d874: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d870) {
            ctx->pc = 0x14DF94u;
            goto label_14df94;
        }
    }
    ctx->pc = 0x14D878u;
    // 0x14d878: 0x26e202cd  addiu       $v0, $s7, 0x2CD
    ctx->pc = 0x14d878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 717));
    // 0x14d87c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x14d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d880: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14d880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14d884: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14d888: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x14d888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x14d88c: 0x26e202cf  addiu       $v0, $s7, 0x2CF
    ctx->pc = 0x14d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 719));
    // 0x14d890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d894: 0x0  nop
    ctx->pc = 0x14d894u;
    // NOP
label_14d898:
    // 0x14d898: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x14d898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14d89c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d8a0: 0x0  nop
    ctx->pc = 0x14d8a0u;
    // NOP
    // 0x14d8a4: 0x0  nop
    ctx->pc = 0x14d8a4u;
    // NOP
    // 0x14d8a8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D8A8u;
    {
        const bool branch_taken_0x14d8a8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x14D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8A8u;
        // 0x14d8ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8a8) {
            ctx->pc = 0x14D898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d898;
        }
    }
    ctx->pc = 0x14D8B0u;
    // 0x14d8b0: 0xc0b63fe  jal         func_2D8FF8
    ctx->pc = 0x14D8B0u;
    SET_GPR_U32(ctx, 31, 0x14D8B8u);
    ctx->pc = 0x14D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8B0u;
    // 0x14d8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FF8u, 0x14D8B0u, 0x14D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8B8u;
label_14d8b8:
    // 0x14d8b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8bc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x14d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x14d8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x14D8C4u;
    SET_GPR_U32(ctx, 31, 0x14D8CCu);
    ctx->pc = 0x14D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8C4u;
    // 0x14d8c8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x14D8C4u, 0x14D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8CCu;
label_14d8cc:
    // 0x14d8cc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14d8d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d8d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14d8d8:
    // 0x14d8d8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14d8dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d8e0: 0x0  nop
    ctx->pc = 0x14d8e0u;
    // NOP
    // 0x14d8e4: 0x0  nop
    ctx->pc = 0x14d8e4u;
    // NOP
    // 0x14d8e8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D8E8u;
    {
        const bool branch_taken_0x14d8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8E8u;
        // 0x14d8ec: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8e8) {
            ctx->pc = 0x14D8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d8d8;
        }
    }
    ctx->pc = 0x14D8F0u;
    // 0x14d8f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14d8f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14d8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14d8f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14d8fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d900: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14d900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14d904: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14d904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d908: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x14d908u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x14d90c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x14d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x14d910: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x14d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x14d914: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x14d914u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x14d918: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x14d918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x14d91c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14d91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d920: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14d920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x14d924: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x14d924u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14d928: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x14d928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x14d92c: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x14d92cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14d930: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x14D930u;
    {
        const bool branch_taken_0x14d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D930u;
        // 0x14d934: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d930) {
            ctx->pc = 0x14DCC0u;
            goto label_14dcc0;
        }
    }
    ctx->pc = 0x14D938u;
label_14d938:
    // 0x14d938: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D938u;
    {
        const bool branch_taken_0x14d938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d938) {
            ctx->pc = 0x14D93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D938u;
            // 0x14d93c: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D954u;
            goto label_14d954;
        }
    }
    ctx->pc = 0x14D940u;
    // 0x14d940: 0x92e302cc  lbu         $v1, 0x2CC($s7)
    ctx->pc = 0x14d940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 716)));
    // 0x14d944: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x14d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x14d948: 0x144300dc  bne         $v0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x14D948u;
    {
        const bool branch_taken_0x14d948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D948u;
        // 0x14d94c: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d948) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14D950u;
    // 0x14d950: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x14d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_14d954:
    // 0x14d954: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14d954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x14d958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d95c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D95Cu;
    {
        const bool branch_taken_0x14d95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d95c) {
            ctx->pc = 0x14D960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D95Cu;
            // 0x14d960: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D97Cu;
            goto label_14d97c;
        }
    }
    ctx->pc = 0x14D964u;
    // 0x14d964: 0x8ee202d0  lw          $v0, 0x2D0($s7)
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 720)));
    // 0x14d968: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d96c: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x14D96Cu;
    {
        const bool branch_taken_0x14d96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D96Cu;
        // 0x14d970: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d96c) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14D974u;
    // 0x14d974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D974u;
    {
        const bool branch_taken_0x14d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D974u;
        // 0x14d978: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d974) {
            ctx->pc = 0x14D988u;
            goto label_14d988;
        }
    }
    ctx->pc = 0x14D97Cu;
label_14d97c:
    // 0x14d97c: 0x145700cf  bne         $v0, $s7, . + 4 + (0xCF << 2)
    ctx->pc = 0x14D97Cu;
    {
        const bool branch_taken_0x14d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x14D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D97Cu;
        // 0x14d980: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d97c) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14D984u;
    // 0x14d984: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x14d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_14d988:
    // 0x14d988: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14d988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d98c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14d990: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x14d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14d994: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14d998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14d998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d99c: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x14D99Cu;
    {
        const bool branch_taken_0x14d99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d99c) {
            ctx->pc = 0x14D9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D99Cu;
            // 0x14d9a0: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DA74u;
            goto label_14da74;
        }
    }
    ctx->pc = 0x14D9A4u;
    // 0x14d9a4: 0x92e202b4  lbu         $v0, 0x2B4($s7)
    ctx->pc = 0x14d9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 692)));
    // 0x14d9a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D9A8u;
    {
        const bool branch_taken_0x14d9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9A8u;
        // 0x14d9ac: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9a8) {
            ctx->pc = 0x14D9BCu;
            goto label_14d9bc;
        }
    }
    ctx->pc = 0x14D9B0u;
    // 0x14d9b0: 0x8ee20278  lw          $v0, 0x278($s7)
    ctx->pc = 0x14d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 632)));
    // 0x14d9b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14D9B4u;
    {
        const bool branch_taken_0x14d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9B4u;
        // 0x14d9b8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9b4) {
            ctx->pc = 0x14D9C0u;
            goto label_14d9c0;
        }
    }
    ctx->pc = 0x14D9BCu;
label_14d9bc:
    // 0x14d9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d9c0:
    // 0x14d9c0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14d9c4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14d9c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14d9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14d9cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14D9CCu;
    {
        const bool branch_taken_0x14d9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9CCu;
        // 0x14d9d0: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9cc) {
            ctx->pc = 0x14DA60u;
            goto label_14da60;
        }
    }
    ctx->pc = 0x14D9D4u;
    // 0x14d9d4: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946800)));
    // 0x14d9d8: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x14d9dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14d9dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d9e0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x14d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14d9e4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D9E4u;
    {
        const bool branch_taken_0x14d9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9E4u;
        // 0x14d9e8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9e4) {
            ctx->pc = 0x14DA0Cu;
            goto label_14da0c;
        }
    }
    ctx->pc = 0x14D9ECu;
    // 0x14d9ec: 0xc4a000b8  lwc1        $f0, 0xB8($a1)
    ctx->pc = 0x14d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9f0: 0xc4a100b0  lwc1        $f1, 0xB0($a1)
    ctx->pc = 0x14d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d9f4: 0xc4a200b4  lwc1        $f2, 0xB4($a1)
    ctx->pc = 0x14d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d9f8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x14d9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14d9fc: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x14d9fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x14da00: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x14da00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x14da04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA04u;
    {
        const bool branch_taken_0x14da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA04u;
        // 0x14da08: 0xe6d6000c  swc1        $f22, 0xC($s6) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da04) {
            ctx->pc = 0x14DA14u;
            goto label_14da14;
        }
    }
    ctx->pc = 0x14DA0Cu;
label_14da0c:
    // 0x14da0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14da10: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
label_14da14:
    // 0x14da14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14da14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14da18: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x14da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14da1c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14da20: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x14da20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x14da24: 0x2484a940  addiu       $a0, $a0, -0x56C0
    ctx->pc = 0x14da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945088));
    // 0x14da28: 0xc051dca  jal         func_147728
    ctx->pc = 0x14DA28u;
    SET_GPR_U32(ctx, 31, 0x14DA30u);
    ctx->pc = 0x14DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA28u;
    // 0x14da2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x14DA28u, 0x14DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA30u;
label_14da30:
    // 0x14da30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14da34: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x14da34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x14da38: 0x24a5a940  addiu       $a1, $a1, -0x56C0
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945088));
    // 0x14da3c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x14DA3Cu;
    SET_GPR_U32(ctx, 31, 0x14DA44u);
    ctx->pc = 0x14DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA3Cu;
    // 0x14da40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x14DA3Cu, 0x14DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA44u;
label_14da44:
    // 0x14da44: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14da48: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14da48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14da4c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x14da4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14da50: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14da50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14da54: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14da58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DA58u;
    {
        const bool branch_taken_0x14da58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA58u;
        // 0x14da5c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da58) {
            ctx->pc = 0x14DA74u;
            goto label_14da74;
        }
    }
    ctx->pc = 0x14DA60u;
label_14da60:
    // 0x14da60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14da64: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x14da64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x14da68: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x14DA68u;
    SET_GPR_U32(ctx, 31, 0x14DA70u);
    ctx->pc = 0x14DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA68u;
    // 0x14da6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x14DA68u, 0x14DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA70u;
label_14da70:
    // 0x14da70: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14da70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14da74:
    // 0x14da74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14da78: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14da78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14da7c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14DA7Cu;
    {
        const bool branch_taken_0x14da7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA7Cu;
        // 0x14da80: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da7c) {
            ctx->pc = 0x14DB00u;
            goto label_14db00;
        }
    }
    ctx->pc = 0x14DA84u;
    // 0x14da84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA84u;
    {
        const bool branch_taken_0x14da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA84u;
        // 0x14da88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da84) {
            ctx->pc = 0x14DA9Cu;
            goto label_14da9c;
        }
    }
    ctx->pc = 0x14DA8Cu;
    // 0x14da8c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14DA8Cu;
    {
        const bool branch_taken_0x14da8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA8Cu;
        // 0x14da90: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da8c) {
            ctx->pc = 0x14DB10u;
            goto label_14db10;
        }
    }
    ctx->pc = 0x14DA94u;
    // 0x14da94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x14DA94u;
    {
        const bool branch_taken_0x14da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA94u;
        // 0x14da98: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da94) {
            ctx->pc = 0x14DB14u;
            goto label_14db14;
        }
    }
    ctx->pc = 0x14DA9Cu;
label_14da9c:
    // 0x14da9c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14DA9Cu;
    {
        const bool branch_taken_0x14da9c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x14da9c) {
            ctx->pc = 0x14DB08u;
            goto label_14db08;
        }
    }
    ctx->pc = 0x14DAA4u;
    // 0x14daa4: 0x8ee200f0  lw          $v0, 0xF0($s7)
    ctx->pc = 0x14daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
    // 0x14daa8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x14daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14daac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14daacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dab0: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x14dab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14dab4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14dab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14dab8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x14dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14dabc: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x14dac0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14dac0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dac4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x14dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14dac8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x14DAC8u;
    SET_GPR_U32(ctx, 31, 0x14DAD0u);
    ctx->pc = 0x14DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAC8u;
    // 0x14dacc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x14DAC8u, 0x14DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAD0u;
label_14dad0:
    // 0x14dad0: 0x0  nop
    ctx->pc = 0x14dad0u;
    // NOP
    // 0x14dad4: 0x0  nop
    ctx->pc = 0x14dad4u;
    // NOP
    // 0x14dad8: 0x460000c4  c1          0xC4
    ctx->pc = 0x14dad8u;
    ctx->f[3] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x14dadc: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x14dadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dae0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x14dae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14dae4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14dae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14dae8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14dae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14daec: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x14daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14daf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14daf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14daf4: 0x4601b043  div.s       $f1, $f22, $f1
    ctx->pc = 0x14daf4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[1]);
    // 0x14daf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14DAF8u;
    {
        const bool branch_taken_0x14daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAF8u;
        // 0x14dafc: 0x46000880  add.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14daf8) {
            ctx->pc = 0x14DB0Cu;
            goto label_14db0c;
        }
    }
    ctx->pc = 0x14DB00u;
label_14db00:
    // 0x14db00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14DB00u;
    {
        const bool branch_taken_0x14db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB00u;
        // 0x14db04: 0xc7c2ea88  lwc1        $f2, -0x1578($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db00) {
            ctx->pc = 0x14DB0Cu;
            goto label_14db0c;
        }
    }
    ctx->pc = 0x14DB08u;
label_14db08:
    // 0x14db08: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14db08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14db0c:
    // 0x14db0c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_14db10:
    // 0x14db10: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_14db14:
    // 0x14db14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14db18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14DB18u;
    {
        const bool branch_taken_0x14db18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14db18) {
            ctx->pc = 0x14DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DB18u;
            // 0x14db1c: 0xc7c2ea88  lwc1        $f2, -0x1578($fp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294961800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB20u;
            goto label_14db20;
        }
    }
    ctx->pc = 0x14DB20u;
label_14db20:
    // 0x14db20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x14db24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14db24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14db28: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14DB28u;
    {
        const bool branch_taken_0x14db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB28u;
        // 0x14db2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db28) {
            ctx->pc = 0x14DBA4u;
            goto label_14dba4;
        }
    }
    ctx->pc = 0x14DB30u;
    // 0x14db30: 0x8ee20254  lw          $v0, 0x254($s7)
    ctx->pc = 0x14db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 596)));
    // 0x14db34: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14db34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14db38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14db3c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x14DB3Cu;
    {
        const bool branch_taken_0x14db3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB3Cu;
        // 0x14db40: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db3c) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DB44u;
    // 0x14db44: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x14db44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14db48: 0x0  nop
    ctx->pc = 0x14db48u;
    // NOP
    // 0x14db4c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x14DB4Cu;
    {
        const bool branch_taken_0x14db4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB4Cu;
        // 0x14db50: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db4c) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DB54u;
    // 0x14db54: 0x34426200  ori         $v0, $v0, 0x6200
    ctx->pc = 0x14db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25088);
    // 0x14db58: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14db5c: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DB5Cu;
    {
        const bool branch_taken_0x14db5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x14DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB5Cu;
        // 0x14db60: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db5c) {
            ctx->pc = 0x14DB7Cu;
            goto label_14db7c;
        }
    }
    ctx->pc = 0x14DB64u;
    // 0x14db64: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x14db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db68: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x14db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14db6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14db70: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x14db70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14db74: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x14db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14db78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14db7c:
    // 0x14db7c: 0xafb00094  sw          $s0, 0x94($sp)
    ctx->pc = 0x14db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 16));
    // 0x14db80: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14db80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14db84: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14db88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14db8c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB8Cu;
        // 0x14db90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DB94u;
    // 0x14db94: 0xc0b6406  jal         func_2D9018
    ctx->pc = 0x14DB94u;
    SET_GPR_U32(ctx, 31, 0x14DB9Cu);
    ctx->pc = 0x14DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB94u;
    // 0x14db98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9018u, 0x14DB94u, 0x14DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB9Cu;
label_14db9c:
    // 0x14db9c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x14DB9Cu;
    {
        const bool branch_taken_0x14db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB9Cu;
        // 0x14dba0: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db9c) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DBA4u;
label_14dba4:
    // 0x14dba4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14dba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14dbac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14dbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14dbb0: 0x1444001a  bne         $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14DBB0u;
    {
        const bool branch_taken_0x14dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14dbb0) {
            ctx->pc = 0x14DC1Cu;
            goto label_14dc1c;
        }
    }
    ctx->pc = 0x14DBB8u;
    // 0x14dbb8: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x14dbb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dbbc: 0x0  nop
    ctx->pc = 0x14dbbcu;
    // NOP
    // 0x14dbc0: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x14DBC0u;
    {
        const bool branch_taken_0x14dbc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBC0u;
        // 0x14dbc4: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbc0) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DBC8u;
    // 0x14dbc8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14dbcc: 0x34426220  ori         $v0, $v0, 0x6220
    ctx->pc = 0x14dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25120);
    // 0x14dbd0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14dbd4: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DBD4u;
    {
        const bool branch_taken_0x14dbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x14DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBD4u;
        // 0x14dbd8: 0x460015c6  mov.s       $f23, $f2 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbd4) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBDCu;
    // 0x14dbdc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x14dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dbe0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x14dbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dbe4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14dbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14dbe8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x14dbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14dbec: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x14dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dbf0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14dbf4:
    // 0x14dbf4: 0xafb0009c  sw          $s0, 0x9C($sp)
    ctx->pc = 0x14dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 16));
    // 0x14dbf8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x14dbfc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14dc00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14dc04: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14DC04u;
    {
        const bool branch_taken_0x14dc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC04u;
        // 0x14dc08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc04) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DC0Cu;
    // 0x14dc0c: 0xc0b6406  jal         func_2D9018
    ctx->pc = 0x14DC0Cu;
    SET_GPR_U32(ctx, 31, 0x14DC14u);
    ctx->pc = 0x14DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC0Cu;
    // 0x14dc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9018u, 0x14DC0Cu, 0x14DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC14u;
label_14dc14:
    // 0x14dc14: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14DC14u;
    {
        const bool branch_taken_0x14dc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC14u;
        // 0x14dc18: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc14) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DC1Cu;
label_14dc1c:
    // 0x14dc1c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x14dc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dc20: 0x0  nop
    ctx->pc = 0x14dc20u;
    // NOP
    // 0x14dc24: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x14DC24u;
    {
        const bool branch_taken_0x14dc24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC24u;
        // 0x14dc28: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc24) {
            ctx->pc = 0x14DCBCu;
            goto label_14dcbc;
        }
    }
    ctx->pc = 0x14DC2Cu;
    // 0x14dc2c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14dc30: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x14dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x14dc34: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x14dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x14dc38: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x14dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x14dc3c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x14dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x14dc40: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x14dc44: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x14dc44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14dc48: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14dc4c: 0x10740007  beq         $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DC4Cu;
    {
        const bool branch_taken_0x14dc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x14DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC4Cu;
        // 0x14dc50: 0xa0530000  sb          $s3, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc4c) {
            ctx->pc = 0x14DC6Cu;
            goto label_14dc6c;
        }
    }
    ctx->pc = 0x14DC54u;
    // 0x14dc54: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x14dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14dc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14dc5c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x14dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dc60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x14dc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14dc64: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x14dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc68: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x14dc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_14dc6c:
    // 0x14dc6c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x14dc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14dc70: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x14dc70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x14dc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14dc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc78: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14dc7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14dc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14dc80:
    // 0x14dc80: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14dc84: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x14dc84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dc88: 0x50670007  beql        $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DC88u;
    {
        const bool branch_taken_0x14dc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x14dc88) {
            ctx->pc = 0x14DC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DC88u;
            // 0x14dc8c: 0xc4940000  lwc1        $f20, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DCA8u;
            goto label_14dca8;
        }
    }
    ctx->pc = 0x14DC90u;
    // 0x14dc90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x14dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dc94: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x14dc94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14dc98: 0x0  nop
    ctx->pc = 0x14dc98u;
    // NOP
    // 0x14dc9c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x14DC9Cu;
    {
        const bool branch_taken_0x14dc9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14dc9c) {
            ctx->pc = 0x14DCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DC9Cu;
            // 0x14dca0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DCB0u;
            goto label_14dcb0;
        }
    }
    ctx->pc = 0x14DCA4u;
    // 0x14dca4: 0xc4940000  lwc1        $f20, 0x0($a0)
    ctx->pc = 0x14dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14dca8:
    // 0x14dca8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14dca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14dcb0:
    // 0x14dcb0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x14dcb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14dcb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14DCB4u;
    {
        const bool branch_taken_0x14dcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCB4u;
        // 0x14dcb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcb4) {
            ctx->pc = 0x14DC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DCBCu;
label_14dcbc:
    // 0x14dcbc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x14dcbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14dcc0:
    // 0x14dcc0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x14dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14dcc4: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x14dcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dcc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DCC8u;
    {
        const bool branch_taken_0x14dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCC8u;
        // 0x14dccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcc8) {
            ctx->pc = 0x14DCECu;
            goto label_14dcec;
        }
    }
    ctx->pc = 0x14DCD0u;
    // 0x14dcd0: 0xc0b6400  jal         func_2D9000
    ctx->pc = 0x14DCD0u;
    SET_GPR_U32(ctx, 31, 0x14DCD8u);
    ctx->pc = 0x14DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCD0u;
    // 0x14dcd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9000u, 0x14DCD0u, 0x14DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCD8u;
label_14dcd8:
    // 0x14dcd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14dcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcdc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14dce0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x14dce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14dce4: 0x5443ff14  bnel        $v0, $v1, . + 4 + (-0xEC << 2)
    ctx->pc = 0x14DCE4u;
    {
        const bool branch_taken_0x14dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14dce4) {
            ctx->pc = 0x14DCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DCE4u;
            // 0x14dce8: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d938;
        }
    }
    ctx->pc = 0x14DCECu;
label_14dcec:
    // 0x14dcec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14dcf0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14dcf4: 0x344261d0  ori         $v0, $v0, 0x61D0
    ctx->pc = 0x14dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25040);
    // 0x14dcf8: 0x346361a0  ori         $v1, $v1, 0x61A0
    ctx->pc = 0x14dcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24992);
    // 0x14dcfc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x14dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x14dd00: 0x242b021  addu        $s6, $s2, $v0
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14dd04: 0x8fb300ac  lw          $s3, 0xAC($sp)
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14dd08: 0x243a821  addu        $s5, $s2, $v1
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14dd0c: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x14dd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14dd10: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x14dd10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd14: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14dd18:
    // 0x14dd18: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14dd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dd1c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x14dd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14dd20: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14DD20u;
    {
        const bool branch_taken_0x14dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD20u;
        // 0x14dd24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd20) {
            ctx->pc = 0x14DD8Cu;
            goto label_14dd8c;
        }
    }
    ctx->pc = 0x14DD28u;
    // 0x14dd28: 0xc0b6400  jal         func_2D9000
    ctx->pc = 0x14DD28u;
    SET_GPR_U32(ctx, 31, 0x14DD30u);
    ctx->pc = 0x14DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD28u;
    // 0x14dd2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9000u, 0x14DD28u, 0x14DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD30u;
label_14dd30:
    // 0x14dd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14dd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd34: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14dd38: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14dd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14dd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14dd40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DD40u;
    {
        const bool branch_taken_0x14dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD40u;
        // 0x14dd44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd40) {
            ctx->pc = 0x14DD58u;
            goto label_14dd58;
        }
    }
    ctx->pc = 0x14DD48u;
    // 0x14dd48: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x14dd48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dd4c: 0xc0b6406  jal         func_2D9018
    ctx->pc = 0x14DD4Cu;
    SET_GPR_U32(ctx, 31, 0x14DD54u);
    ctx->pc = 0x14DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD4Cu;
    // 0x14dd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9018u, 0x14DD4Cu, 0x14DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD54u;
label_14dd54:
    // 0x14dd54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14dd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14dd58:
    // 0x14dd58: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x14dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14dd5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd60: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x14dd60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd64: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14dd64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14dd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd70: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x14dd70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd74: 0xc0537f6  jal         func_14DFD8
    ctx->pc = 0x14DD74u;
    SET_GPR_U32(ctx, 31, 0x14DD7Cu);
    ctx->pc = 0x14DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD74u;
    // 0x14dd78: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFD8u, 0x14DD74u, 0x14DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD7Cu;
label_14dd7c:
    // 0x14dd7c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x14dd7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x14dd80: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x14dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14dd84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14dd88: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x14dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_14dd8c:
    // 0x14dd8c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14dd8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x14dd90: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x14dd94: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x14dd94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x14dd98: 0x7c1ffdf  bgez        $fp, . + 4 + (-0x21 << 2)
    ctx->pc = 0x14DD98u;
    {
        const bool branch_taken_0x14dd98 = (GPR_S64(ctx, 30) >= 0);
        ctx->pc = 0x14DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD98u;
        // 0x14dd9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd98) {
            ctx->pc = 0x14DD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dd18;
        }
    }
    ctx->pc = 0x14DDA0u;
    // 0x14dda0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x14dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14dda4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x14dda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14dda8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DDA8u;
    {
        const bool branch_taken_0x14dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDA8u;
        // 0x14ddac: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dda8) {
            ctx->pc = 0x14DDDCu;
            goto label_14dddc;
        }
    }
    ctx->pc = 0x14DDB0u;
    // 0x14ddb0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x14ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14ddb4: 0x344261d0  ori         $v0, $v0, 0x61D0
    ctx->pc = 0x14ddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25040);
    // 0x14ddb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ddbc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14ddc0:
    // 0x14ddc0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14ddc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14ddc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x14ddcc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x14ddccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14ddd0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x14ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x14ddd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14DDD4u;
    {
        const bool branch_taken_0x14ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDD4u;
        // 0x14ddd8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddd4) {
            ctx->pc = 0x14DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ddc0;
        }
    }
    ctx->pc = 0x14DDDCu;
label_14dddc:
    // 0x14dddc: 0x8ee20254  lw          $v0, 0x254($s7)
    ctx->pc = 0x14dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 596)));
    // 0x14dde0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14dde4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14dde8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x14DDE8u;
    {
        const bool branch_taken_0x14dde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDE8u;
        // 0x14ddec: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dde8) {
            ctx->pc = 0x14DEE8u;
            goto label_14dee8;
        }
    }
    ctx->pc = 0x14DDF0u;
    // 0x14ddf0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14DDF0u;
    {
        const bool branch_taken_0x14ddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDF0u;
        // 0x14ddf4: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddf0) {
            ctx->pc = 0x14DE30u;
            goto label_14de30;
        }
    }
    ctx->pc = 0x14DDF8u;
    // 0x14ddf8: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x14ddf8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x14ddfc: 0x34e76200  ori         $a3, $a3, 0x6200
    ctx->pc = 0x14ddfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25088);
    // 0x14de00: 0x35296210  ori         $t1, $t1, 0x6210
    ctx->pc = 0x14de00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)25104);
    // 0x14de04: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x14de04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x14de08: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x14de08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14de0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14de0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14de10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14de14: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x14de14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x14de18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14de18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de1c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x14de1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de20: 0xc0537f6  jal         func_14DFD8
    ctx->pc = 0x14DE20u;
    SET_GPR_U32(ctx, 31, 0x14DE28u);
    ctx->pc = 0x14DE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE20u;
    // 0x14de24: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFD8u, 0x14DE20u, 0x14DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE28u;
label_14de28:
    // 0x14de28: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x14DE28u;
    {
        const bool branch_taken_0x14de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE28u;
        // 0x14de2c: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de28) {
            ctx->pc = 0x14DEECu;
            goto label_14deec;
        }
    }
    ctx->pc = 0x14DE30u;
label_14de30:
    // 0x14de30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14de34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14de34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14de38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14de38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14de3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de40: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x14de40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de44: 0x0  nop
    ctx->pc = 0x14de44u;
    // NOP
label_14de48:
    // 0x14de48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14de4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14de4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14de50: 0x0  nop
    ctx->pc = 0x14de50u;
    // NOP
    // 0x14de54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x14DE54u;
    {
        const bool branch_taken_0x14de54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14de54) {
            ctx->pc = 0x14DE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DE54u;
            // 0x14de58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DE68u;
            goto label_14de68;
        }
    }
    ctx->pc = 0x14DE5Cu;
    // 0x14de5c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14de5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14de60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14de60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14de68:
    // 0x14de68: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x14de68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14de6c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14DE6Cu;
    {
        const bool branch_taken_0x14de6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE6Cu;
        // 0x14de70: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de6c) {
            ctx->pc = 0x14DE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14de48;
        }
    }
    ctx->pc = 0x14DE74u;
    // 0x14de74: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x14de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14de78: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x14de78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14de7c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14de7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14de80: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14de84: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DE84u;
    {
        const bool branch_taken_0x14de84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE84u;
        // 0x14de88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de84) {
            ctx->pc = 0x14DE98u;
            goto label_14de98;
        }
    }
    ctx->pc = 0x14DE8Cu;
    // 0x14de8c: 0xc0b6406  jal         func_2D9018
    ctx->pc = 0x14DE8Cu;
    SET_GPR_U32(ctx, 31, 0x14DE94u);
    ctx->pc = 0x14DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE8Cu;
    // 0x14de90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9018u, 0x14DE8Cu, 0x14DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE94u;
label_14de94:
    // 0x14de94: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x14de94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_14de98:
    // 0x14de98: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x14de98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14de9c: 0xc0b6400  jal         func_2D9000
    ctx->pc = 0x14DE9Cu;
    SET_GPR_U32(ctx, 31, 0x14DEA4u);
    ctx->pc = 0x14DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE9Cu;
    // 0x14dea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9000u, 0x14DE9Cu, 0x14DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DEA4u;
label_14dea4:
    // 0x14dea4: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x14dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x14dea8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14deac: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x14deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x14deb0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x14deb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x14deb4: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x14deb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x14deb8: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x14deb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14debc: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x14debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14dec0: 0x35086200  ori         $t0, $t0, 0x6200
    ctx->pc = 0x14dec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25088);
    // 0x14dec4: 0x35296210  ori         $t1, $t1, 0x6210
    ctx->pc = 0x14dec4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)25104);
    // 0x14dec8: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x14dec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x14decc: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x14deccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14ded0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14ded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ded4: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x14ded4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x14ded8: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x14ded8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x14dedc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dee0: 0xc0537f6  jal         func_14DFD8
    ctx->pc = 0x14DEE0u;
    SET_GPR_U32(ctx, 31, 0x14DEE8u);
    ctx->pc = 0x14DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DEE0u;
    // 0x14dee4: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFD8u, 0x14DEE0u, 0x14DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DEE8u;
label_14dee8:
    // 0x14dee8: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x14dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_14deec:
    // 0x14deec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14DEECu;
    {
        const bool branch_taken_0x14deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEECu;
        // 0x14def0: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14deec) {
            ctx->pc = 0x14DF2Cu;
            goto label_14df2c;
        }
    }
    ctx->pc = 0x14DEF4u;
    // 0x14def4: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x14def4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x14def8: 0x34e76220  ori         $a3, $a3, 0x6220
    ctx->pc = 0x14def8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25120);
    // 0x14defc: 0x35296230  ori         $t1, $t1, 0x6230
    ctx->pc = 0x14defcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)25136);
    // 0x14df00: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x14df00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x14df04: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14df08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14df0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df10: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x14df10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x14df14: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x14df14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x14df18: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x14df18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df1c: 0xc0537f6  jal         func_14DFD8
    ctx->pc = 0x14DF1Cu;
    SET_GPR_U32(ctx, 31, 0x14DF24u);
    ctx->pc = 0x14DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF1Cu;
    // 0x14df20: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFD8u, 0x14DF1Cu, 0x14DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF24u;
label_14df24:
    // 0x14df24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14DF24u;
    {
        const bool branch_taken_0x14df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF24u;
        // 0x14df28: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df24) {
            ctx->pc = 0x14DF98u;
            goto label_14df98;
        }
    }
    ctx->pc = 0x14DF2Cu;
label_14df2c:
    // 0x14df2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14df30: 0x3c01be23  lui         $at, 0xBE23
    ctx->pc = 0x14df30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48675 << 16));
    // 0x14df34: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14df34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14df38: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14df38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14df3c: 0x34636220  ori         $v1, $v1, 0x6220
    ctx->pc = 0x14df3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25120);
    // 0x14df40: 0x3c01bf73  lui         $at, 0xBF73
    ctx->pc = 0x14df40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49011 << 16));
    // 0x14df44: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x14df44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x14df48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14df48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14df4c: 0x3c01be85  lui         $at, 0xBE85
    ctx->pc = 0x14df4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48773 << 16));
    // 0x14df50: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x14df50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x14df54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14df54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14df58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14df5c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14df60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14df64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14df64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14df68: 0x34426230  ori         $v0, $v0, 0x6230
    ctx->pc = 0x14df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25136);
    // 0x14df6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14df70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14df70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14df74: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x14df74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14df78: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14df7c: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x14df7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14df80: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x14df80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14df84: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x14df84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14df88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14df88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14df8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14df90: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14df90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_14df94:
    // 0x14df94: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x14df94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_14df98:
    // 0x14df98: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x14df98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14df9c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x14df9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14dfa0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x14dfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14dfa4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x14dfa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14dfa8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x14dfa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14dfac: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x14dfacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14dfb0: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x14dfb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14dfb4: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x14dfb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14dfb8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x14dfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14dfbc: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x14dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14dfc0: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x14dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14dfc4: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x14dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14dfc8: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x14dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14dfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x14DFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFCCu;
        // 0x14dfd0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DFD4u;
    // 0x14dfd4: 0x0  nop
    ctx->pc = 0x14dfd4u;
    // NOP
    ctx->pc = 0x14dfd8u;
}
