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

// Function: __kernel_rem_pio2f
// Address: 0x3a3dd8 - 0x3a4728
void ps2___kernel_rem_pio2f_0x3a3dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2f_0x3a3dd8");
#endif

    switch (ctx->pc) {
        case 0x3a3e88u: goto label_3a3e88;
        case 0x3a3ef8u: goto label_3a3ef8;
        case 0x3a3f18u: goto label_3a3f18;
        case 0x3a3f74u: goto label_3a3f74;
        case 0x3a3fa8u: goto label_3a3fa8;
        case 0x3a3ff0u: goto label_3a3ff0;
        case 0x3a4008u: goto label_3a4008;
        case 0x3a40d8u: goto label_3a40d8;
        case 0x3a417cu: goto label_3a417c;
        case 0x3a41a8u: goto label_3a41a8;
        case 0x3a41e8u: goto label_3a41e8;
        case 0x3a4230u: goto label_3a4230;
        case 0x3a4270u: goto label_3a4270;
        case 0x3a4300u: goto label_3a4300;
        case 0x3a432cu: goto label_3a432c;
        case 0x3a43bcu: goto label_3a43bc;
        case 0x3a43e0u: goto label_3a43e0;
        case 0x3a4418u: goto label_3a4418;
        case 0x3a4440u: goto label_3a4440;
        case 0x3a44f8u: goto label_3a44f8;
        case 0x3a4548u: goto label_3a4548;
        case 0x3a4598u: goto label_3a4598;
        case 0x3a45e8u: goto label_3a45e8;
        case 0x3a4638u: goto label_3a4638;
        case 0x3a4690u: goto label_3a4690;
        default: break;
    }

    ctx->pc = 0x3a3dd8u;

    // 0x3a3dd8: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x3a3dd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x3a3ddc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x3a3ddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a3de0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x3a3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x3a3de4: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x3a3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a3de8: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x3a3de8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3a3dec: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x3a3decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x3a3df0: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x3a3df0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x3a3df4: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x3a3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x3a3df8: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x3a3df8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3a3dfc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a3e00: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x3a3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
    // 0x3a3e04: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x3a3e04u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3a3e08: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3a3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3a3e0c: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x3a3e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x3a3e10: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x3a3e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x3a3e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a3e18: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x3a3e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x3a3e1c: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x3a3e1cu;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x3a3e20: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x3a3e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x3a3e24: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x3a3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3a3e28: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x3a3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x3a3e2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a3e30: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x3a3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x3a3e34: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x3a3e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a3e38: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x3a3e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x3a3e3c: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x3a3e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3a3e40: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x3a3e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x3a3e44: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3a3e44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e48: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x3a3e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x3a3e4c: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x3a3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a3e50: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x3a3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x3a3e54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e58: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3a3e58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3e5c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x3a3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x3a3e60: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x3a3e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x3a3e64: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A3E64u;
    {
        const bool branch_taken_0x3a3e64 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x3A3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E64u;
        // 0x3a3e68: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e64) {
            ctx->pc = 0x3A3ECCu;
            goto label_3a3ecc;
        }
    }
    ctx->pc = 0x3A3E6Cu;
    // 0x3a3e6c: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x3a3e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a3e70: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x3a3e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a3e74: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x3a3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x3a3e78: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x3a3e78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a3e7c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x3a3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x3a3e80: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x3a3e80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3a3e84: 0x0  nop
    ctx->pc = 0x3a3e84u;
    // NOP
label_3a3e88:
    // 0x3a3e88: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a3e8c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3E8Cu;
    {
        const bool branch_taken_0x3a3e8c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3A3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E8Cu;
        // 0x3a3e90: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e8c) {
            ctx->pc = 0x3A3EB0u;
            goto label_3a3eb0;
        }
    }
    ctx->pc = 0x3A3E94u;
    // 0x3a3e94: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x3a3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3a3e98: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3a3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a3e9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a3ea0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3ea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a3ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a3ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3EA8u;
    {
        const bool branch_taken_0x3a3ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EA8u;
        // 0x3a3eac: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ea8) {
            ctx->pc = 0x3A3EB4u;
            goto label_3a3eb4;
        }
    }
    ctx->pc = 0x3A3EB0u;
label_3a3eb0:
    // 0x3a3eb0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3a3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3a3eb4:
    // 0x3a3eb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a3eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a3eb8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3a3eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a3ebc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A3EBCu;
    {
        const bool branch_taken_0x3a3ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EBCu;
        // 0x3a3ec0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ebc) {
            ctx->pc = 0x3A3E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3e88;
        }
    }
    ctx->pc = 0x3A3EC4u;
    // 0x3a3ec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3EC4u;
    {
        const bool branch_taken_0x3a3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EC4u;
        // 0x3a3ec8: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ec4) {
            ctx->pc = 0x3A3EE8u;
            goto label_3a3ee8;
        }
    }
    ctx->pc = 0x3A3ECCu;
label_3a3ecc:
    // 0x3a3ecc: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x3a3eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x3a3ed0: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x3a3ed0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a3ed4: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x3a3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x3a3ed8: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x3a3ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3a3edc: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x3a3edcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a3ee0: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x3a3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x3a3ee4: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x3a3ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_3a3ee8:
    // 0x3a3ee8: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A3EE8u;
    {
        const bool branch_taken_0x3a3ee8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EE8u;
        // 0x3a3eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ee8) {
            ctx->pc = 0x3A3F70u;
            goto label_3a3f70;
        }
    }
    ctx->pc = 0x3A3EF0u;
    // 0x3a3ef0: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x3a3ef0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a3ef4: 0x0  nop
    ctx->pc = 0x3a3ef4u;
    // NOP
label_3a3ef8:
    // 0x3a3ef8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a3ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3efc: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A3EFCu;
    {
        const bool branch_taken_0x3a3efc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EFCu;
        // 0x3a3f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3efc) {
            ctx->pc = 0x3A3F54u;
            goto label_3a3f54;
        }
    }
    ctx->pc = 0x3A3F04u;
    // 0x3a3f04: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x3a3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x3a3f08: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x3a3f08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a3f0c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x3a3f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a3f10: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3a3f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a3f14: 0x0  nop
    ctx->pc = 0x3a3f14u;
    // NOP
label_3a3f18:
    // 0x3a3f18: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x3a3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a3f1c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x3a3f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3a3f20: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a3f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a3f28: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3a3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3a3f2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a3f30: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3a3f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3f34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a3f38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a3f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3f3c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x3a3f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a3f40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a3f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a3f44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A3F44u;
    {
        const bool branch_taken_0x3a3f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F44u;
        // 0x3a3f48: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f44) {
            ctx->pc = 0x3A3F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3f18;
        }
    }
    ctx->pc = 0x3A3F4Cu;
    // 0x3a3f4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3F4Cu;
    {
        const bool branch_taken_0x3a3f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F4Cu;
        // 0x3a3f50: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f4c) {
            ctx->pc = 0x3A3F60u;
            goto label_3a3f60;
        }
    }
    ctx->pc = 0x3A3F54u;
label_3a3f54:
    // 0x3a3f54: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3a3f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a3f58: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x3a3f58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a3f5c: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x3a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_3a3f60:
    // 0x3a3f60: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3a3f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3f64: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x3a3f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a3f68: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3A3F68u;
    {
        const bool branch_taken_0x3a3f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F68u;
        // 0x3a3f6c: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f68) {
            ctx->pc = 0x3A3EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3ef8;
        }
    }
    ctx->pc = 0x3A3F70u;
label_3a3f70:
    // 0x3a3f70: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3a3f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f74:
    // 0x3a3f74: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x3a3f74u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a3f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a3f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3f7c: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x3a3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x3a3f80: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A3F80u;
    {
        const bool branch_taken_0x3a3f80 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3A3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F80u;
        // 0x3a3f84: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f80) {
            ctx->pc = 0x3A3FE4u;
            goto label_3a3fe4;
        }
    }
    ctx->pc = 0x3A3F88u;
    // 0x3a3f88: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x3a3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x3a3f8c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3a3f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3a3f90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a3f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3f94: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x3a3f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x3a3f98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a3f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3f9c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x3a3f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3a3fa0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3a3fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3fa4: 0x0  nop
    ctx->pc = 0x3a3fa4u;
    // NOP
label_3a3fa8:
    // 0x3a3fa8: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x3a3fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x3a3fac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3a3facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3fb0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3a3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3a3fb4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a3fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a3fb8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a3fbc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a3fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3fc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a3fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3fc4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a3fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a3fc8: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3a3fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a3fcc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3a3fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a3fd0: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x3a3fd0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a3fd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a3fd8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3a3fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3a3fdc: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A3FDCu;
    {
        const bool branch_taken_0x3a3fdc = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3A3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FDCu;
        // 0x3a3fe0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3fdc) {
            ctx->pc = 0x3A3FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3fa8;
        }
    }
    ctx->pc = 0x3A3FE4u;
label_3a3fe4:
    // 0x3a3fe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a3fe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a3fe8: 0xc0e938a  jal         func_3A4E28
    ctx->pc = 0x3A3FE8u;
    SET_GPR_U32(ctx, 31, 0x3A3FF0u);
    ctx->pc = 0x3A3FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3FE8u;
    // 0x3a3fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E28u, 0x3A3FE8u, 0x3A3FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3FF0u;
label_3a3ff0:
    // 0x3a3ff0: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x3a3ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x3a3ff4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a3ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3ff8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a3ff8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a3ffc: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x3a3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x3a4000: 0xc0e9346  jal         func_3A4D18
    ctx->pc = 0x3A4000u;
    SET_GPR_U32(ctx, 31, 0x3A4008u);
    ctx->pc = 0x3A4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4000u;
    // 0x3a4004: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D18u, 0x3A4000u, 0x3A4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4008u;
label_3a4008:
    // 0x3a4008: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3a4008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x3a400c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a4010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a4014: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3a4014u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a4018: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a401c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x3a401cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x3a4020: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3a4020u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a4024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a4028: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A4028u;
    {
        const bool branch_taken_0x3a4028 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3A402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4028u;
        // 0x3a402c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4028) {
            ctx->pc = 0x3A4070u;
            goto label_3a4070;
        }
    }
    ctx->pc = 0x3A4030u;
    // 0x3a4030: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3a4034: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3a4034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a4038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a4038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a403c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x3a403cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3a4040: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x3a4040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a4044: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3a4044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a4048: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a404c: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x3a404cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3a4050: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x3a4050u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a4054: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x3a4054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a4058: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x3a4058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x3a405c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a405cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4060: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x3a4060u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a4064: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x3a4064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x3a4068: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A4068u;
    {
        const bool branch_taken_0x3a4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4068u;
        // 0x3a406c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4068) {
            ctx->pc = 0x3A40ACu;
            goto label_3a40ac;
        }
    }
    ctx->pc = 0x3A4070u;
label_3a4070:
    // 0x3a4070: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4070u;
    {
        const bool branch_taken_0x3a4070 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4070u;
        // 0x3a4074: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4070) {
            ctx->pc = 0x3A4090u;
            goto label_3a4090;
        }
    }
    ctx->pc = 0x3A4078u;
    // 0x3a4078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a4078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a407c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a4080: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a4080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4084: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x3a4084u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x3a4088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4088u;
    {
        const bool branch_taken_0x3a4088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4088u;
        // 0x3a408c: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4088) {
            ctx->pc = 0x3A40ACu;
            goto label_3a40ac;
        }
    }
    ctx->pc = 0x3A4090u;
label_3a4090:
    // 0x3a4090: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a4090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a4094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4098: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3a4098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a409c: 0x0  nop
    ctx->pc = 0x3a409cu;
    // NOP
    // 0x3a40a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3A40A0u;
    {
        const bool branch_taken_0x3a40a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40A0u;
        // 0x3a40a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40a0) {
            ctx->pc = 0x3A40ACu;
            goto label_3a40ac;
        }
    }
    ctx->pc = 0x3A40A8u;
    // 0x3a40a8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x3a40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_3a40ac:
    // 0x3a40ac: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x3a40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3a40b0: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3A40B0u;
    {
        const bool branch_taken_0x3a40b0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3a40b0) {
            ctx->pc = 0x3A4180u;
            goto label_3a4180;
        }
    }
    ctx->pc = 0x3A40B8u;
    // 0x3a40b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a40b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a40bc: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A40BCu;
    {
        const bool branch_taken_0x3a40bc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3A40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40BCu;
        // 0x3a40c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40bc) {
            ctx->pc = 0x3A4104u;
            goto label_3a4104;
        }
    }
    ctx->pc = 0x3A40C4u;
    // 0x3a40c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3a40c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3a40c8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3a40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3a40cc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3a40ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a40d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a40d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a40d4: 0x0  nop
    ctx->pc = 0x3a40d4u;
    // NOP
label_3a40d8:
    // 0x3a40d8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A40D8u;
    {
        const bool branch_taken_0x3a40d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40D8u;
        // 0x3a40dc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40d8) {
            ctx->pc = 0x3A40F0u;
            goto label_3a40f0;
        }
    }
    ctx->pc = 0x3A40E0u;
    // 0x3a40e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A40E0u;
    {
        const bool branch_taken_0x3a40e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40E0u;
        // 0x3a40e4: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40e0) {
            ctx->pc = 0x3A40F8u;
            goto label_3a40f8;
        }
    }
    ctx->pc = 0x3A40E8u;
    // 0x3a40e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A40E8u;
    {
        const bool branch_taken_0x3a40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40E8u;
        // 0x3a40ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40e8) {
            ctx->pc = 0x3A40F4u;
            goto label_3a40f4;
        }
    }
    ctx->pc = 0x3A40F0u;
label_3a40f0:
    // 0x3a40f0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x3a40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3a40f4:
    // 0x3a40f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3a40f8:
    // 0x3a40f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a40f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a40fc: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A40FCu;
    {
        const bool branch_taken_0x3a40fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40FCu;
        // 0x3a4100: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40fc) {
            ctx->pc = 0x3A40D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a40d8;
        }
    }
    ctx->pc = 0x3A4104u;
label_3a4104:
    // 0x3a4104: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A4104u;
    {
        const bool branch_taken_0x3a4104 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3A4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4104u;
        // 0x3a4108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4104) {
            ctx->pc = 0x3A4154u;
            goto label_3a4154;
        }
    }
    ctx->pc = 0x3A410Cu;
    // 0x3a410c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A410Cu;
    {
        const bool branch_taken_0x3a410c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A410Cu;
        // 0x3a4110: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a410c) {
            ctx->pc = 0x3A4124u;
            goto label_3a4124;
        }
    }
    ctx->pc = 0x3A4114u;
    // 0x3a4114: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4114u;
    {
        const bool branch_taken_0x3a4114 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4114u;
        // 0x3a4118: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4114) {
            ctx->pc = 0x3A413Cu;
            goto label_3a413c;
        }
    }
    ctx->pc = 0x3A411Cu;
    // 0x3a411c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A411Cu;
    {
        const bool branch_taken_0x3a411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a411c) {
            ctx->pc = 0x3A415Cu;
            goto label_3a415c;
        }
    }
    ctx->pc = 0x3A4124u;
label_3a4124:
    // 0x3a4124: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a4124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3a4128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a4128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a412c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3a412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a4130: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a4134: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4134u;
    {
        const bool branch_taken_0x3a4134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4134u;
        // 0x3a4138: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4134) {
            ctx->pc = 0x3A4150u;
            goto label_3a4150;
        }
    }
    ctx->pc = 0x3A413Cu;
label_3a413c:
    // 0x3a413c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3a4140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a4140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a4144: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3a4144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a4148: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a4148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a414c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3a414cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3a4150:
    // 0x3a4150: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3a4150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3a4154:
    // 0x3a4154: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x3a4154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3a4158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a4158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a415c:
    // 0x3a415c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A415Cu;
    {
        const bool branch_taken_0x3a415c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a415c) {
            ctx->pc = 0x3A4180u;
            goto label_3a4180;
        }
    }
    ctx->pc = 0x3A4164u;
    // 0x3a4164: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a4164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a4168: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a4168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a416c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A416Cu;
    {
        const bool branch_taken_0x3a416c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A416Cu;
        // 0x3a4170: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a416c) {
            ctx->pc = 0x3A4180u;
            goto label_3a4180;
        }
    }
    ctx->pc = 0x3A4174u;
    // 0x3a4174: 0xc0e938a  jal         func_3A4E28
    ctx->pc = 0x3A4174u;
    SET_GPR_U32(ctx, 31, 0x3A417Cu);
    ctx->pc = 0x3A4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4174u;
    // 0x3a4178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E28u, 0x3A4174u, 0x3A417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A417Cu;
label_3a417c:
    // 0x3a417c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3a417cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3a4180:
    // 0x3a4180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a4180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4184: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3a4184u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a4188: 0x0  nop
    ctx->pc = 0x3a4188u;
    // NOP
    // 0x3a418c: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x3A418Cu;
    {
        const bool branch_taken_0x3a418c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A418Cu;
        // 0x3a4190: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a418c) {
            ctx->pc = 0x3A42DCu;
            goto label_3a42dc;
        }
    }
    ctx->pc = 0x3A4194u;
    // 0x3a4194: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x3a4194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3a4198: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A4198u;
    {
        const bool branch_taken_0x3a4198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4198u;
        // 0x3a419c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4198) {
            ctx->pc = 0x3A41C4u;
            goto label_3a41c4;
        }
    }
    ctx->pc = 0x3A41A0u;
    // 0x3a41a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a41a4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3a41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a41a8:
    // 0x3a41a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a41ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a41acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a41b0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3a41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3a41b4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x3a41b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3a41b8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a41b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3a41bc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A41BCu;
    {
        const bool branch_taken_0x3a41bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a41bc) {
            ctx->pc = 0x3A41A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a41a8;
        }
    }
    ctx->pc = 0x3A41C4u;
label_3a41c4:
    // 0x3a41c4: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A41C4u;
    {
        const bool branch_taken_0x3a41c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41C4u;
        // 0x3a41c8: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41c4) {
            ctx->pc = 0x3A42D0u;
            goto label_3a42d0;
        }
    }
    ctx->pc = 0x3A41CCu;
    // 0x3a41cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a41d0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a41d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a41d8: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A41D8u;
    {
        const bool branch_taken_0x3a41d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41D8u;
        // 0x3a41dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41d8) {
            ctx->pc = 0x3A420Cu;
            goto label_3a420c;
        }
    }
    ctx->pc = 0x3A41E0u;
    // 0x3a41e0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x3a41e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a41e4: 0x0  nop
    ctx->pc = 0x3a41e4u;
    // NOP
label_3a41e8:
    // 0x3a41e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a41e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a41ec: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x3a41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x3a41f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a41f4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a41f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a41fc: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A41FCu;
    {
        const bool branch_taken_0x3a41fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a41fc) {
            ctx->pc = 0x3A41E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a41e8;
        }
    }
    ctx->pc = 0x3A4204u;
    // 0x3a4204: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4204u;
    {
        const bool branch_taken_0x3a4204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4204u;
        // 0x3a4208: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4204) {
            ctx->pc = 0x3A4214u;
            goto label_3a4214;
        }
    }
    ctx->pc = 0x3A420Cu;
label_3a420c:
    // 0x3a420c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x3a420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a4210: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x3a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_3a4214:
    // 0x3a4214: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a4214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4218: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x3a4218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a421c: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x3A421Cu;
    {
        const bool branch_taken_0x3a421c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A421Cu;
        // 0x3a4220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a421c) {
            ctx->pc = 0x3A3F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3f74;
        }
    }
    ctx->pc = 0x3A4224u;
    // 0x3a4224: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x3a4224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a4228: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x3a4228u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a422c: 0x0  nop
    ctx->pc = 0x3a422cu;
    // NOP
label_3a4230:
    // 0x3a4230: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x3a4230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3a4234: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x3a4234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x3a4238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a423c: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x3a423cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x3a4240: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a4244: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x3a4244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3a4248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a424c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a424cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a4250: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x3a4250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3a4254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a4254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4258: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a4258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a425c: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A425Cu;
    {
        const bool branch_taken_0x3a425c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A425Cu;
        // 0x3a4260: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a425c) {
            ctx->pc = 0x3A42ACu;
            goto label_3a42ac;
        }
    }
    ctx->pc = 0x3A4264u;
    // 0x3a4264: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3a4264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a4268: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x3a4268u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a426c: 0x0  nop
    ctx->pc = 0x3a426cu;
    // NOP
label_3a4270:
    // 0x3a4270: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x3a4270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3a4274: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x3a4274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3a4278: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a4278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a427c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a427cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a4280: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3a4284: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a4284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a4288: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3a4288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a428c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a4290: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4294: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x3a4294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a4298: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a4298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a429c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A429Cu;
    {
        const bool branch_taken_0x3a429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A429Cu;
        // 0x3a42a0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a429c) {
            ctx->pc = 0x3A4270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4270;
        }
    }
    ctx->pc = 0x3A42A4u;
    // 0x3a42a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A42A4u;
    {
        const bool branch_taken_0x3a42a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42A4u;
        // 0x3a42a8: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42a4) {
            ctx->pc = 0x3A42B8u;
            goto label_3a42b8;
        }
    }
    ctx->pc = 0x3A42ACu;
label_3a42ac:
    // 0x3a42ac: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3a42acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a42b0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x3a42b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a42b4: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x3a42b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_3a42b8:
    // 0x3a42b8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3a42b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a42bc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x3a42bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a42c0: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3A42C0u;
    {
        const bool branch_taken_0x3a42c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42C0u;
        // 0x3a42c4: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42c0) {
            ctx->pc = 0x3A4230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4230;
        }
    }
    ctx->pc = 0x3A42C8u;
    // 0x3a42c8: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x3A42C8u;
    {
        const bool branch_taken_0x3a42c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42C8u;
        // 0x3a42cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42c8) {
            ctx->pc = 0x3A3F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3f74;
        }
    }
    ctx->pc = 0x3A42D0u;
label_3a42d0:
    // 0x3a42d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a42d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a42d4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3a42d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a42d8: 0x0  nop
    ctx->pc = 0x3a42d8u;
    // NOP
label_3a42dc:
    // 0x3a42dc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3A42DCu;
    {
        const bool branch_taken_0x3a42dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42DCu;
        // 0x3a42e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42dc) {
            ctx->pc = 0x3A4324u;
            goto label_3a4324;
        }
    }
    ctx->pc = 0x3A42E4u;
    // 0x3a42e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3a42e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3a42e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3a42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a42ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a42f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a42f4: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A42F4u;
    {
        const bool branch_taken_0x3a42f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42F4u;
        // 0x3a42f8: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42f4) {
            ctx->pc = 0x3A43A8u;
            goto label_3a43a8;
        }
    }
    ctx->pc = 0x3A42FCu;
    // 0x3a42fc: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x3a42fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_3a4300:
    // 0x3a4300: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3a4300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3a4304: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x3a4304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x3a4308: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3a4308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a430c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a4310: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a4310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4314: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4314u;
    {
        const bool branch_taken_0x3a4314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4314) {
            ctx->pc = 0x3A4300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4300;
        }
    }
    ctx->pc = 0x3A431Cu;
    // 0x3a431c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A431Cu;
    {
        const bool branch_taken_0x3a431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a431c) {
            ctx->pc = 0x3A43ACu;
            goto label_3a43ac;
        }
    }
    ctx->pc = 0x3A4324u;
label_3a4324:
    // 0x3a4324: 0xc0e938a  jal         func_3A4E28
    ctx->pc = 0x3A4324u;
    SET_GPR_U32(ctx, 31, 0x3A432Cu);
    ctx->pc = 0x3A4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4324u;
    // 0x3a4328: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E28u, 0x3A4324u, 0x3A432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A432Cu;
label_3a432c:
    // 0x3a432c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x3a432cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x3a4330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a4330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4334: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a4334u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a4338: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x3a4338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a433c: 0x0  nop
    ctx->pc = 0x3a433cu;
    // NOP
    // 0x3a4340: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x3A4340u;
    {
        const bool branch_taken_0x3a4340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4340u;
        // 0x3a4344: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4340) {
            ctx->pc = 0x3A4394u;
            goto label_3a4394;
        }
    }
    ctx->pc = 0x3A4348u;
    // 0x3a4348: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3a4348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3a434c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a434cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4350: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a4350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a4354: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3a4354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a4358: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3a4358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a435c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3a4360: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x3a4360u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x3a4364: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a4368: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a4368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a436c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a436cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a4370: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a4370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a4374: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x3a4374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a4378: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3a4378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a437c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a437cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a4380: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3a4380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3a4384: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a4388: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3a4388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3a438c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A438Cu;
    {
        const bool branch_taken_0x3a438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A438Cu;
        // 0x3a4390: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a438c) {
            ctx->pc = 0x3A43ACu;
            goto label_3a43ac;
        }
    }
    ctx->pc = 0x3A4394u;
label_3a4394:
    // 0x3a4394: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x3a4394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x3a4398: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a439c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a43a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A43A0u;
    {
        const bool branch_taken_0x3a43a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43A0u;
        // 0x3a43a4: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43a0) {
            ctx->pc = 0x3A43ACu;
            goto label_3a43ac;
        }
    }
    ctx->pc = 0x3A43A8u;
label_3a43a8:
    // 0x3a43a8: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x3a43a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_3a43ac:
    // 0x3a43ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a43acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a43b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a43b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a43b4: 0xc0e938a  jal         func_3A4E28
    ctx->pc = 0x3A43B4u;
    SET_GPR_U32(ctx, 31, 0x3A43BCu);
    ctx->pc = 0x3A43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A43B4u;
    // 0x3a43b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E28u, 0x3A43B4u, 0x3A43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A43BCu;
label_3a43bc:
    // 0x3a43bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a43bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a43c0: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A43C0u;
    {
        const bool branch_taken_0x3a43c0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x3A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43C0u;
        // 0x3a43c4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43c0) {
            ctx->pc = 0x3A4408u;
            goto label_3a4408;
        }
    }
    ctx->pc = 0x3A43C8u;
    // 0x3a43c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a43cc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3a43ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3a43d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a43d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a43d4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x3a43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a43d8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3a43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3a43dc: 0x0  nop
    ctx->pc = 0x3a43dcu;
    // NOP
label_3a43e0:
    // 0x3a43e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a43e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a43e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a43e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a43e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a43ec: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3a43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3a43f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3a43f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3a43f4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3a43f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a43f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3a43f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a43fc: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A43FCu;
    {
        const bool branch_taken_0x3a43fc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3A4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43FCu;
        // 0x3a4400: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43fc) {
            ctx->pc = 0x3A43E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a43e0;
        }
    }
    ctx->pc = 0x3A4404u;
    // 0x3a4404: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a4404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4408:
    // 0x3a4408: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A4408u;
    {
        const bool branch_taken_0x3a4408 = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x3a4408) {
            ctx->pc = 0x3A440Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4408u;
            // 0x3a440c: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A44A8u;
            goto label_3a44a8;
        }
    }
    ctx->pc = 0x3A4410u;
    // 0x3a4410: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a4410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a4414: 0x0  nop
    ctx->pc = 0x3a4414u;
    // NOP
label_3a4418:
    // 0x3a4418: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x3a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x3a441c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a441cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a4420: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A4420u;
    {
        const bool branch_taken_0x3a4420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4420u;
        // 0x3a4424: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4420) {
            ctx->pc = 0x3A4488u;
            goto label_3a4488;
        }
    }
    ctx->pc = 0x3A4428u;
    // 0x3a4428: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x3a4428u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3a442c: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A442Cu;
    {
        const bool branch_taken_0x3a442c = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x3A4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A442Cu;
        // 0x3a4430: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a442c) {
            ctx->pc = 0x3A448Cu;
            goto label_3a448c;
        }
    }
    ctx->pc = 0x3A4434u;
    // 0x3a4434: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x3a4434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a4438: 0x3c0b0046  lui         $t3, 0x46
    ctx->pc = 0x3a4438u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)70 << 16));
    // 0x3a443c: 0x0  nop
    ctx->pc = 0x3a443cu;
    // NOP
label_3a4440:
    // 0x3a4440: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x3a4440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3a4444: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3a4444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3a4448: 0x2562efa0  addiu       $v0, $t3, -0x1060
    ctx->pc = 0x3a4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963104));
    // 0x3a444c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a444cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4450: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a4454: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3a4454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3a4458: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3a4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a445c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a445cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a4460: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3a4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4464: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x3a4464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3a4468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a4468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a446c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A446Cu;
    {
        const bool branch_taken_0x3a446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A446Cu;
        // 0x3a4470: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a446c) {
            ctx->pc = 0x3A4490u;
            goto label_3a4490;
        }
    }
    ctx->pc = 0x3A4474u;
    // 0x3a4474: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x3a4474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3a4478: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3A4478u;
    {
        const bool branch_taken_0x3a4478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4478u;
        // 0x3a447c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4478) {
            ctx->pc = 0x3A4440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4440;
        }
    }
    ctx->pc = 0x3A4480u;
    // 0x3a4480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4480u;
    {
        const bool branch_taken_0x3a4480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4480u;
        // 0x3a4484: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4480) {
            ctx->pc = 0x3A4498u;
            goto label_3a4498;
        }
    }
    ctx->pc = 0x3A4488u;
label_3a4488:
    // 0x3a4488: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x3a4488u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3a448c:
    // 0x3a448c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x3a448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3a4490:
    // 0x3a4490: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x3a4490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3a4494: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a4494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a4498:
    // 0x3a4498: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a449c: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A449Cu;
    {
        const bool branch_taken_0x3a449c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3A44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A449Cu;
        // 0x3a44a0: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a449c) {
            ctx->pc = 0x3A4418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4418;
        }
    }
    ctx->pc = 0x3A44A4u;
    // 0x3a44a4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x3a44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_3a44a8:
    // 0x3a44a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A44A8u;
    {
        const bool branch_taken_0x3a44a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44A8u;
        // 0x3a44ac: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44a8) {
            ctx->pc = 0x3A44C8u;
            goto label_3a44c8;
        }
    }
    ctx->pc = 0x3A44B0u;
    // 0x3a44b0: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A44B0u;
    {
        const bool branch_taken_0x3a44b0 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x3a44b0) {
            ctx->pc = 0x3A44B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A44B0u;
            // 0x3a44b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4530u;
            goto label_3a4530;
        }
    }
    ctx->pc = 0x3A44B8u;
    // 0x3a44b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A44B8u;
    {
        const bool branch_taken_0x3a44b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44B8u;
        // 0x3a44bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44b8) {
            ctx->pc = 0x3A44E0u;
            goto label_3a44e0;
        }
    }
    ctx->pc = 0x3A44C0u;
    // 0x3a44c0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3A44C0u;
    {
        const bool branch_taken_0x3a44c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44C0u;
        // 0x3a44c4: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44c0) {
            ctx->pc = 0x3A46F4u;
            goto label_3a46f4;
        }
    }
    ctx->pc = 0x3A44C8u;
label_3a44c8:
    // 0x3a44c8: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x3a44c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x3a44cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a44d0: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3A44D0u;
    {
        const bool branch_taken_0x3a44d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44D0u;
        // 0x3a44d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44d0) {
            ctx->pc = 0x3A45D4u;
            goto label_3a45d4;
        }
    }
    ctx->pc = 0x3A44D8u;
    // 0x3a44d8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x3A44D8u;
    {
        const bool branch_taken_0x3a44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44D8u;
        // 0x3a44dc: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44d8) {
            ctx->pc = 0x3A46F4u;
            goto label_3a46f4;
        }
    }
    ctx->pc = 0x3A44E0u;
label_3a44e0:
    // 0x3a44e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a44e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a44e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a44e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a44e8: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3A44E8u;
    {
        const bool branch_taken_0x3a44e8 = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x3a44e8) {
            ctx->pc = 0x3A44ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A44E8u;
            // 0x3a44ec: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4518u;
            goto label_3a4518;
        }
    }
    ctx->pc = 0x3A44F0u;
    // 0x3a44f0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a44f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a44f4: 0x0  nop
    ctx->pc = 0x3a44f4u;
    // NOP
label_3a44f8:
    // 0x3a44f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a44fc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a4500: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a4500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a4504: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a4504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4508: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3a4508u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a450c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A450Cu;
    {
        const bool branch_taken_0x3a450c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x3a450c) {
            ctx->pc = 0x3A44F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a44f8;
        }
    }
    ctx->pc = 0x3A4514u;
    // 0x3a4514: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x3a4514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_3a4518:
    // 0x3a4518: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x3a4518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3a451c: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x3A451Cu;
    {
        const bool branch_taken_0x3a451c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A451Cu;
        // 0x3a4520: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a451c) {
            ctx->pc = 0x3A46F0u;
            goto label_3a46f0;
        }
    }
    ctx->pc = 0x3A4524u;
    // 0x3a4524: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3a4524u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3a4528: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3A4528u;
    {
        const bool branch_taken_0x3a4528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4528u;
        // 0x3a452c: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4528) {
            ctx->pc = 0x3A46F0u;
            goto label_3a46f0;
        }
    }
    ctx->pc = 0x3A4530u;
label_3a4530:
    // 0x3a4530: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a4530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a4534: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3A4534u;
    {
        const bool branch_taken_0x3a4534 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x3A4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4534u;
        // 0x3a4538: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4534) {
            ctx->pc = 0x3A456Cu;
            goto label_3a456c;
        }
    }
    ctx->pc = 0x3A453Cu;
    // 0x3a453c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a453cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a4540: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x3a4540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a4544: 0x0  nop
    ctx->pc = 0x3a4544u;
    // NOP
label_3a4548:
    // 0x3a4548: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a4548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a454c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a4550: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a4550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a4554: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a4554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4558: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3a4558u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a455c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A455Cu;
    {
        const bool branch_taken_0x3a455c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x3a455c) {
            ctx->pc = 0x3A4548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4548;
        }
    }
    ctx->pc = 0x3A4564u;
    // 0x3a4564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4564u;
    {
        const bool branch_taken_0x3a4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4564u;
        // 0x3a4568: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4564) {
            ctx->pc = 0x3A4574u;
            goto label_3a4574;
        }
    }
    ctx->pc = 0x3A456Cu;
label_3a456c:
    // 0x3a456c: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x3a456cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a4570: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x3a4570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_3a4574:
    // 0x3a4574: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x3a4574u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3a4578: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4578u;
    {
        const bool branch_taken_0x3a4578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4578) {
            ctx->pc = 0x3A457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4578u;
            // 0x3a457c: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A458Cu;
            goto label_3a458c;
        }
    }
    ctx->pc = 0x3A4580u;
    // 0x3a4580: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3a4580u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3a4584: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x3a4584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x3a4588: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3a4588u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3a458c:
    // 0x3a458c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A458Cu;
    {
        const bool branch_taken_0x3a458c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A458Cu;
        // 0x3a4590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a458c) {
            ctx->pc = 0x3A45B8u;
            goto label_3a45b8;
        }
    }
    ctx->pc = 0x3A4594u;
    // 0x3a4594: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a4594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a4598:
    // 0x3a4598: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a4598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a459c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a45a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a45a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a45a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a45a8: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x3a45a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a45ac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3a45acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a45b0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A45B0u;
    {
        const bool branch_taken_0x3a45b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a45b0) {
            ctx->pc = 0x3A4598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4598;
        }
    }
    ctx->pc = 0x3A45B8u;
label_3a45b8:
    // 0x3a45b8: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x3a45b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x3a45bc: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x3a45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3a45c0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3A45C0u;
    {
        const bool branch_taken_0x3a45c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45C0u;
        // 0x3a45c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45c0) {
            ctx->pc = 0x3A46F0u;
            goto label_3a46f0;
        }
    }
    ctx->pc = 0x3A45C8u;
    // 0x3a45c8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3a45c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3a45cc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3A45CCu;
    {
        const bool branch_taken_0x3a45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45CCu;
        // 0x3a45d0: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45cc) {
            ctx->pc = 0x3A46F0u;
            goto label_3a46f0;
        }
    }
    ctx->pc = 0x3A45D4u;
label_3a45d4:
    // 0x3a45d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a45d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a45d8: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A45D8u;
    {
        const bool branch_taken_0x3a45d8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x3A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45D8u;
        // 0x3a45dc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45d8) {
            ctx->pc = 0x3A4628u;
            goto label_3a4628;
        }
    }
    ctx->pc = 0x3A45E0u;
    // 0x3a45e0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a45e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a45e4: 0x0  nop
    ctx->pc = 0x3a45e4u;
    // NOP
label_3a45e8:
    // 0x3a45e8: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x3a45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a45ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a45f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a45f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a45f8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3a45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3a45fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3a45fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4600: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4604: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a4604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4608: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3a4608u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a460c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a460cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a4610: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a4610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a4614: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3a4614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a4618: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3A4618u;
    {
        const bool branch_taken_0x3a4618 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3A461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4618u;
        // 0x3a461c: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4618) {
            ctx->pc = 0x3A45E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a45e8;
        }
    }
    ctx->pc = 0x3A4620u;
    // 0x3a4620: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a4620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4624: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3a4624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a4628:
    // 0x3a4628: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A4628u;
    {
        const bool branch_taken_0x3a4628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4628) {
            ctx->pc = 0x3A462Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4628u;
            // 0x3a462c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4678u;
            goto label_3a4678;
        }
    }
    ctx->pc = 0x3A4630u;
    // 0x3a4630: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a4630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a4634: 0x0  nop
    ctx->pc = 0x3a4634u;
    // NOP
label_3a4638:
    // 0x3a4638: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x3a4638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a463c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a463cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a4640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a4640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a4644: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a4648: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3a4648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3a464c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3a464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4650: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4654: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a4654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4658: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x3a4658u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a465c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3a465cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a4660: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a4660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a4664: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a4664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a4668: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3a4668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a466c: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A466Cu;
    {
        const bool branch_taken_0x3a466c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A466Cu;
        // 0x3a4670: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a466c) {
            ctx->pc = 0x3A4638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4638;
        }
    }
    ctx->pc = 0x3A4674u;
    // 0x3a4674: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a4674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4678:
    // 0x3a4678: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a4678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a467c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3a467cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a4680: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A4680u;
    {
        const bool branch_taken_0x3a4680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4680u;
        // 0x3a4684: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4680) {
            ctx->pc = 0x3A46B8u;
            goto label_3a46b8;
        }
    }
    ctx->pc = 0x3A4688u;
    // 0x3a4688: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a4688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a468c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3a468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a4690:
    // 0x3a4690: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a4690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a4694: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a4698: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a4698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a469c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a46a0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x3a46a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a46a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3a46a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a46a8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A46A8u;
    {
        const bool branch_taken_0x3a46a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a46a8) {
            ctx->pc = 0x3A4690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4690;
        }
    }
    ctx->pc = 0x3A46B0u;
    // 0x3a46b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A46B0u;
    {
        const bool branch_taken_0x3a46b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46B0u;
        // 0x3a46b4: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46b0) {
            ctx->pc = 0x3A46C0u;
            goto label_3a46c0;
        }
    }
    ctx->pc = 0x3A46B8u;
label_3a46b8:
    // 0x3a46b8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3a46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a46bc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x3a46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_3a46c0:
    // 0x3a46c0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A46C0u;
    {
        const bool branch_taken_0x3a46c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a46c0) {
            ctx->pc = 0x3A46C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A46C0u;
            // 0x3a46c4: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A46D8u;
            goto label_3a46d8;
        }
    }
    ctx->pc = 0x3A46C8u;
    // 0x3a46c8: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x3a46c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x3a46cc: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x3a46ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x3a46d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A46D0u;
    {
        const bool branch_taken_0x3a46d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46D0u;
        // 0x3a46d4: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46d0) {
            ctx->pc = 0x3A46ECu;
            goto label_3a46ec;
        }
    }
    ctx->pc = 0x3A46D8u;
label_3a46d8:
    // 0x3a46d8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a46d8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3a46dc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3a46dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3a46e0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x3a46e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x3a46e4: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x3a46e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x3a46e8: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x3a46e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_3a46ec:
    // 0x3a46ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a46ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a46f0:
    // 0x3a46f0: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x3a46f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_3a46f4:
    // 0x3a46f4: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x3a46f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3a46f8: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x3a46f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3a46fc: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x3a46fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3a4700: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x3a4700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3a4704: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x3a4704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3a4708: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x3a4708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3a470c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x3a470cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3a4710: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x3a4710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3a4714: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x3a4714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3a4718: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x3a4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a471c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A471Cu;
        // 0x3a4720: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4724u;
    // 0x3a4724: 0x0  nop
    ctx->pc = 0x3a4724u;
    // NOP
    ctx->pc = 0x3a4728u;
}
