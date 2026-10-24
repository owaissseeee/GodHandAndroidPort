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

// Function: func_0036EB58
// Address: 0x36eb58 - 0x36ec78
void func_0036EB58_0x36eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036EB58_0x36eb58");
#endif

    ctx->pc = 0x36eb58u;

    // 0x36eb58: 0x248b0160  addiu       $t3, $a0, 0x160
    ctx->pc = 0x36eb58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36eb5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eb60: 0x8d620430  lw          $v0, 0x430($t3)
    ctx->pc = 0x36eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1072)));
    // 0x36eb64: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x36eb64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb68: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x36eb6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eb70: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x36eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x36eb74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EB74u;
    {
        const bool branch_taken_0x36eb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB74u;
        // 0x36eb78: 0xad620430  sw          $v0, 0x430($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eb74) {
            ctx->pc = 0x36EB88u;
            goto label_36eb88;
        }
    }
    ctx->pc = 0x36EB7Cu;
    // 0x36eb7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x36eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36eb80: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EB80u;
    {
        const bool branch_taken_0x36eb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x36eb80) {
            ctx->pc = 0x36EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EB80u;
            // 0x36eb84: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EB98u;
            goto label_36eb98;
        }
    }
    ctx->pc = 0x36EB88u;
label_36eb88:
    // 0x36eb88: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x36eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x36eb8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EB8Cu;
    {
        const bool branch_taken_0x36eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB8Cu;
        // 0x36eb90: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eb8c) {
            ctx->pc = 0x36EBA4u;
            goto label_36eba4;
        }
    }
    ctx->pc = 0x36EB94u;
    // 0x36eb94: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x36eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_36eb98:
    // 0x36eb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eb9c: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x36eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x36eba0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x36eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36eba4:
    // 0x36eba4: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x36eba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x36eba8: 0x1833023  subu        $a2, $t4, $v1
    ctx->pc = 0x36eba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x36ebac: 0x806a0000  lb          $t2, 0x0($v1)
    ctx->pc = 0x36ebacu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebb4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x36ebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x36ebb8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x36ebb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebc0: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x36ebc0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebc8: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x36ebc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebd0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x36ebd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebd8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x36ebd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebe0: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x36ebe0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x36ebe4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x36ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x36ebe8: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x36ebe8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x36ebec: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x36ebecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ebf4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x36ebf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x36ebf8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x36ebf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ebfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36ec00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x36ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36ec04: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x36ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x36ec08: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x36ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x36ec0c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x36ec0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x36ec10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36ec14: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x36ec14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x36ec18: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36ec1c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x36ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x36ec20: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x36ec20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x36ec24: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x36ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x36ec28: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x36ec28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x36ec2c: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x36ec2cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36ec30: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x36ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x36ec34: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x36ec34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x36ec38: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x36ec38u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x36ec3c: 0x64823  negu        $t1, $a2
    ctx->pc = 0x36ec3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x36ec40: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x36ec40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x36ec44: 0x1242006  srlv        $a0, $a0, $t1
    ctx->pc = 0x36ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x36ec48: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x36ec48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x36ec4c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36ec4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36ec50: 0x1441825  or          $v1, $t2, $a0
    ctx->pc = 0x36ec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x36ec54: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EC54u;
    {
        const bool branch_taken_0x36ec54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC54u;
        // 0x36ec58: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec54) {
            ctx->pc = 0x36EC68u;
            goto label_36ec68;
        }
    }
    ctx->pc = 0x36EC5Cu;
    // 0x36ec5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36EC5Cu;
    {
        const bool branch_taken_0x36ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC5Cu;
        // 0x36ec60: 0xad63002c  sw          $v1, 0x2C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec5c) {
            ctx->pc = 0x36EC6Cu;
            goto label_36ec6c;
        }
    }
    ctx->pc = 0x36EC64u;
    // 0x36ec64: 0x0  nop
    ctx->pc = 0x36ec64u;
    // NOP
label_36ec68:
    // 0x36ec68: 0xad6a002c  sw          $t2, 0x2C($t3)
    ctx->pc = 0x36ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 10));
label_36ec6c:
    // 0x36ec6c: 0xad60030c  sw          $zero, 0x30C($t3)
    ctx->pc = 0x36ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 0));
    // 0x36ec70: 0x3e00008  jr          $ra
    ctx->pc = 0x36EC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC70u;
        // 0x36ec74: 0xad600308  sw          $zero, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EC78u;
}
