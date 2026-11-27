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

// Function: func_00343C18
// Address: 0x343c18 - 0x343d68
void func_00343C18_0x343c18(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343C18_0x343c18");
#endif

    if (__builtin_expect(ctx->pc != 0x343c18u, 0)) {
        switch (ctx->pc) {
            case 0x343c54u: goto label_343c54;
            case 0x343c64u: goto label_343c64;
            case 0x343c74u: goto label_343c74;
            case 0x343c84u: goto label_343c84;
            case 0x343cdcu: goto label_343cdc;
            case 0x343cecu: goto label_343cec;
            case 0x343cfcu: goto label_343cfc;
            case 0x343d0cu: goto label_343d0c;
            case 0x343d1cu: goto label_343d1c;
            case 0x343d2cu: goto label_343d2c;
            case 0x343d3cu: goto label_343d3c;
            default: break;
        }
    }


    // 0x343c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x343c1c: 0x24050008  addiu       $a1, $zero, 0x8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x343c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343c24: 0xc0802d  daddu       $s0, $a2, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x343c2c: 0xe0882d  daddu       $s1, $a3, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x343c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x343c34: 0x24130001  addiu       $s3, $zero, 0x1
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x343c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x343c3c: 0x2118018  mult        $s0, $s0, $s1
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x343c40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x343c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x343c44: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c48: 0x8c92003c  lw          $s2, 0x3C($a0)
    ctx->pc = 0x343c48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x343c4c: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343C54u);
    ctx->pc = 0x343C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343C4Cu;
    // 0x343c50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343c54u)) {
        return;
    }
label_343c54:
    // 0x343c54: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c58: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c5c: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343C64u);
    ctx->pc = 0x343C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343C5Cu;
    // 0x343c60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343c64u)) {
        return;
    }
label_343c64:
    // 0x343c64: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c68: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c6c: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343C74u);
    ctx->pc = 0x343C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343C6Cu;
    // 0x343c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343c74u)) {
        return;
    }
label_343c74:
    // 0x343c74: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c78: 0x24050017  addiu       $a1, $zero, 0x17
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x343c7c: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343C84u);
    ctx->pc = 0x343C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343C7Cu;
    // 0x343c80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343c84u)) {
        return;
    }
label_343c84:
    // 0x343c84: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c88: 0x101140  sll         $v0, $s0, 5
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x343c8c: 0x3c013f00  lui         $at, 0x3F00
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x343c90: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343c94: 0x501023  subu        $v0, $v0, $s0
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x343c98: 0x21080  sll         $v0, $v0, 2
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x343c9c: 0x501021  addu        $v0, $v0, $s0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x343ca0: 0x210c0  sll         $v0, $v0, 3
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x343ca4: 0x44820000  mtc1        $v0, $f0
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343ca8: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x343cac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x343cb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x343cb4: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x343cb8: 0x44820800  mtc1        $v0, $f1
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343cbc: 0x46800860  cvt.s.w     $f1, $f1
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x343cc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343cc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x343CC4u;
    {
        const bool branch_taken_0x343cc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x343CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CC4u;
        // 0x343cc8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343cc4) {
            ctx->pc = 0x343CD0u;
            goto label_343cd0;
        }
    }
    // 0x343ccc: 0x982d  daddu       $s3, $zero, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343cd0:
    // 0x343cd0: 0x539823  subu        $s3, $v0, $s3
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x343cd4: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343CDCu);
    ctx->pc = 0x343CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CD4u;
    // 0x343cd8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343cdcu)) {
        return;
    }
label_343cdc:
    // 0x343cdc: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ce0: 0x260302d  daddu       $a2, $s3, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ce4: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343CECu);
    ctx->pc = 0x343CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CE4u;
    // 0x343ce8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343cecu)) {
        return;
    }
label_343cec:
    // 0x343cec: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343cf0: 0x260302d  daddu       $a2, $s3, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343cf4: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343CFCu);
    ctx->pc = 0x343CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CF4u;
    // 0x343cf8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343cfcu)) {
        return;
    }
label_343cfc:
    // 0x343cfc: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d00: 0x2405000f  addiu       $a1, $zero, 0xF
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x343d04: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343D0Cu);
    ctx->pc = 0x343D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D04u;
    // 0x343d08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343d0cu)) {
        return;
    }
label_343d0c:
    // 0x343d0c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d10: 0x24050033  addiu       $a1, $zero, 0x33
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x343d14: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343D1Cu);
    ctx->pc = 0x343D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D14u;
    // 0x343d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343d1cu)) {
        return;
    }
label_343d1c:
    // 0x343d1c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d20: 0x2405000e  addiu       $a1, $zero, 0xE
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x343d24: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343D2Cu);
    ctx->pc = 0x343D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D24u;
    // 0x343d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343d2cu)) {
        return;
    }
label_343d2c:
    // 0x343d2c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d30: 0x2405001c  addiu       $a1, $zero, 0x1C
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x343d34: 0xc0d67b0  jal         func_359EC0
    SET_GPR_U32(ctx, 31, 0x343D3Cu);
    ctx->pc = 0x343D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D34u;
    // 0x343d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_SetCond_0x359ec0, 0x359ec0u, 0x343d3cu)) {
        return;
    }
label_343d3c:
    // 0x343d3c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343d44: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x343d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343d4c: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343d54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343d54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343d5c: 0x80d40b6  j           func_3502D8
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D5Cu;
    // 0x343d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x343D5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x343d64: 0x0  nop
    // NOP
    ctx->pc = 0x343d68u;
}