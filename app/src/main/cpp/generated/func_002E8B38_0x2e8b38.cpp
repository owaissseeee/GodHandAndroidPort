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

// Function: func_002E8B38
// Address: 0x2e8b38 - 0x2e8ee8
void func_002E8B38_0x2e8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E8B38_0x2e8b38");
#endif

    switch (ctx->pc) {
        case 0x2e8b74u: goto label_2e8b74;
        case 0x2e8eb8u: goto label_2e8eb8;
        default: break;
    }

    ctx->pc = 0x2e8b38u;

    // 0x2e8b38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e8b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e8b3c: 0x24040150  addiu       $a0, $zero, 0x150
    ctx->pc = 0x2e8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2e8b40: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e8b44: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e8b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2e8b48: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e8b48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b4c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2e8b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2e8b50: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e8b54: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e8b58: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e8b5c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e8b60: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e8b64: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e8b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8b6c: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2E8B6Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B74u);
    ctx->pc = 0x2E8B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B6Cu;
    // 0x2e8b70: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2E8B6Cu, 0x2E8B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B74u;
label_2e8b74:
    // 0x2e8b74: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e8b74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b78: 0x13c000cf  beqz        $fp, . + 4 + (0xCF << 2)
    ctx->pc = 0x2E8B78u;
    {
        const bool branch_taken_0x2e8b78 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B78u;
        // 0x2e8b7c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b78) {
            ctx->pc = 0x2E8EB8u;
            goto label_2e8eb8;
        }
    }
    ctx->pc = 0x2E8B80u;
    // 0x2e8b80: 0x34069d00  ori         $a2, $zero, 0x9D00
    ctx->pc = 0x2e8b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x2e8b84: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x2e8b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x2e8b88: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2e8b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2e8b8c: 0xffc60040  sd          $a2, 0x40($fp)
    ctx->pc = 0x2e8b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 6));
    // 0x2e8b90: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x2e8b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8b94: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x2e8b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x2e8b98: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2e8b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2e8b9c: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2e8b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2e8ba0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2e8ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8ba4: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2e8ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2e8ba8: 0x34848004  ori         $a0, $a0, 0x8004
    ctx->pc = 0x2e8ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32772);
    // 0x2e8bac: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2e8bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2e8bb0: 0x34a501c8  ori         $a1, $a1, 0x1C8
    ctx->pc = 0x2e8bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)456);
    // 0x2e8bb4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2e8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2e8bb8: 0x2415000e  addiu       $s5, $zero, 0xE
    ctx->pc = 0x2e8bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e8bbc: 0xffc30018  sd          $v1, 0x18($fp)
    ctx->pc = 0x2e8bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 3));
    // 0x2e8bc0: 0x2418004c  addiu       $t8, $zero, 0x4C
    ctx->pc = 0x2e8bc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e8bc4: 0xffc40020  sd          $a0, 0x20($fp)
    ctx->pc = 0x2e8bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 4));
    // 0x2e8bc8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2e8bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x2e8bcc: 0x34e7080d  ori         $a3, $a3, 0x80D
    ctx->pc = 0x2e8bccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2061);
    // 0x2e8bd0: 0xffc50030  sd          $a1, 0x30($fp)
    ctx->pc = 0x2e8bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 48), GPR_U64(ctx, 5));
    // 0x2e8bd4: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x2e8bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2e8bd8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x2e8bd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8bdc: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x2e8bdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x2e8be0: 0x35290048  ori         $t1, $t1, 0x48
    ctx->pc = 0x2e8be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)72);
    // 0x2e8be4: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x2e8be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2e8be8: 0x3410a000  ori         $s0, $zero, 0xA000
    ctx->pc = 0x2e8be8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8bec: 0x1086f8  dsll        $s0, $s0, 27
    ctx->pc = 0x2e8becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 27);
    // 0x2e8bf0: 0x36109110  ori         $s0, $s0, 0x9110
    ctx->pc = 0x2e8bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)37136);
    // 0x2e8bf4: 0x108538  dsll        $s0, $s0, 20
    ctx->pc = 0x2e8bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 20);
    // 0x2e8bf8: 0x3412e400  ori         $s2, $zero, 0xE400
    ctx->pc = 0x2e8bf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2e8bfc: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x2e8bfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2e8c00: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x2e8c00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x2e8c04: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x2e8c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e8c08: 0xffc70050  sd          $a3, 0x50($fp)
    ctx->pc = 0x2e8c08u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 80), GPR_U64(ctx, 7));
    // 0x2e8c0c: 0xffc80058  sd          $t0, 0x58($fp)
    ctx->pc = 0x2e8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 88), GPR_U64(ctx, 8));
    // 0x2e8c10: 0x27cb0080  addiu       $t3, $fp, 0x80
    ctx->pc = 0x2e8c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x2e8c14: 0xffc90060  sd          $t1, 0x60($fp)
    ctx->pc = 0x2e8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 96), GPR_U64(ctx, 9));
    // 0x2e8c18: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x2e8c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e8c1c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2e8c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2e8c20: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2e8c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2e8c24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8c28: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2e8c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2e8c2c: 0xffca0068  sd          $t2, 0x68($fp)
    ctx->pc = 0x2e8c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 104), GPR_U64(ctx, 10));
    // 0x2e8c30: 0x3403a26a  ori         $v1, $zero, 0xA26A
    ctx->pc = 0x2e8c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41578);
    // 0x2e8c34: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2e8c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x2e8c38: 0x34639e89  ori         $v1, $v1, 0x9E89
    ctx->pc = 0x2e8c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40585);
    // 0x2e8c3c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e8c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e8c40: 0x3463e89b  ori         $v1, $v1, 0xE89B
    ctx->pc = 0x2e8c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59547);
    // 0x2e8c44: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x2e8c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x2e8c48: 0xffd00078  sd          $s0, 0x78($fp)
    ctx->pc = 0x2e8c48u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 120), GPR_U64(ctx, 16));
    // 0x2e8c4c: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x2e8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2e8c50: 0xffd20080  sd          $s2, 0x80($fp)
    ctx->pc = 0x2e8c50u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 128), GPR_U64(ctx, 18));
    // 0x2e8c54: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2e8c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8c58: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x2e8c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x2e8c5c: 0x34a5cc80  ori         $a1, $a1, 0xCC80
    ctx->pc = 0x2e8c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52352);
    // 0x2e8c60: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x2e8c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x2e8c64: 0x34a58380  ori         $a1, $a1, 0x8380
    ctx->pc = 0x2e8c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33664);
    // 0x2e8c68: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x2e8c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x2e8c6c: 0xffc60048  sd          $a2, 0x48($fp)
    ctx->pc = 0x2e8c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 72), GPR_U64(ctx, 6));
    // 0x2e8c70: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e8c70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2e8c74: 0xffc00008  sd          $zero, 0x8($fp)
    ctx->pc = 0x2e8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 0));
    // 0x2e8c78: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2e8c78u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2e8c7c: 0xffc00010  sd          $zero, 0x10($fp)
    ctx->pc = 0x2e8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 0));
    // 0x2e8c80: 0x240d0800  addiu       $t5, $zero, 0x800
    ctx->pc = 0x2e8c80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e8c84: 0xffd50028  sd          $s5, 0x28($fp)
    ctx->pc = 0x2e8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 21));
    // 0x2e8c88: 0x240f087f  addiu       $t7, $zero, 0x87F
    ctx->pc = 0x2e8c88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2175));
    // 0x2e8c8c: 0xffd80038  sd          $t8, 0x38($fp)
    ctx->pc = 0x2e8c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 56), GPR_U64(ctx, 24));
    // 0x2e8c90: 0x240c0870  addiu       $t4, $zero, 0x870
    ctx->pc = 0x2e8c90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x2e8c94: 0xffc00070  sd          $zero, 0x70($fp)
    ctx->pc = 0x2e8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 112), GPR_U64(ctx, 0));
    // 0x2e8c98: 0x3c130008  lui         $s3, 0x8
    ctx->pc = 0x2e8c98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8 << 16));
    // 0x2e8c9c: 0x36730008  ori         $s3, $s3, 0x8
    ctx->pc = 0x2e8c9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
    // 0x2e8ca0: 0xfd640010  sd          $a0, 0x10($t3)
    ctx->pc = 0x2e8ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 4));
    // 0x2e8ca4: 0x3c100008  lui         $s0, 0x8
    ctx->pc = 0x2e8ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8 << 16));
    // 0x2e8ca8: 0xfd650018  sd          $a1, 0x18($t3)
    ctx->pc = 0x2e8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 5));
    // 0x2e8cac: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x2e8cacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x2e8cb0: 0xfd630008  sd          $v1, 0x8($t3)
    ctx->pc = 0x2e8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 3));
    // 0x2e8cb4: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x2e8cb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e8cb8: 0xfd620070  sd          $v0, 0x70($t3)
    ctx->pc = 0x2e8cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 112), GPR_U64(ctx, 2));
    // 0x2e8cbc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2e8cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8cc0: 0xfd620028  sd          $v0, 0x28($t3)
    ctx->pc = 0x2e8cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 2));
    // 0x2e8cc4: 0x24190015  addiu       $t9, $zero, 0x15
    ctx->pc = 0x2e8cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2e8cc8: 0xfd620040  sd          $v0, 0x40($t3)
    ctx->pc = 0x2e8cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 64), GPR_U64(ctx, 2));
    // 0x2e8ccc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2e8cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2e8cd0: 0xfd620058  sd          $v0, 0x58($t3)
    ctx->pc = 0x2e8cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 88), GPR_U64(ctx, 2));
    // 0x2e8cd4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2e8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2e8cd8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e8cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cdc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e8cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ce0: 0x8e23118c  lw          $v1, 0x118C($s1)
    ctx->pc = 0x2e8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e8ce4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e8ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ce8: 0x8dc21180  lw          $v0, 0x1180($t6)
    ctx->pc = 0x2e8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e8cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cf0: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x2e8cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e8cf4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e8cf8: 0x257c2  srl         $t2, $v0, 31
    ctx->pc = 0x2e8cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e8cfc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e8cfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e8d00: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2e8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2e8d04: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x2e8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2e8d08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e8d08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e8d0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8d10: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x2e8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2e8d14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8d18: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e8d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e8d1c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2e8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8d20: 0xfd630030  sd          $v1, 0x30($t3)
    ctx->pc = 0x2e8d20u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 3));
    // 0x2e8d24: 0x8e22118c  lw          $v0, 0x118C($s1)
    ctx->pc = 0x2e8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e8d28: 0x8dc31180  lw          $v1, 0x1180($t6)
    ctx->pc = 0x2e8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x2e8d2c: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x2e8d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e8d30: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2e8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2e8d34: 0x357c2  srl         $t2, $v1, 31
    ctx->pc = 0x2e8d34u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e8d38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e8d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e8d3c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2e8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2e8d40: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x2e8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2e8d44: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e8d44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e8d48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8d4c: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x2e8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x2e8d50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8d54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8d58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e8d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e8d5c: 0xfd620048  sd          $v0, 0x48($t3)
    ctx->pc = 0x2e8d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 2));
    // 0x2e8d60: 0x8e23118c  lw          $v1, 0x118C($s1)
    ctx->pc = 0x2e8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e8d64: 0x8dc91180  lw          $t1, 0x1180($t6)
    ctx->pc = 0x2e8d64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x2e8d68: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2e8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e8d6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e8d70: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x2e8d70u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x2e8d74: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e8d74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e8d78: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2e8d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2e8d7c: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x2e8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2e8d80: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x2e8d80u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x2e8d84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8d88: 0x1a96823  subu        $t5, $t5, $t1
    ctx->pc = 0x2e8d88u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x2e8d8c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x2e8d8cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2e8d90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e8d94: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x2e8d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x2e8d98: 0xfd630060  sd          $v1, 0x60($t3)
    ctx->pc = 0x2e8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 96), GPR_U64(ctx, 3));
    // 0x2e8d9c: 0x8e22118c  lw          $v0, 0x118C($s1)
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e8da0: 0x8dc91180  lw          $t1, 0x1180($t6)
    ctx->pc = 0x2e8da0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x2e8da4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e8da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8dac: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x2e8dacu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x2e8db0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e8db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e8db4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2e8db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2e8db8: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x2e8db8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2e8dbc: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x2e8dc0: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2e8dc0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2e8dc4: 0x1e97823  subu        $t7, $t7, $t1
    ctx->pc = 0x2e8dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x2e8dc8: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x2e8dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2e8dcc: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x2e8dccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x2e8dd0: 0x1ec6025  or          $t4, $t7, $t4
    ctx->pc = 0x2e8dd0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x2e8dd4: 0xfd6c0078  sd          $t4, 0x78($t3)
    ctx->pc = 0x2e8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 120), GPR_U64(ctx, 12));
    // 0x2e8dd8: 0xfd730020  sd          $s3, 0x20($t3)
    ctx->pc = 0x2e8dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 19));
    // 0x2e8ddc: 0x95c21180  lhu         $v0, 0x1180($t6)
    ctx->pc = 0x2e8ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x2e8de0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8de4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2e8de4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2e8de8: 0xfd700038  sd          $s0, 0x38($t3)
    ctx->pc = 0x2e8de8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 16));
    // 0x2e8dec: 0x9622118c  lhu         $v0, 0x118C($s1)
    ctx->pc = 0x2e8decu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e8df0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8df4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e8df8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8dfc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2e8dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2e8e00: 0xfd620050  sd          $v0, 0x50($t3)
    ctx->pc = 0x2e8e00u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 80), GPR_U64(ctx, 2));
    // 0x2e8e04: 0x9623118c  lhu         $v1, 0x118C($s1)
    ctx->pc = 0x2e8e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e8e08: 0x95c21180  lhu         $v0, 0x1180($t6)
    ctx->pc = 0x2e8e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x2e8e0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8e14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2e8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e8e18: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e8e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e8e1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e8e20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8e24: 0xfd620068  sd          $v0, 0x68($t3)
    ctx->pc = 0x2e8e24u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 104), GPR_U64(ctx, 2));
    // 0x2e8e28: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x2e8e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e8e2c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x2e8e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x2e8e30: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2e8e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2e8e34: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2e8e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2e8e38: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e8e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8e3c: 0x212fc  dsll32      $v0, $v0, 11
    ctx->pc = 0x2e8e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
    // 0x2e8e40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e8e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e8e44: 0xffc30118  sd          $v1, 0x118($fp)
    ctx->pc = 0x2e8e44u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 280), GPR_U64(ctx, 3));
    // 0x2e8e48: 0xffc20100  sd          $v0, 0x100($fp)
    ctx->pc = 0x2e8e48u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 256), GPR_U64(ctx, 2));
    // 0x2e8e4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e8e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8e50: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2e8e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2e8e54: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x2e8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x2e8e58: 0xffd50128  sd          $s5, 0x128($fp)
    ctx->pc = 0x2e8e58u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 296), GPR_U64(ctx, 21));
    // 0x2e8e5c: 0xffc20120  sd          $v0, 0x120($fp)
    ctx->pc = 0x2e8e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 288), GPR_U64(ctx, 2));
    // 0x2e8e60: 0xffc00108  sd          $zero, 0x108($fp)
    ctx->pc = 0x2e8e60u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 264), GPR_U64(ctx, 0));
    // 0x2e8e64: 0xffc00110  sd          $zero, 0x110($fp)
    ctx->pc = 0x2e8e64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 272), GPR_U64(ctx, 0));
    // 0x2e8e68: 0x8dc31180  lw          $v1, 0x1180($t6)
    ctx->pc = 0x2e8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x2e8e6c: 0xffd80138  sd          $t8, 0x138($fp)
    ctx->pc = 0x2e8e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 312), GPR_U64(ctx, 24));
    // 0x2e8e70: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x2e8e70u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8e74: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e8e78: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x2e8e78u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e8e7c: 0xa7d90000  sh          $t9, 0x0($fp)
    ctx->pc = 0x2e8e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x2e8e80: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x2e8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x2e8e84: 0x346300f8  ori         $v1, $v1, 0xF8
    ctx->pc = 0x2e8e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)248);
    // 0x2e8e88: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e8e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e8e8c: 0xffc30140  sd          $v1, 0x140($fp)
    ctx->pc = 0x2e8e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 320), GPR_U64(ctx, 3));
    // 0x2e8e90: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8e94: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2e8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e8e98: 0xffc00150  sd          $zero, 0x150($fp)
    ctx->pc = 0x2e8e98u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 336), GPR_U64(ctx, 0));
    // 0x2e8e9c: 0xffc30148  sd          $v1, 0x148($fp)
    ctx->pc = 0x2e8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 328), GPR_U64(ctx, 3));
    // 0x2e8ea0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2e8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e8ea4: 0xffc30158  sd          $v1, 0x158($fp)
    ctx->pc = 0x2e8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 344), GPR_U64(ctx, 3));
    // 0x2e8ea8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x2e8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e8eac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8eb0: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2E8EB0u;
    SET_GPR_U32(ctx, 31, 0x2E8EB8u);
    ctx->pc = 0x2E8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EB0u;
    // 0x2e8eb4: 0xffc20130  sd          $v0, 0x130($fp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 30), 304), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2E8EB0u, 0x2E8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EB8u;
label_2e8eb8:
    // 0x2e8eb8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e8eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8ebc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e8ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8ec0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e8ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8ec4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e8ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8ec8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e8ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8ecc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e8eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8ed0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e8ed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8ed4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e8ed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8ed8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2e8ed8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE0u;
        // 0x2e8ee4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8EE8u;
}
