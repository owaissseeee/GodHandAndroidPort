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

// Function: func_0012D970
// Address: 0x12d970 - 0x12dc88
void func_0012D970_0x12d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012D970_0x12d970");
#endif

    switch (ctx->pc) {
        case 0x12d9f0u: goto label_12d9f0;
        case 0x12da20u: goto label_12da20;
        default: break;
    }

    ctx->pc = 0x12d970u;

    // 0x12d970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12d974: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12d974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12d978: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x12d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x12d97c: 0x2442d5a8  addiu       $v0, $v0, -0x2A58
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956456));
    // 0x12d980: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x12d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x12d984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d988: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x12d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x12d98c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12d98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d990: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x12d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x12d994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12d994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12d998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12d99c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x12d99cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9a0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x12d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x12d9a4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x12d9a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9a8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x12d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x12d9ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x12d9acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9b0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x12d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x12d9b4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x12d9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d9bc: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x12d9bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9c0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x12d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x12d9c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12d9c8: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x12d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d9cc: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x12d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d9d0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x12d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x12d9d4: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x12d9d8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x12d9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12d9e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x12d9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d9e8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x12D9E8u;
    SET_GPR_U32(ctx, 31, 0x12D9F0u);
    ctx->pc = 0x12D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D9E8u;
    // 0x12d9ec: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x12D9E8u, 0x12D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9F0u;
label_12d9f0:
    // 0x12d9f0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x12d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x12d9f4: 0x2463d558  addiu       $v1, $v1, -0x2AA8
    ctx->pc = 0x12d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956376));
    // 0x12d9f8: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x12d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x12d9fc: 0xfa000060  sqc2        $vf0, 0x60($s0)
    ctx->pc = 0x12d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12da00: 0xfa000070  sqc2        $vf0, 0x70($s0)
    ctx->pc = 0x12da00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12da04: 0xfa000080  sqc2        $vf0, 0x80($s0)
    ctx->pc = 0x12da04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12da08: 0xfa000090  sqc2        $vf0, 0x90($s0)
    ctx->pc = 0x12da08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12da0c: 0xfa0000a0  sqc2        $vf0, 0xA0($s0)
    ctx->pc = 0x12da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12da10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12da14: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x12da18: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12da1c: 0x0  nop
    ctx->pc = 0x12da1cu;
    // NOP
label_12da20:
    // 0x12da20: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12da20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12da24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12da28: 0x0  nop
    ctx->pc = 0x12da28u;
    // NOP
    // 0x12da2c: 0x0  nop
    ctx->pc = 0x12da2cu;
    // NOP
    // 0x12da30: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12DA30u;
    {
        const bool branch_taken_0x12da30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA30u;
        // 0x12da34: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da30) {
            ctx->pc = 0x12DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12da20;
        }
    }
    ctx->pc = 0x12DA38u;
    // 0x12da38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12da38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12da3c: 0xae150058  sw          $s5, 0x58($s0)
    ctx->pc = 0x12da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 21));
    // 0x12da40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12da40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12da44: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x12da48: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x12da48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x12da4c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12da50: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DA50u;
    {
        const bool branch_taken_0x12da50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12da50) {
            ctx->pc = 0x12DA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DA50u;
            // 0x12da54: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA74u;
            goto label_12da74;
        }
    }
    ctx->pc = 0x12DA58u;
    // 0x12da58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12da5c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x12da5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x12da60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12da64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12da64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12da68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12da6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12da70: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_12da74:
    // 0x12da74: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DA74u;
    {
        const bool branch_taken_0x12da74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x12DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA74u;
        // 0x12da78: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da74) {
            ctx->pc = 0x12DA94u;
            goto label_12da94;
        }
    }
    ctx->pc = 0x12DA7Cu;
    // 0x12da7c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12da80: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x12da80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x12da84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x12da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12da88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12da88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12da8c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x12da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12da90: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12da94:
    // 0x12da94: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x12da98: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DA98u;
    {
        const bool branch_taken_0x12da98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12da98) {
            ctx->pc = 0x12DA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DA98u;
            // 0x12da9c: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DABCu;
            goto label_12dabc;
        }
    }
    ctx->pc = 0x12DAA0u;
    // 0x12daa0: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x12daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12daa4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x12daa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x12daa8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12daac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12daacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12dab0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dab4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12dab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12dab8: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_12dabc:
    // 0x12dabc: 0x50530008  beql        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DABCu;
    {
        const bool branch_taken_0x12dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x12dabc) {
            ctx->pc = 0x12DAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DABCu;
            // 0x12dac0: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DAE0u;
            goto label_12dae0;
        }
    }
    ctx->pc = 0x12DAC4u;
    // 0x12dac4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x12dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dac8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x12dac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x12dacc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x12daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dad0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12dad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12dad4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dad8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12dad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12dadc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x12dadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12dae0:
    // 0x12dae0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12dae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12dae4: 0x0  nop
    ctx->pc = 0x12dae4u;
    // NOP
    // 0x12dae8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12dae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12daec: 0x0  nop
    ctx->pc = 0x12daecu;
    // NOP
    // 0x12daf0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DAF0u;
    {
        const bool branch_taken_0x12daf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12daf0) {
            ctx->pc = 0x12DAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DAF0u;
            // 0x12daf4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DAF8u;
            goto label_12daf8;
        }
    }
    ctx->pc = 0x12DAF8u;
label_12daf8:
    // 0x12daf8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x12daf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x12dafc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x12dafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12db00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12db00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12db04: 0x0  nop
    ctx->pc = 0x12db04u;
    // NOP
    // 0x12db08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DB08u;
    {
        const bool branch_taken_0x12db08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12db08) {
            ctx->pc = 0x12DB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB08u;
            // 0x12db0c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DB10u;
            goto label_12db10;
        }
    }
    ctx->pc = 0x12DB10u;
label_12db10:
    // 0x12db10: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x12db10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x12db14: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x12db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12db18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12db18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12db1c: 0x0  nop
    ctx->pc = 0x12db1cu;
    // NOP
    // 0x12db20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12DB20u;
    {
        const bool branch_taken_0x12db20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12db20) {
            ctx->pc = 0x12DB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB20u;
            // 0x12db24: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DB28u;
            goto label_12db28;
        }
    }
    ctx->pc = 0x12DB28u;
label_12db28:
    // 0x12db28: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x12db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x12db2c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x12db2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12db30: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x12db30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12db34: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x12db34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12db38: 0x6ac3000f  ldl         $v1, 0xF($s6)
    ctx->pc = 0x12db38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12db3c: 0x6ec30008  ldr         $v1, 0x8($s6)
    ctx->pc = 0x12db3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12db40: 0xb20200b7  sdl         $v0, 0xB7($s0)
    ctx->pc = 0x12db40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db44: 0xb60200b0  sdr         $v0, 0xB0($s0)
    ctx->pc = 0x12db44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db48: 0xb20300bf  sdl         $v1, 0xBF($s0)
    ctx->pc = 0x12db48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db4c: 0xb60300b8  sdr         $v1, 0xB8($s0)
    ctx->pc = 0x12db4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db50: 0xa60400b8  sh          $a0, 0xB8($s0)
    ctx->pc = 0x12db50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 184), (uint16_t)GPR_U32(ctx, 4));
    // 0x12db54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12db54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db58: 0xa20000bb  sb          $zero, 0xBB($s0)
    ctx->pc = 0x12db58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 0));
    // 0x12db5c: 0xa20000ba  sb          $zero, 0xBA($s0)
    ctx->pc = 0x12db5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 186), (uint8_t)GPR_U32(ctx, 0));
    // 0x12db60: 0x6ae70007  ldl         $a3, 0x7($s7)
    ctx->pc = 0x12db60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12db64: 0x6ee70000  ldr         $a3, 0x0($s7)
    ctx->pc = 0x12db64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12db68: 0x6ae8000f  ldl         $t0, 0xF($s7)
    ctx->pc = 0x12db68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x12db6c: 0x6ee80008  ldr         $t0, 0x8($s7)
    ctx->pc = 0x12db6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x12db70: 0xb20700c7  sdl         $a3, 0xC7($s0)
    ctx->pc = 0x12db70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db74: 0xb60700c0  sdr         $a3, 0xC0($s0)
    ctx->pc = 0x12db74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db78: 0xb20800cf  sdl         $t0, 0xCF($s0)
    ctx->pc = 0x12db78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db7c: 0xb60800c8  sdr         $t0, 0xC8($s0)
    ctx->pc = 0x12db7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12db80: 0xa60400c8  sh          $a0, 0xC8($s0)
    ctx->pc = 0x12db80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 4));
    // 0x12db84: 0xa20000cb  sb          $zero, 0xCB($s0)
    ctx->pc = 0x12db84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 203), (uint8_t)GPR_U32(ctx, 0));
    // 0x12db88: 0xa20000ca  sb          $zero, 0xCA($s0)
    ctx->pc = 0x12db88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 202), (uint8_t)GPR_U32(ctx, 0));
    // 0x12db8c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x12db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12db90: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x12db90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12db94: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x12db94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12db98: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x12db98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12db9c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x12db9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12dba0: 0xb20600d7  sdl         $a2, 0xD7($s0)
    ctx->pc = 0x12dba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dba4: 0xb60600d0  sdr         $a2, 0xD0($s0)
    ctx->pc = 0x12dba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dba8: 0xb20700df  sdl         $a3, 0xDF($s0)
    ctx->pc = 0x12dba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dbac: 0xb60700d8  sdr         $a3, 0xD8($s0)
    ctx->pc = 0x12dbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dbb0: 0xa60400d8  sh          $a0, 0xD8($s0)
    ctx->pc = 0x12dbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 4));
    // 0x12dbb4: 0xa20000db  sb          $zero, 0xDB($s0)
    ctx->pc = 0x12dbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dbb8: 0xa20000da  sb          $zero, 0xDA($s0)
    ctx->pc = 0x12dbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dbbc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbc0: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x12dbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12dbc4: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x12dbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12dbc8: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x12dbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12dbcc: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x12dbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12dbd0: 0xb20600e7  sdl         $a2, 0xE7($s0)
    ctx->pc = 0x12dbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dbd4: 0xb60600e0  sdr         $a2, 0xE0($s0)
    ctx->pc = 0x12dbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dbd8: 0xb20700ef  sdl         $a3, 0xEF($s0)
    ctx->pc = 0x12dbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dbdc: 0xb60700e8  sdr         $a3, 0xE8($s0)
    ctx->pc = 0x12dbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dbe0: 0xa60400e8  sh          $a0, 0xE8($s0)
    ctx->pc = 0x12dbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 4));
    // 0x12dbe4: 0xa20000eb  sb          $zero, 0xEB($s0)
    ctx->pc = 0x12dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 235), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dbe8: 0xa20000ea  sb          $zero, 0xEA($s0)
    ctx->pc = 0x12dbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dbec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x12dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12dbf0: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x12dbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12dbf4: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x12dbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12dbf8: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x12dbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12dbfc: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x12dbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12dc00: 0xb20600f7  sdl         $a2, 0xF7($s0)
    ctx->pc = 0x12dc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc04: 0xb60600f0  sdr         $a2, 0xF0($s0)
    ctx->pc = 0x12dc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc08: 0xb20700ff  sdl         $a3, 0xFF($s0)
    ctx->pc = 0x12dc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc0c: 0xb60700f8  sdr         $a3, 0xF8($s0)
    ctx->pc = 0x12dc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc10: 0xa60400f8  sh          $a0, 0xF8($s0)
    ctx->pc = 0x12dc10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 248), (uint16_t)GPR_U32(ctx, 4));
    // 0x12dc14: 0xa20000fb  sb          $zero, 0xFB($s0)
    ctx->pc = 0x12dc14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 251), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dc18: 0xa20000fa  sb          $zero, 0xFA($s0)
    ctx->pc = 0x12dc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 250), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dc1c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x12dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12dc20: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x12dc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12dc24: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x12dc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12dc28: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x12dc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12dc2c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x12dc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12dc30: 0xb2060107  sdl         $a2, 0x107($s0)
    ctx->pc = 0x12dc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc34: 0xb6060100  sdr         $a2, 0x100($s0)
    ctx->pc = 0x12dc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc38: 0xb207010f  sdl         $a3, 0x10F($s0)
    ctx->pc = 0x12dc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc3c: 0xb6070108  sdr         $a3, 0x108($s0)
    ctx->pc = 0x12dc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12dc40: 0xa6040108  sh          $a0, 0x108($s0)
    ctx->pc = 0x12dc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 264), (uint16_t)GPR_U32(ctx, 4));
    // 0x12dc44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dc48: 0xa200010b  sb          $zero, 0x10B($s0)
    ctx->pc = 0x12dc48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 267), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dc4c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x12dc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x12dc50: 0xa200010a  sb          $zero, 0x10A($s0)
    ctx->pc = 0x12dc50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 266), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dc54: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12dc58: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x12dc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12dc5c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x12dc5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12dc60: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x12dc60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12dc64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x12dc64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12dc68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12dc68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12dc6c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x12dc6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12dc70: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x12dc70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dc74: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x12dc74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12DC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC7Cu;
        // 0x12dc80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DC84u;
    // 0x12dc84: 0x0  nop
    ctx->pc = 0x12dc84u;
    // NOP
    ctx->pc = 0x12dc88u;
}
