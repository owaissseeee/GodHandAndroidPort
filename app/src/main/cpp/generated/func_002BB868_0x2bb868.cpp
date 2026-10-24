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

// Function: func_002BB868
// Address: 0x2bb868 - 0x2bbba0
void func_002BB868_0x2bb868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB868_0x2bb868");
#endif

    switch (ctx->pc) {
        case 0x2bb8c8u: goto label_2bb8c8;
        case 0x2bb8f8u: goto label_2bb8f8;
        case 0x2bba74u: goto label_2bba74;
        default: break;
    }

    ctx->pc = 0x2bb868u;

    // 0x2bb868: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2bb868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2bb86c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb870: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2bb870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2bb874: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bb874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb878: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2bb878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2bb87c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bb87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb880: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2bb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2bb884: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2bb884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bb888: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2bb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2bb88c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bb88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb890: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2bb890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2bb894: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2bb894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb898: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2bb898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2bb89c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2bb89cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb8a0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2bb8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2bb8a4: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x2bb8a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bb8a8: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2bb8a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2bb8ac: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2bb8acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bb8b0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2bb8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2bb8b4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2bb8b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2bb8b8: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2bb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2bb8bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2bb8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb8c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bb8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bb8c4: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2bb8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2bb8c8:
    // 0x2bb8c8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb8cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bb8d0: 0x0  nop
    ctx->pc = 0x2bb8d0u;
    // NOP
    // 0x2bb8d4: 0x0  nop
    ctx->pc = 0x2bb8d4u;
    // NOP
    // 0x2bb8d8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BB8D8u;
    {
        const bool branch_taken_0x2bb8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8D8u;
        // 0x2bb8dc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8d8) {
            ctx->pc = 0x2BB8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb8c8;
        }
    }
    ctx->pc = 0x2BB8E0u;
    // 0x2bb8e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2bb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2bb8e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bb8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb8e8: 0x24452600  addiu       $a1, $v0, 0x2600
    ctx->pc = 0x2bb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x2bb8ec: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2bb8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb8f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2bb8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb8f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2bb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bb8f8:
    // 0x2bb8f8: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x2bb8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2bb8fc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2bb900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bb900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb904: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bb904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bb908: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bb908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bb90c: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB90Cu;
    {
        const bool branch_taken_0x2bb90c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB90Cu;
        // 0x2bb910: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb90c) {
            ctx->pc = 0x2BB92Cu;
            goto label_2bb92c;
        }
    }
    ctx->pc = 0x2BB914u;
    // 0x2bb914: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bb914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb918: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bb918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bb91c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb920: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bb920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bb924: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb928: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bb928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bb92c:
    // 0x2bb92c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bb930: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bb930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bb934: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bb938: 0x52c20008  beql        $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB938u;
    {
        const bool branch_taken_0x2bb938 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb938) {
            ctx->pc = 0x2BB93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB938u;
            // 0x2bb93c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB95Cu;
            goto label_2bb95c;
        }
    }
    ctx->pc = 0x2BB940u;
    // 0x2bb940: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bb940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb944: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bb944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bb948: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb94c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bb94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb950: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb954: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2bb954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bb958: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2bb958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2bb95c:
    // 0x2bb95c: 0x24422608  addiu       $v0, $v0, 0x2608
    ctx->pc = 0x2bb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9736));
    // 0x2bb960: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2bb960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bb964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bb968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bb96c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bb970: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB970u;
    {
        const bool branch_taken_0x2bb970 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb970) {
            ctx->pc = 0x2BB990u;
            goto label_2bb990;
        }
    }
    ctx->pc = 0x2BB978u;
    // 0x2bb978: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bb978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb97c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bb97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bb980: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb984: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bb984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bb988: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb98c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2bb98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2bb990:
    // 0x2bb990: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2bb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb994: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb998: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2bb998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb99c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2bb99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb9a0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2bb9a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bb9a4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bb9a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb9a8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bb9a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9ac: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2bb9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb9b0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bb9b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bb9b4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2bb9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb9b8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2bb9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb9bc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2bb9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb9c0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2bb9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb9c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bb9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bb9c8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bb9c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bb9cc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bb9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bb9d0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2bb9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb9d4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2bb9d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2bb9d8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bb9d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb9dc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bb9dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9e0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2bb9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb9e4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bb9e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bb9e8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2bb9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb9ec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2bb9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb9f0: 0xc7a60064  lwc1        $f6, 0x64($sp)
    ctx->pc = 0x2bb9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bb9f4: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x2bb9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bb9f8: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x2bb9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb9fc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2bb9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bba00: 0x46002a02  mul.s       $f8, $f5, $f0
    ctx->pc = 0x2bba00u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bba04: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2bba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bba08: 0x460021c2  mul.s       $f7, $f4, $f0
    ctx->pc = 0x2bba08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bba0c: 0x460608c2  mul.s       $f3, $f1, $f6
    ctx->pc = 0x2bba0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2bba10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bba14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bba14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bba18: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bba18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bba1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bba20: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2bba20u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2bba24: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x2bba24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bba28: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2bba28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2bba2c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2bba2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bba30: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x2bba30u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2bba34: 0xe4d4000c  swc1        $f20, 0xC($a2)
    ctx->pc = 0x2bba34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2bba38: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x2bba38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2bba3c: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x2bba3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2bba40: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x2bba40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bba44: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x2bba44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bba48: 0x12060005  beq         $s0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBA48u;
    {
        const bool branch_taken_0x2bba48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA48u;
        // 0x2bba4c: 0xe7a50060  swc1        $f5, 0x60($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba48) {
            ctx->pc = 0x2BBA60u;
            goto label_2bba60;
        }
    }
    ctx->pc = 0x2BBA50u;
    // 0x2bba50: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2bba50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bba54: 0xe6070004  swc1        $f7, 0x4($s0)
    ctx->pc = 0x2bba54u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bba58: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2bba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bba5c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bba60:
    // 0x2bba60: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2bba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bba64: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x2bba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x2bba68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bba6c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BBA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA74u);
    ctx->pc = 0x2BBA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA6Cu;
    // 0x2bba70: 0x7fa60090  sq          $a2, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BBA6Cu, 0x2BBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA74u;
label_2bba74:
    // 0x2bba74: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bba74u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2bba78: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x2bba78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bba7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bba7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bba80: 0x0  nop
    ctx->pc = 0x2bba80u;
    // NOP
    // 0x2bba84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bba84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bba88: 0x0  nop
    ctx->pc = 0x2bba88u;
    // NOP
    // 0x2bba8c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2BBA8Cu;
    {
        const bool branch_taken_0x2bba8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA8Cu;
        // 0x2bba90: 0x7ba60090  lq          $a2, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba8c) {
            ctx->pc = 0x2BBACCu;
            goto label_2bbacc;
        }
    }
    ctx->pc = 0x2BBA94u;
    // 0x2bba94: 0x0  nop
    ctx->pc = 0x2bba94u;
    // NOP
    // 0x2bba98: 0x0  nop
    ctx->pc = 0x2bba98u;
    // NOP
    // 0x2bba9c: 0x4602a083  div.s       $f2, $f20, $f2
    ctx->pc = 0x2bba9cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[2]);
    // 0x2bbaa0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bbaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbaa4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bbaa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bbaa8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bbaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bbaac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2bbaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbab0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bbab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bbab4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2bbab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2bbab8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2bbab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbabc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bbabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bbac0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2bbac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2bbac4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2bbac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbac8: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x2bbac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2bbacc:
    // 0x2bbacc: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2bbaccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2bbad0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2bbad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbad4: 0x121e0006  beq         $s0, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBAD4u;
    {
        const bool branch_taken_0x2bbad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x2BBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAD4u;
        // 0x2bbad8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbad4) {
            ctx->pc = 0x2BBAF0u;
            goto label_2bbaf0;
        }
    }
    ctx->pc = 0x2BBADCu;
    // 0x2bbadc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2bbadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbae0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bbae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bbae4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2bbae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bbae8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2bbae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbaec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bbaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bbaf0:
    // 0x2bbaf0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2bbaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbaf4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2bbaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbaf8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2bbaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bbafc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2bbafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbb00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bbb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bbb04: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x2bbb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bbb08: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x2bbb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bbb0c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bbb0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bbb10: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2bbb10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2bbb14: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2bbb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bbb18: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2bbb18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2bbb1c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2bbb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbb20: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x2bbb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bbb24: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2bbb24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bbb28: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2bbb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2bbb2c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2bbb2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2bbb30: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2bbb30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2bbb34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbb34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbb38: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2bbb38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2bbb3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bbb3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bbb40: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2bbb40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbb44: 0x0  nop
    ctx->pc = 0x2bbb44u;
    // NOP
    // 0x2bbb48: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBB48u;
    {
        const bool branch_taken_0x2bbb48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB48u;
        // 0x2bbb4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb48) {
            ctx->pc = 0x2BBB64u;
            goto label_2bbb64;
        }
    }
    ctx->pc = 0x2BBB50u;
    // 0x2bbb50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bbb54: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x2bbb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2bbb58: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x2BBB58u;
    {
        const bool branch_taken_0x2bbb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB58u;
        // 0x2bbb5c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb58) {
            ctx->pc = 0x2BB8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb8f8;
        }
    }
    ctx->pc = 0x2BBB60u;
    // 0x2bbb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbb64:
    // 0x2bbb64: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2bbb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bbb68: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2bbb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bbb6c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2bbb6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bbb70: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2bbb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bbb74: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2bbb74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bbb78: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2bbb78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bbb7c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2bbb7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bbb80: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2bbb80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bbb84: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2bbb84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bbb88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2bbb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bbb8c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2bbb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bbb90: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2bbb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bbb94: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB94u;
        // 0x2bbb98: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBB9Cu;
    // 0x2bbb9c: 0x0  nop
    ctx->pc = 0x2bbb9cu;
    // NOP
    ctx->pc = 0x2bbba0u;
}
