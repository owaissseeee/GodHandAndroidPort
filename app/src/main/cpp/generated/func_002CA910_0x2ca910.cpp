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

// Function: func_002CA910
// Address: 0x2ca910 - 0x2caa00
void func_002CA910_0x2ca910(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CA910_0x2ca910");
#endif

    if (__builtin_expect(ctx->pc != 0x2ca910u, 0)) {
        switch (ctx->pc) {
            case 0x2ca954u: goto label_2ca954;
            case 0x2ca95cu: goto label_2ca95c;
            case 0x2ca964u: goto label_2ca964;
            case 0x2ca970u: goto label_2ca970;
            case 0x2ca97cu: goto label_2ca97c;
            case 0x2ca998u: goto label_2ca998;
            case 0x2ca9c0u: goto label_2ca9c0;
            case 0x2ca9d0u: goto label_2ca9d0;
            default: break;
        }
    }


    // 0x2ca910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ca914: 0x3c02ff7f  lui         $v0, 0xFF7F
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x2ca918: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ca918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ca91c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ca920: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ca920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ca924: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ca92c: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca930: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ca930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ca934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca938: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x2ca938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ca93c: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2ca93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2ca940: 0xc23024  and         $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2ca944: 0x621824  and         $v1, $v1, $v0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca948: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x2ca948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
    // 0x2ca94c: 0xc0b312e  jal         func_2CC4B8
    SET_GPR_U32(ctx, 31, 0x2CA954u);
    ctx->pc = 0x2CA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA94Cu;
    // 0x2ca950: 0xae2300ac  sw          $v1, 0xAC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_GetSeData_0x2cc4b8, 0x2cc4b8u, 0x2ca954u)) {
        return;
    }
label_2ca954:
    // 0x2ca954: 0xc0b3cc4  jal         func_2CF310
    SET_GPR_U32(ctx, 31, 0x2CA95Cu);
    ctx->pc = 0x2CA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA954u;
    // 0x2ca958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSeData_Release_0x2cf310, 0x2cf310u, 0x2ca95cu)) {
        return;
    }
label_2ca95c:
    // 0x2ca95c: 0xc0b2c82  jal         func_2CB208
    SET_GPR_U32(ctx, 31, 0x2CA964u);
    ctx->pc = 0x2CA960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA95Cu;
    // 0x2ca960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CB208_0x2cb208, 0x2cb208u, 0x2ca964u)) {
        return;
    }
label_2ca964:
    // 0x2ca964: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ca968: 0xc0b35e0  jal         func_2CD780
    SET_GPR_U32(ctx, 31, 0x2CA970u);
    ctx->pc = 0x2CA96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA968u;
    // 0x2ca96c: 0x248436a0  addiu       $a0, $a0, 0x36A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndMemHeap_Close_0x2cd780, 0x2cd780u, 0x2ca970u)) {
        return;
    }
label_2ca970:
    // 0x2ca970: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ca974: 0xc0b35e0  jal         func_2CD780
    SET_GPR_U32(ctx, 31, 0x2CA97Cu);
    ctx->pc = 0x2CA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA974u;
    // 0x2ca978: 0x24843310  addiu       $a0, $a0, 0x3310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndMemHeap_Close_0x2cd780, 0x2cd780u, 0x2ca97cu)) {
        return;
    }
label_2ca97c:
    // 0x2ca97c: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2ca97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ca980: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA980u;
    {
        const bool branch_taken_0x2ca980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA980u;
        // 0x2ca984: 0x3c130001  lui         $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca980) {
            ctx->pc = 0x2CA9DCu;
            goto label_2ca9dc;
        }
    }
    // 0x2ca988: 0x3c12fffe  lui         $s2, 0xFFFE
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65534 << 16));
    // 0x2ca98c: 0x3673ff00  ori         $s3, $s3, 0xFF00
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65280);
    // 0x2ca990: 0x365200ff  ori         $s2, $s2, 0xFF
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)255);
    // 0x2ca994: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2ca994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2ca998:
    // 0x2ca998: 0x30620100  andi        $v0, $v1, 0x100
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2ca99c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CA99Cu;
    {
        const bool branch_taken_0x2ca99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA99Cu;
        // 0x2ca9a0: 0x731024  and         $v0, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca99c) {
            ctx->pc = 0x2CA9C8u;
            goto label_2ca9c8;
        }
    }
    // 0x2ca9a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CA9A4u;
    {
        const bool branch_taken_0x2ca9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9A4u;
        // 0x2ca9a8: 0x721024  and         $v0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9a4) {
            ctx->pc = 0x2CA9D0u;
            goto label_2ca9d0;
        }
    }
    // 0x2ca9ac: 0x3c0141f0  lui         $at, 0x41F0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca9b0: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca9b4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2ca9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x2ca9b8: 0xc0b351c  jal         func_2CD470
    SET_GPR_U32(ctx, 31, 0x2CA9C0u);
    ctx->pc = 0x2CA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9B8u;
    // 0x2ca9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndBgmNode_FadeIn_0x2cd470, 0x2cd470u, 0x2ca9c0u)) {
        return;
    }
label_2ca9c0:
    // 0x2ca9c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA9C0u;
    {
        const bool branch_taken_0x2ca9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9C0u;
        // 0x2ca9c4: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca9c0) {
            ctx->pc = 0x2CA9D4u;
            goto label_2ca9d4;
        }
    }
label_2ca9c8:
    // 0x2ca9c8: 0xc0b32c4  jal         func_2CCB10
    SET_GPR_U32(ctx, 31, 0x2CA9D0u);
    ctx->pc = 0x2CA9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9C8u;
    // 0x2ca9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndBgmNode_Release_0x2ccb10, 0x2ccb10u, 0x2ca9d0u)) {
        return;
    }
label_2ca9d0:
    // 0x2ca9d0: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2ca9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2ca9d4:
    // 0x2ca9d4: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2CA9D4u;
    {
        const bool branch_taken_0x2ca9d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9d4) {
            ctx->pc = 0x2CA9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA9D4u;
            // 0x2ca9d8: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca998;
        }
    }
label_2ca9dc:
    // 0x2ca9dc: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x2ca9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x2ca9e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ca9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca9e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ca9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca9ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ca9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9F4u;
        // 0x2ca9f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2ca9fc: 0x0  nop
    // NOP
    ctx->pc = 0x2caa00u;
}