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

// Function: func_002BD4B0
// Address: 0x2bd4b0 - 0x2bd6a8
void func_002BD4B0_0x2bd4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD4B0_0x2bd4b0");
#endif

    switch (ctx->pc) {
        case 0x2bd500u: goto label_2bd500;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd540u: goto label_2bd540;
        case 0x2bd588u: goto label_2bd588;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5c8u: goto label_2bd5c8;
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd640u: goto label_2bd640;
        case 0x2bd650u: goto label_2bd650;
        default: break;
    }

    ctx->pc = 0x2bd4b0u;

    // 0x2bd4b0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2bd4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2bd4b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bd4b8: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x2bd4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x2bd4bc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bd4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4c0: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x2bd4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x2bd4c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2bd4c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4c8: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x2bd4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x2bd4cc: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x2bd4ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bd4d0: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x2bd4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x2bd4d4: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x2bd4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bd4d8: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x2bd4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x2bd4dc: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x2bd4dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bd4e0: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x2bd4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x2bd4e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2bd4e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4e8: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x2bd4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x2bd4ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2bd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd4f0: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x2bd4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x2bd4f4: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x2bd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x2bd4f8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2bd4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2bd4fc: 0xafa70120  sw          $a3, 0x120($sp)
    ctx->pc = 0x2bd4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
label_2bd500:
    // 0x2bd500: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bd500u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd504: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bd508: 0x0  nop
    ctx->pc = 0x2bd508u;
    // NOP
    // 0x2bd50c: 0x0  nop
    ctx->pc = 0x2bd50cu;
    // NOP
    // 0x2bd510: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD510u;
    {
        const bool branch_taken_0x2bd510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD510u;
        // 0x2bd514: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd510) {
            ctx->pc = 0x2BD500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd500;
        }
    }
    ctx->pc = 0x2BD518u;
    // 0x2bd518: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bd518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd51c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bd51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd520: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2bd520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd524: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2bd524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bd528:
    // 0x2bd528: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bd528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd52c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2bd52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd534: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bd534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd538: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD538u;
    SET_GPR_U32(ctx, 31, 0x2BD540u);
    ctx->pc = 0x2BD53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD538u;
    // 0x2bd53c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD538u, 0x2BD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD540u;
label_2bd540:
    // 0x2bd540: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bd540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd544: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd548: 0x12140006  beq         $s0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD548u;
    {
        const bool branch_taken_0x2bd548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2BD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD548u;
        // 0x2bd54c: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd548) {
            ctx->pc = 0x2BD564u;
            goto label_2bd564;
        }
    }
    ctx->pc = 0x2BD550u;
    // 0x2bd550: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bd550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bd554: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2bd554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd558: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2bd558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bd55c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bd55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd560: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bd560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bd564:
    // 0x2bd564: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bd564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bd568: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2bd568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bd56c: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x2bd56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bd570: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BD570u;
    {
        const bool branch_taken_0x2bd570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD570u;
        // 0x2bd574: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd570) {
            ctx->pc = 0x2BD528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd528;
        }
    }
    ctx->pc = 0x2BD578u;
    // 0x2bd578: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2bd578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd57c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bd580: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2bd580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd584: 0x0  nop
    ctx->pc = 0x2bd584u;
    // NOP
label_2bd588:
    // 0x2bd588: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bd588u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd58c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bd590: 0x0  nop
    ctx->pc = 0x2bd590u;
    // NOP
    // 0x2bd594: 0x0  nop
    ctx->pc = 0x2bd594u;
    // NOP
    // 0x2bd598: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD598u;
    {
        const bool branch_taken_0x2bd598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD598u;
        // 0x2bd59c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd598) {
            ctx->pc = 0x2BD588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd588;
        }
    }
    ctx->pc = 0x2BD5A0u;
    // 0x2bd5a0: 0x8fb10120  lw          $s1, 0x120($sp)
    ctx->pc = 0x2bd5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bd5a4: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2bd5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bd5a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5ac: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2bd5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2bd5b0:
    // 0x2bd5b0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bd5b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd5b4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2bd5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2bd5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5c0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD5C0u;
    SET_GPR_U32(ctx, 31, 0x2BD5C8u);
    ctx->pc = 0x2BD5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5C0u;
    // 0x2bd5c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD5C0u, 0x2BD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5C8u;
label_2bd5c8:
    // 0x2bd5c8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bd5c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd5cc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd5d0: 0x12140006  beq         $s0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD5D0u;
    {
        const bool branch_taken_0x2bd5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2BD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5D0u;
        // 0x2bd5d4: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5d0) {
            ctx->pc = 0x2BD5ECu;
            goto label_2bd5ec;
        }
    }
    ctx->pc = 0x2BD5D8u;
    // 0x2bd5d8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bd5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bd5dc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2bd5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd5e0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2bd5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bd5e4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bd5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd5e8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bd5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bd5ec:
    // 0x2bd5ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bd5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bd5f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2bd5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bd5f4: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x2bd5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bd5f8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BD5F8u;
    {
        const bool branch_taken_0x2bd5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F8u;
        // 0x2bd5fc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f8) {
            ctx->pc = 0x2BD5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd5b0;
        }
    }
    ctx->pc = 0x2BD600u;
    // 0x2bd600: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bd600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd604: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2bd604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd608: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2bd608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd60c: 0x0  nop
    ctx->pc = 0x2bd60cu;
    // NOP
label_2bd610:
    // 0x2bd610: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd618: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x2BD618u;
    SET_GPR_U32(ctx, 31, 0x2BD620u);
    ctx->pc = 0x2BD61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD618u;
    // 0x2bd61c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2BD618u, 0x2BD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD620u;
label_2bd620:
    // 0x2bd620: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2BD620u;
    {
        const bool branch_taken_0x2bd620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd620) {
            ctx->pc = 0x2BD658u;
            goto label_2bd658;
        }
    }
    ctx->pc = 0x2BD628u;
    // 0x2bd628: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x2bd628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bd62c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BD62Cu;
    {
        const bool branch_taken_0x2bd62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD62Cu;
        // 0x2bd630: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd62c) {
            ctx->pc = 0x2BD610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd610;
        }
    }
    ctx->pc = 0x2BD634u;
    // 0x2bd634: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2bd634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd638: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bd638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd63c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2bd63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd640:
    // 0x2bd640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd648: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x2BD648u;
    SET_GPR_U32(ctx, 31, 0x2BD650u);
    ctx->pc = 0x2BD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD648u;
    // 0x2bd64c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2BD648u, 0x2BD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD650u;
label_2bd650:
    // 0x2bd650: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD650u;
    {
        const bool branch_taken_0x2bd650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2BD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD650u;
        // 0x2bd654: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd650) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD658u;
label_2bd658:
    // 0x2bd658: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD658u;
    {
        const bool branch_taken_0x2bd658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD658u;
        // 0x2bd65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd658) {
            ctx->pc = 0x2BD670u;
            goto label_2bd670;
        }
    }
    ctx->pc = 0x2BD660u;
label_2bd660:
    // 0x2bd660: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x2bd660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bd664: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BD664u;
    {
        const bool branch_taken_0x2bd664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD664u;
        // 0x2bd668: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd664) {
            ctx->pc = 0x2BD640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd640;
        }
    }
    ctx->pc = 0x2BD66Cu;
    // 0x2bd66c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd670:
    // 0x2bd670: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x2bd670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bd674: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x2bd674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bd678: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x2bd678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bd67c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x2bd67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bd680: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x2bd680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bd684: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x2bd684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bd688: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x2bd688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bd68c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x2bd68cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bd690: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x2bd690u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bd694: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2bd694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bd698: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD698u;
        // 0x2bd69c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD6A0u;
    // 0x2bd6a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bd6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd6a4: 0x0  nop
    ctx->pc = 0x2bd6a4u;
    // NOP
    ctx->pc = 0x2bd6a8u;
}
