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

// Function: func_0013BD40
// Address: 0x13bd40 - 0x13c168
void func_0013BD40_0x13bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013BD40_0x13bd40");
#endif

    switch (ctx->pc) {
        case 0x13bd70u: goto label_13bd70;
        case 0x13c15cu: goto label_13c15c;
        default: break;
    }

    ctx->pc = 0x13bd40u;

    // 0x13bd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bd44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13bd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bd4c: 0x90c20094  lbu         $v0, 0x94($a2)
    ctx->pc = 0x13bd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13bd50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13bd54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bd58: 0x14400101  bnez        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x13BD58u;
    {
        const bool branch_taken_0x13bd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD58u;
        // 0x13bd5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd58) {
            ctx->pc = 0x13C160u;
            goto label_13c160;
        }
    }
    ctx->pc = 0x13BD60u;
    // 0x13bd60: 0x24c900b0  addiu       $t1, $a2, 0xB0
    ctx->pc = 0x13bd60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x13bd64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bd68: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x13bd68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd6c: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x13bd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
label_13bd70:
    // 0x13bd70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13bd74: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x13bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13bd78: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x13bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13bd7c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x13bd7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13bd80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bd84: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x13bd84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13bd88: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13bd8c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x13bd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13bd90: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13BD90u;
    {
        const bool branch_taken_0x13bd90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD90u;
        // 0x13bd94: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd90) {
            ctx->pc = 0x13BD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bd70;
        }
    }
    ctx->pc = 0x13BD98u;
    // 0x13bd98: 0x8cc400dc  lw          $a0, 0xDC($a2)
    ctx->pc = 0x13bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x13bd9c: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x13bd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x13bda0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bda4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13bda8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13bda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13bdac: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13bdb0: 0x8cc300d8  lw          $v1, 0xD8($a2)
    ctx->pc = 0x13bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bdb4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13bdb8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13bdbc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13bdc0: 0x8cc400c8  lw          $a0, 0xC8($a2)
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x13bdc4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13bdc8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13bdcc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13bdd0: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x13bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x13bdd4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13bdd8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13bddc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13bde0: 0x8cc400d4  lw          $a0, 0xD4($a2)
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x13bde4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13bde8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x13bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13bdec: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13bdf0: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x13bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x13bdf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13bdf8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13bdfc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13be00: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x13be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be04: 0x8cc400b0  lw          $a0, 0xB0($a2)
    ctx->pc = 0x13be04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x13be08: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x13be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x13be0c: 0x8cc300b0  lw          $v1, 0xB0($a2)
    ctx->pc = 0x13be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x13be10: 0xc4c000a4  lwc1        $f0, 0xA4($a2)
    ctx->pc = 0x13be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13be14: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13be14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13be18: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x13be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x13be1c: 0x50450012  beql        $v0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13BE1Cu;
    {
        const bool branch_taken_0x13be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x13be1c) {
            ctx->pc = 0x13BE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BE1Cu;
            // 0x13be20: 0x8cc300cc  lw          $v1, 0xCC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BE68u;
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BE24u;
    // 0x13be24: 0x8cc500cc  lw          $a1, 0xCC($a2)
    ctx->pc = 0x13be24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13be28: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13be2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13be2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13be30: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13be34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13be38: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13be38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13be3c: 0x94c200e4  lhu         $v0, 0xE4($a2)
    ctx->pc = 0x13be3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x13be40: 0x8cc400cc  lw          $a0, 0xCC($a2)
    ctx->pc = 0x13be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13be44: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x13be44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x13be48: 0x8cc500d0  lw          $a1, 0xD0($a2)
    ctx->pc = 0x13be48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x13be4c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13be50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13be54: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13be54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13be58: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x13be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x13be5c: 0x94c200e4  lhu         $v0, 0xE4($a2)
    ctx->pc = 0x13be5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x13be60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BE60u;
    {
        const bool branch_taken_0x13be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE60u;
        // 0x13be64: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be60) {
            ctx->pc = 0x13BE84u;
            goto label_13be84;
        }
    }
    ctx->pc = 0x13BE68u;
label_13be68:
    // 0x13be68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13be6c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13be70: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13be70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13be74: 0x8cc400d0  lw          $a0, 0xD0($a2)
    ctx->pc = 0x13be74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x13be78: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13be7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13be80: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13be80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_13be84:
    // 0x13be84: 0x90c30095  lbu         $v1, 0x95($a2)
    ctx->pc = 0x13be84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 149)));
    // 0x13be88: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x13be88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x13be8c: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x13BE8Cu;
    {
        const bool branch_taken_0x13be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE8Cu;
        // 0x13be90: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be8c) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13BE94u;
    // 0x13be94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13be94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13be98: 0x2442dc00  addiu       $v0, $v0, -0x2400
    ctx->pc = 0x13be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    // 0x13be9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13bea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bea4: 0x800008  jr          $a0
    ctx->pc = 0x13BEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BEACu: goto label_13beac;
            case 0x13BF08u: goto label_13bf08;
            case 0x13C094u: goto label_13c094;
            case 0x13C0F8u: goto label_13c0f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13BEACu;
label_13beac:
    // 0x13beac: 0x8cc300c8  lw          $v1, 0xC8($a2)
    ctx->pc = 0x13beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x13beb0: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x13beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x13beb4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x13beb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x13beb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13bebc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13bec0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13bec4: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x13bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x13bec8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13becc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13beccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13bed0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13bed4: 0x90c30095  lbu         $v1, 0x95($a2)
    ctx->pc = 0x13bed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 149)));
    // 0x13bed8: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x13bed8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13bedc: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x13BEDCu;
    {
        const bool branch_taken_0x13bedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bedc) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13BEE4u;
    // 0x13bee4: 0x90c20095  lbu         $v0, 0x95($a2)
    ctx->pc = 0x13bee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 149)));
    // 0x13bee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13beec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13beecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13bef0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x13bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x13bef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bef8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x13bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13befc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13befcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x13bf00: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x13BF00u;
    {
        const bool branch_taken_0x13bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF00u;
        // 0x13bf04: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf00) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13BF08u;
label_13bf08:
    // 0x13bf08: 0x8cc500d4  lw          $a1, 0xD4($a2)
    ctx->pc = 0x13bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x13bf0c: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x13bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x13bf10: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13bf14: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x13bf14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x13bf18: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13bf1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13bf20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13bf20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bf24: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13bf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x13bf28: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13bf2c: 0x8cc400d8  lw          $a0, 0xD8($a2)
    ctx->pc = 0x13bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bf30: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13bf34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13bf38: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13bf3c: 0x90e3d6e0  lbu         $v1, -0x2920($a3)
    ctx->pc = 0x13bf3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294956768)));
    // 0x13bf40: 0x1468001b  bne         $v1, $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13BF40u;
    {
        const bool branch_taken_0x13bf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x13BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF40u;
        // 0x13bf44: 0x8cc300d8  lw          $v1, 0xD8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf40) {
            ctx->pc = 0x13BFB0u;
            goto label_13bfb0;
        }
    }
    ctx->pc = 0x13BF48u;
    // 0x13bf48: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x13bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x13bf4c: 0x34210a96  ori         $at, $at, 0xA96
    ctx->pc = 0x13bf4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2710);
    // 0x13bf50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13bf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bf54: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x13bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf58: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x13bf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x13bf5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13bf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13bf60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13bf60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13bf64: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x13bf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x13bf68: 0x34210a90  ori         $at, $at, 0xA90
    ctx->pc = 0x13bf68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2704);
    // 0x13bf6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13bf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bf70: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x13bf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x13bf74: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x13bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bf78: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x13bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13bf7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13bf80: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13bf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13bf84: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x13bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bf88: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x13bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bf8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf90: 0x0  nop
    ctx->pc = 0x13bf90u;
    // NOP
    // 0x13bf94: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x13BF94u;
    {
        const bool branch_taken_0x13bf94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf94) {
            ctx->pc = 0x13BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF94u;
            // 0x13bf98: 0x8cc300e4  lw          $v1, 0xE4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C020u;
            goto label_13c020;
        }
    }
    ctx->pc = 0x13BF9Cu;
    // 0x13bf9c: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x13bf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x13bfa0: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x13bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bfa4: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x13bfa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13bfa8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13BFA8u;
    {
        const bool branch_taken_0x13bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFA8u;
        // 0x13bfac: 0xa0e0d6e0  sb          $zero, -0x2920($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4294956768), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfa8) {
            ctx->pc = 0x13C01Cu;
            goto label_13c01c;
        }
    }
    ctx->pc = 0x13BFB0u;
label_13bfb0:
    // 0x13bfb0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x13bfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x13bfb4: 0x34210a96  ori         $at, $at, 0xA96
    ctx->pc = 0x13bfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2710);
    // 0x13bfb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13bfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bfbc: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x13bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bfc0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x13bfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x13bfc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13bfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13bfc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13bfc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13bfcc: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x13bfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x13bfd0: 0x34210a90  ori         $at, $at, 0xA90
    ctx->pc = 0x13bfd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2704);
    // 0x13bfd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13bfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bfd8: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x13bfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x13bfdc: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x13bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bfe0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x13bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bfe4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13bfe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13bfe8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13bfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13bfec: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x13bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13bff0: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x13bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bff8: 0x0  nop
    ctx->pc = 0x13bff8u;
    // NOP
    // 0x13bffc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x13BFFCu;
    {
        const bool branch_taken_0x13bffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bffc) {
            ctx->pc = 0x13C000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BFFCu;
            // 0x13c000: 0x8cc300e4  lw          $v1, 0xE4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C020u;
            goto label_13c020;
        }
    }
    ctx->pc = 0x13C004u;
    // 0x13c004: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x13c004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x13c008: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x13c00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c010: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x13c014: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13c014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13c018: 0xa0e8d6e0  sb          $t0, -0x2920($a3)
    ctx->pc = 0x13c018u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294956768), (uint8_t)GPR_U32(ctx, 8));
label_13c01c:
    // 0x13c01c: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x13c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_13c020:
    // 0x13c020: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c024: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13C024u;
    {
        const bool branch_taken_0x13c024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c024) {
            ctx->pc = 0x13C028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C024u;
            // 0x13c028: 0x8cc400cc  lw          $a0, 0xCC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C070u;
            goto label_13c070;
        }
    }
    ctx->pc = 0x13C02Cu;
    // 0x13c02c: 0x8cc500cc  lw          $a1, 0xCC($a2)
    ctx->pc = 0x13c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13c030: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13c030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13c034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13c038: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13c03c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c040: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13c040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13c044: 0x94c200e4  lhu         $v0, 0xE4($a2)
    ctx->pc = 0x13c044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x13c048: 0x8cc400cc  lw          $a0, 0xCC($a2)
    ctx->pc = 0x13c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13c04c: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x13c04cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c050: 0x8cc500d0  lw          $a1, 0xD0($a2)
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x13c054: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13c058: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c05c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13c060: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x13c064: 0x94c200e4  lhu         $v0, 0xE4($a2)
    ctx->pc = 0x13c064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x13c068: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x13C068u;
    {
        const bool branch_taken_0x13c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C068u;
        // 0x13c06c: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c068) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C070u;
label_13c070:
    // 0x13c070: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x13c070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x13c074: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13c078: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13c078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13c07c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13c080: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x13c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x13c084: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13c088: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13c088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13c08c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13C08Cu;
    {
        const bool branch_taken_0x13c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C08Cu;
        // 0x13c090: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c08c) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C094u;
label_13c094:
    // 0x13c094: 0x8cc400dc  lw          $a0, 0xDC($a2)
    ctx->pc = 0x13c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x13c098: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13c098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13c09c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13c0a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13c0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13c0a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c0a8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13c0ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x13c0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x13c0b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c0b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c0b8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13c0bc: 0x8cc300dc  lw          $v1, 0xDC($a2)
    ctx->pc = 0x13c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x13c0c0: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x13c0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13c0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13c0c8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13c0cc: 0x8cc300dc  lw          $v1, 0xDC($a2)
    ctx->pc = 0x13c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x13c0d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13c0d4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x13c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0d8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x13c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c0dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x13c0dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13c0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13c0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0e4: 0x0  nop
    ctx->pc = 0x13c0e4u;
    // NOP
    // 0x13c0e8: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x13C0E8u;
    {
        const bool branch_taken_0x13c0e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c0e8) {
            ctx->pc = 0x13C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C0E8u;
            // 0x13c0ec: 0xe462003c  swc1        $f2, 0x3C($v1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C0F0u;
    // 0x13c0f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13C0F0u;
    {
        const bool branch_taken_0x13c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0f0) {
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C0F8u;
label_13c0f8:
    // 0x13c0f8: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x13c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x13c0fc: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13c100: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13c104: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x13c104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x13c108: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c10c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13c110: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x13c110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x13c114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c11c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13c120: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x13c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x13c124: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x13c124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c128: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13c128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13c12c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x13c12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x13c130: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x13c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x13c134: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13c138: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x13c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c13c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x13c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c140: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x13c140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13c144: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c148: 0x0  nop
    ctx->pc = 0x13c148u;
    // NOP
    // 0x13c14c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13C14Cu;
    {
        const bool branch_taken_0x13c14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c14c) {
            ctx->pc = 0x13C150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C14Cu;
            // 0x13c150: 0xe4620038  swc1        $f2, 0x38($v1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C154u;
            goto label_13c154;
        }
    }
    ctx->pc = 0x13C154u;
label_13c154:
    // 0x13c154: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13C154u;
    SET_GPR_U32(ctx, 31, 0x13C15Cu);
    ctx->pc = 0x13C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C154u;
    // 0x13c158: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13C154u, 0x13C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C15Cu;
label_13c15c:
    // 0x13c15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c160:
    // 0x13c160: 0x3e00008  jr          $ra
    ctx->pc = 0x13C160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C160u;
        // 0x13c164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C168u;
}
