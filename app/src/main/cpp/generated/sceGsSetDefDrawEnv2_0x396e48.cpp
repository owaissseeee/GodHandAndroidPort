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

// Function: sceGsSetDefDrawEnv2
// Address: 0x396e48 - 0x397028
void sceGsSetDefDrawEnv2_0x396e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefDrawEnv2_0x396e48");
#endif

    switch (ctx->pc) {
        case 0x396ed4u: goto label_396ed4;
        case 0x396f08u: goto label_396f08;
        default: break;
    }

    ctx->pc = 0x396e48u;

    // 0x396e48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x396e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x396e4c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x396e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x396e50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x396e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x396e54: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x396e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x396e58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x396e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x396e5c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x396e5cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x396e60: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x396e60u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x396e64: 0x63583  sra         $a2, $a2, 22
    ctx->pc = 0x396e64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x396e68: 0x3282000f  andi        $v0, $s4, 0xF
    ctx->pc = 0x396e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x396e6c: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x396e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x396e70: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x396e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x396e74: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x396e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x396e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396e7c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x396e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x396e80: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x396e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x396e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x396e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x396e8c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x396e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x396e90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x396e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x396e94: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x396e94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x396e98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x396e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x396e9c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x396e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x396ea0: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x396ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x396ea4: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x396ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x396ea8: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x396ea8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x396eac: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x396eacu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x396eb0: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x396eb0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x396eb4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x396eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x396eb8: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x396eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x396ebc: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x396EBCu;
    {
        const bool branch_taken_0x396ebc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x396EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EBCu;
        // 0x396ec0: 0xfe030018  sd          $v1, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ebc) {
            ctx->pc = 0x396EF8u;
            goto label_396ef8;
        }
    }
    ctx->pc = 0x396EC4u;
    // 0x396ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x396ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396ec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x396ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396ecc: 0xc0e5a6a  jal         func_3969A8
    ctx->pc = 0x396ECCu;
    SET_GPR_U32(ctx, 31, 0x396ED4u);
    ctx->pc = 0x396ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396ECCu;
    // 0x396ed0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3969A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3969A8u, 0x396ECCu, 0x396ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396ED4u;
label_396ed4:
    // 0x396ed4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x396ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x396ed8: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x396ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x396edc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396edcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x396ee0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x396ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x396ee4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x396ee8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x396ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x396eec: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x396eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x396ef0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x396EF0u;
    {
        const bool branch_taken_0x396ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EF0u;
        // 0x396ef4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ef0) {
            ctx->pc = 0x396F1Cu;
            goto label_396f1c;
        }
    }
    ctx->pc = 0x396EF8u;
label_396ef8:
    // 0x396ef8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x396ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x396efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f00: 0xc0e5a6a  jal         func_3969A8
    ctx->pc = 0x396F00u;
    SET_GPR_U32(ctx, 31, 0x396F08u);
    ctx->pc = 0x396F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F00u;
    // 0x396f04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3969A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3969A8u, 0x396F00u, 0x396F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F08u;
label_396f08:
    // 0x396f08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x396f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x396f0c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x396f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x396f10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396f10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x396f14: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x396f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x396f18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_396f1c:
    // 0x396f1c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x396f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x396f20: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x396f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x396f24: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x396f24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x396f28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x396f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x396f2c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x396f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x396f30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x396f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x396f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x396f38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x396f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x396f3c: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x396f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x396f40: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x396f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x396f44: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x396f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x396f48: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x396f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x396f4c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x396f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x396f50: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x396f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x396f54: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x396f54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x396f58: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x396f58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x396f5c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x396f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x396f60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x396f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x396f64: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x396f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x396f68: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x396f68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396f6c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x396f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x396f70: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x396f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x396f74: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x396f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x396f78: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x396f78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x396f7c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x396f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x396f80: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x396f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x396f84: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x396f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x396f88: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x396f88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x396f8c: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x396f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x396f90: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x396f90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x396f94: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x396f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x396f98: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x396f98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x396f9c: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x396f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x396fa0: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x396fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x396fa4: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x396fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x396fa8: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x396fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x396fac: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x396facu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x396fb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x396FB0u;
    {
        const bool branch_taken_0x396fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FB0u;
        // 0x396fb4: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396fb0) {
            ctx->pc = 0x396FC4u;
            goto label_396fc4;
        }
    }
    ctx->pc = 0x396FB8u;
    // 0x396fb8: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x396fb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x396fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x396FBCu;
    {
        const bool branch_taken_0x396fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FBCu;
        // 0x396fc0: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396fbc) {
            ctx->pc = 0x396FD0u;
            goto label_396fd0;
        }
    }
    ctx->pc = 0x396FC4u;
label_396fc4:
    // 0x396fc4: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x396fc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x396fc8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x396fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x396fcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x396fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_396fd0:
    // 0x396fd0: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x396fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x396fd4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x396fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x396fd8: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x396FD8u;
    {
        const bool branch_taken_0x396fd8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x396FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FD8u;
        // 0x396fdc: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396fd8) {
            ctx->pc = 0x396FF4u;
            goto label_396ff4;
        }
    }
    ctx->pc = 0x396FE0u;
    // 0x396fe0: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x396fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x396fe4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x396fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x396fe8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x396fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x396fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x396FECu;
    {
        const bool branch_taken_0x396fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FECu;
        // 0x396ff0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396fec) {
            ctx->pc = 0x396FF8u;
            goto label_396ff8;
        }
    }
    ctx->pc = 0x396FF4u;
label_396ff4:
    // 0x396ff4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x396ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_396ff8:
    // 0x396ff8: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x396ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x396ffc: 0xf  sync
    ctx->pc = 0x396ffcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x397000: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x397000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x397004: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x397004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x397008: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x397008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39700c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39700cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397010: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x397010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397014: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x397014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397018: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x397018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39701c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39701cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397020: 0x3e00008  jr          $ra
    ctx->pc = 0x397020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397020u;
        // 0x397024: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397028u;
}
