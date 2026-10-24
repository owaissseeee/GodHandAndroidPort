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

// Function: sceGsSetDefDrawEnv
// Address: 0x396a70 - 0x396c58
void sceGsSetDefDrawEnv_0x396a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefDrawEnv_0x396a70");
#endif

    switch (ctx->pc) {
        case 0x396b00u: goto label_396b00;
        case 0x396b34u: goto label_396b34;
        default: break;
    }

    ctx->pc = 0x396a70u;

    // 0x396a70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x396a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x396a74: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x396a74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x396a78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x396a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x396a7c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x396a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x396a80: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x396a80u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x396a84: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x396a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x396a88: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x396a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x396a8c: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x396a8cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x396a90: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x396a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x396a94: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x396a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x396a98: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x396a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x396a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396aa0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x396aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x396aa4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x396aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x396aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396aac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x396ab0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x396ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x396ab4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x396ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x396ab8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x396ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x396abc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x396abcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x396ac0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x396ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x396ac4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x396ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x396ac8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x396ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x396acc: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x396accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x396ad0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x396ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x396ad4: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x396ad4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x396ad8: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x396ad8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x396adc: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x396adcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x396ae0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x396ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x396ae4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x396ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x396ae8: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x396AE8u;
    {
        const bool branch_taken_0x396ae8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x396AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AE8u;
        // 0x396aec: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ae8) {
            ctx->pc = 0x396B24u;
            goto label_396b24;
        }
    }
    ctx->pc = 0x396AF0u;
    // 0x396af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x396af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396af4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x396af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396af8: 0xc0e5a6a  jal         func_3969A8
    ctx->pc = 0x396AF8u;
    SET_GPR_U32(ctx, 31, 0x396B00u);
    ctx->pc = 0x396AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AF8u;
    // 0x396afc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3969A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3969A8u, 0x396AF8u, 0x396B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396B00u;
label_396b00:
    // 0x396b00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x396b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x396b04: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x396b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x396b08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x396b0c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x396b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x396b10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x396b14: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x396b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x396b18: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x396b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x396b1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x396B1Cu;
    {
        const bool branch_taken_0x396b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B1Cu;
        // 0x396b20: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b1c) {
            ctx->pc = 0x396B48u;
            goto label_396b48;
        }
    }
    ctx->pc = 0x396B24u;
label_396b24:
    // 0x396b24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x396b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396b28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x396b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396b2c: 0xc0e5a6a  jal         func_3969A8
    ctx->pc = 0x396B2Cu;
    SET_GPR_U32(ctx, 31, 0x396B34u);
    ctx->pc = 0x396B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B2Cu;
    // 0x396b30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3969A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3969A8u, 0x396B2Cu, 0x396B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396B34u;
label_396b34:
    // 0x396b34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x396b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x396b38: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x396b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x396b3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396b3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x396b40: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x396b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x396b44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_396b48:
    // 0x396b48: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x396b48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x396b4c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x396b4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x396b50: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x396b50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x396b54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x396b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x396b58: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x396b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x396b5c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x396b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x396b60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396b60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x396b64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x396b64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x396b68: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x396b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x396b6c: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x396b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x396b70: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x396b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x396b74: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x396b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x396b78: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x396b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x396b7c: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x396b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x396b80: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x396b80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x396b84: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x396b84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x396b88: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x396b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x396b8c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x396b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x396b90: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x396b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x396b94: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x396b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396b98: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x396b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x396b9c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x396b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x396ba0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x396ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x396ba4: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x396ba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x396ba8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x396ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x396bac: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x396bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x396bb0: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x396bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x396bb4: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x396bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x396bb8: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x396bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x396bbc: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x396bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x396bc0: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x396bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x396bc4: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x396bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x396bc8: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x396bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x396bcc: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x396bccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x396bd0: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x396bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x396bd4: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x396bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x396bd8: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x396bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x396bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x396BDCu;
    {
        const bool branch_taken_0x396bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BDCu;
        // 0x396be0: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396bdc) {
            ctx->pc = 0x396BF0u;
            goto label_396bf0;
        }
    }
    ctx->pc = 0x396BE4u;
    // 0x396be4: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x396be4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x396be8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x396BE8u;
    {
        const bool branch_taken_0x396be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BE8u;
        // 0x396bec: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396be8) {
            ctx->pc = 0x396BFCu;
            goto label_396bfc;
        }
    }
    ctx->pc = 0x396BF0u;
label_396bf0:
    // 0x396bf0: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x396bf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x396bf4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x396bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x396bf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x396bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_396bfc:
    // 0x396bfc: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x396bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x396c00: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x396c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x396c04: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x396C04u;
    {
        const bool branch_taken_0x396c04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x396C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C04u;
        // 0x396c08: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c04) {
            ctx->pc = 0x396C20u;
            goto label_396c20;
        }
    }
    ctx->pc = 0x396C0Cu;
    // 0x396c0c: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x396c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x396c10: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x396c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x396c14: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x396c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x396c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x396C18u;
    {
        const bool branch_taken_0x396c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C18u;
        // 0x396c1c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c18) {
            ctx->pc = 0x396C24u;
            goto label_396c24;
        }
    }
    ctx->pc = 0x396C20u;
label_396c20:
    // 0x396c20: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x396c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_396c24:
    // 0x396c24: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x396c24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x396c28: 0xf  sync
    ctx->pc = 0x396c28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x396c2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x396c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x396c30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x396c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x396c34: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x396c34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x396c38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x396c38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x396c3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x396c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396c40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x396c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396c44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x396c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x396C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C4Cu;
        // 0x396c50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396C54u;
    // 0x396c54: 0x0  nop
    ctx->pc = 0x396c54u;
    // NOP
    ctx->pc = 0x396c58u;
}
