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

// Function: func_002B21F0
// Address: 0x2b21f0 - 0x2b22e0
void func_002B21F0_0x2b21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B21F0_0x2b21f0");
#endif

    switch (ctx->pc) {
        case 0x2b2220u: goto label_2b2220;
        case 0x2b2230u: goto label_2b2230;
        case 0x2b2268u: goto label_2b2268;
        default: break;
    }

    ctx->pc = 0x2b21f0u;

    // 0x2b21f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b21f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b21f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b21fc: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2b21fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2b2200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b2204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b2208: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x2b2208u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b220c: 0x8e0423a4  lw          $a0, 0x23A4($s0)
    ctx->pc = 0x2b220cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b2210: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b2214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2218: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B2218u;
    SET_GPR_U32(ctx, 31, 0x2B2220u);
    ctx->pc = 0x2B221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2218u;
    // 0x2b221c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B2218u, 0x2B2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2220u;
label_2b2220:
    // 0x2b2220: 0x8e0423a4  lw          $a0, 0x23A4($s0)
    ctx->pc = 0x2b2220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9124)));
    // 0x2b2224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b2224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2228: 0xc0abac0  jal         func_2AEB00
    ctx->pc = 0x2B2228u;
    SET_GPR_U32(ctx, 31, 0x2B2230u);
    ctx->pc = 0x2B222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2228u;
    // 0x2b222c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB00u, 0x2B2228u, 0x2B2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2230u;
label_2b2230:
    // 0x2b2230: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2b2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b2234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b2234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2238: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b2238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b223c: 0xa6200094  sh          $zero, 0x94($s1)
    ctx->pc = 0x2b223cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b2240: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2b2240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2b2244: 0xa6220088  sh          $v0, 0x88($s1)
    ctx->pc = 0x2b2244u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b2248: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2b2248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2b224c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2b224cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b2250: 0xa2200070  sb          $zero, 0x70($s1)
    ctx->pc = 0x2b2250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b2254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2258: 0xa22000a4  sb          $zero, 0xA4($s1)
    ctx->pc = 0x2b2258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b225c: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2b2260: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2b2260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x2b2264: 0x0  nop
    ctx->pc = 0x2b2264u;
    // NOP
label_2b2268:
    // 0x2b2268: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2b2268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b226c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b2270: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2b2270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b2274: 0x0  nop
    ctx->pc = 0x2b2274u;
    // NOP
    // 0x2b2278: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B2278u;
    {
        const bool branch_taken_0x2b2278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2278u;
        // 0x2b227c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2278) {
            ctx->pc = 0x2B2268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2268;
        }
    }
    ctx->pc = 0x2B2280u;
    // 0x2b2280: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b228c: 0xa6320064  sh          $s2, 0x64($s1)
    ctx->pc = 0x2b228cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 18));
    // 0x2b2290: 0xae330074  sw          $s3, 0x74($s1)
    ctx->pc = 0x2b2290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 19));
    // 0x2b2294: 0xae33008c  sw          $s3, 0x8C($s1)
    ctx->pc = 0x2b2294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 19));
    // 0x2b2298: 0xae33007c  sw          $s3, 0x7C($s1)
    ctx->pc = 0x2b2298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 19));
    // 0x2b229c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2b229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2b22a0: 0xa2220030  sb          $v0, 0x30($s1)
    ctx->pc = 0x2b22a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b22a4: 0xae250080  sw          $a1, 0x80($s1)
    ctx->pc = 0x2b22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 5));
    // 0x2b22a8: 0xa220003c  sb          $zero, 0x3C($s1)
    ctx->pc = 0x2b22a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b22ac: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2b22acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2b22b0: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2b22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2b22b4: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x2b22b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x2b22b8: 0xae250078  sw          $a1, 0x78($s1)
    ctx->pc = 0x2b22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 5));
    // 0x2b22bc: 0xa6200038  sh          $zero, 0x38($s1)
    ctx->pc = 0x2b22bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b22c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b22c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b22c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b22c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b22c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b22c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b22cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b22ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b22d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b22d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b22d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B22D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22D4u;
        // 0x2b22d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B22DCu;
    // 0x2b22dc: 0x0  nop
    ctx->pc = 0x2b22dcu;
    // NOP
    ctx->pc = 0x2b22e0u;
}
