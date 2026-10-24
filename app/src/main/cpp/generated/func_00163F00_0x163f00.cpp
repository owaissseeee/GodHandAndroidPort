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

// Function: func_00163F00
// Address: 0x163f00 - 0x1640e8
void func_00163F00_0x163f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00163F00_0x163f00");
#endif

    ctx->pc = 0x163f00u;

    // 0x163f00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x163f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f04: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x163f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x163f08: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x163f0c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x163f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x163f10: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x163f14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163f18: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x163f1c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x163f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x163f20: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x163f24: 0x8cc300cc  lw          $v1, 0xCC($a2)
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x163f28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x163f2c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163f30: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x163f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163f34: 0x8cc400d8  lw          $a0, 0xD8($a2)
    ctx->pc = 0x163f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x163f38: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x163f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x163f3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163f40: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x163f44: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x163f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x163f48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x163f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x163f4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163f50: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x163f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163f54: 0x8cc400d0  lw          $a0, 0xD0($a2)
    ctx->pc = 0x163f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x163f58: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x163f5c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163f60: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x163f64: 0x84c30130  lh          $v1, 0x130($a2)
    ctx->pc = 0x163f64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x163f68: 0x10680017  beq         $v1, $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x163F68u;
    {
        const bool branch_taken_0x163f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x163F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F68u;
        // 0x163f6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f68) {
            ctx->pc = 0x163FC8u;
            goto label_163fc8;
        }
    }
    ctx->pc = 0x163F70u;
    // 0x163f70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x163F70u;
    {
        const bool branch_taken_0x163f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f70) {
            ctx->pc = 0x163F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163F70u;
            // 0x163f74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163F88u;
            goto label_163f88;
        }
    }
    ctx->pc = 0x163F78u;
    // 0x163f78: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x163F78u;
    {
        const bool branch_taken_0x163f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F78u;
        // 0x163f7c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f78) {
            ctx->pc = 0x163FA0u;
            goto label_163fa0;
        }
    }
    ctx->pc = 0x163F80u;
    // 0x163f80: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x163F80u;
    {
        const bool branch_taken_0x163f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F80u;
        // 0x163f84: 0x90c30132  lbu         $v1, 0x132($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 306)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f80) {
            ctx->pc = 0x164068u;
            goto label_164068;
        }
    }
    ctx->pc = 0x163F88u;
label_163f88:
    // 0x163f88: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x163F88u;
    {
        const bool branch_taken_0x163f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F88u;
        // 0x163f8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f88) {
            ctx->pc = 0x164004u;
            goto label_164004;
        }
    }
    ctx->pc = 0x163F90u;
    // 0x163f90: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x163F90u;
    {
        const bool branch_taken_0x163f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F90u;
        // 0x163f94: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f90) {
            ctx->pc = 0x164030u;
            goto label_164030;
        }
    }
    ctx->pc = 0x163F98u;
    // 0x163f98: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x163F98u;
    {
        const bool branch_taken_0x163f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F98u;
        // 0x163f9c: 0x90c30132  lbu         $v1, 0x132($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 306)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f98) {
            ctx->pc = 0x164068u;
            goto label_164068;
        }
    }
    ctx->pc = 0x163FA0u;
label_163fa0:
    // 0x163fa0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x163fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x163fa4: 0x8c827a0c  lw          $v0, 0x7A0C($a0)
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31244)));
    // 0x163fa8: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x163fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x163fac: 0x8cc400c8  lw          $a0, 0xC8($a2)
    ctx->pc = 0x163facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x163fb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163fb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x163fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fbc: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x163fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x163fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x163FC0u;
    {
        const bool branch_taken_0x163fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FC0u;
        // 0x163fc4: 0x8cc300cc  lw          $v1, 0xCC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fc0) {
            ctx->pc = 0x163FF0u;
            goto label_163ff0;
        }
    }
    ctx->pc = 0x163FC8u;
label_163fc8:
    // 0x163fc8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x163fcc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x163fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x163fd0: 0x8c837a0c  lw          $v1, 0x7A0C($a0)
    ctx->pc = 0x163fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x163fd4: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x163fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
    // 0x163fd8: 0x8cc400c8  lw          $a0, 0xC8($a2)
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x163fdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x163fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163fe4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x163fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fe8: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x163fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x163fec: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x163fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
label_163ff0:
    // 0x163ff0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x163ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x163ff4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x163ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x163ff8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x163ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163ffc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x163FFCu;
    {
        const bool branch_taken_0x163ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FFCu;
        // 0x164000: 0xa0c00132  sb          $zero, 0x132($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 306), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ffc) {
            ctx->pc = 0x164064u;
            goto label_164064;
        }
    }
    ctx->pc = 0x164004u;
label_164004:
    // 0x164004: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x164008: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16400c: 0x8c837a0c  lw          $v1, 0x7A0C($a0)
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x164010: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
    // 0x164014: 0x8cc400c8  lw          $a0, 0xC8($a2)
    ctx->pc = 0x164014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x164018: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16401c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164020: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x164020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164024: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x164024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x164028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164028u;
    {
        const bool branch_taken_0x164028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164028u;
        // 0x16402c: 0x8cc300d4  lw          $v1, 0xD4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164028) {
            ctx->pc = 0x164054u;
            goto label_164054;
        }
    }
    ctx->pc = 0x164030u;
label_164030:
    // 0x164030: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x164034: 0x8c837a0c  lw          $v1, 0x7A0C($a0)
    ctx->pc = 0x164034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31244)));
    // 0x164038: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x164038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
    // 0x16403c: 0x8cc400c8  lw          $a0, 0xC8($a2)
    ctx->pc = 0x16403cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x164040: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x164040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x164044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164048: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x164048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16404c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x16404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x164050: 0x8cc300d8  lw          $v1, 0xD8($a2)
    ctx->pc = 0x164050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
label_164054:
    // 0x164054: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x164054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x164058: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x164058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16405c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16405cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x164060: 0xa0c80132  sb          $t0, 0x132($a2)
    ctx->pc = 0x164060u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 306), (uint8_t)GPR_U32(ctx, 8));
label_164064:
    // 0x164064: 0x90c30132  lbu         $v1, 0x132($a2)
    ctx->pc = 0x164064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 306)));
label_164068:
    // 0x164068: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164068u;
    {
        const bool branch_taken_0x164068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164068u;
        // 0x16406c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164068) {
            ctx->pc = 0x16408Cu;
            goto label_16408c;
        }
    }
    ctx->pc = 0x164070u;
    // 0x164070: 0xc4c00128  lwc1        $f0, 0x128($a2)
    ctx->pc = 0x164070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164074: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x164074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x164078: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x164078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x16407c: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x16407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x164080: 0xc4c0012c  lwc1        $f0, 0x12C($a2)
    ctx->pc = 0x164080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164084: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164084u;
    {
        const bool branch_taken_0x164084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164084u;
        // 0x164088: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164084) {
            ctx->pc = 0x1640B8u;
            goto label_1640b8;
        }
    }
    ctx->pc = 0x16408Cu;
label_16408c:
    // 0x16408c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16408Cu;
    {
        const bool branch_taken_0x16408c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16408Cu;
        // 0x164090: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16408c) {
            ctx->pc = 0x1640BCu;
            goto label_1640bc;
        }
    }
    ctx->pc = 0x164094u;
    // 0x164094: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x164094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x164098: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x164098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x16409c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16409cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1640a0: 0x3c01438d  lui         $at, 0x438D
    ctx->pc = 0x1640a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17293 << 16));
    // 0x1640a4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1640a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1640a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1640a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1640ac: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1640acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1640b0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x1640b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x1640b4: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x1640b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1640b8:
    // 0x1640b8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1640bc:
    // 0x1640bc: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1640bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x1640c0: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x1640c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x1640c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1640c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1640c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1640C8u;
    {
        const bool branch_taken_0x1640c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640C8u;
        // 0x1640cc: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640c8) {
            ctx->pc = 0x1640E0u;
            goto label_1640e0;
        }
    }
    ctx->pc = 0x1640D0u;
    // 0x1640d0: 0x8cc400ec  lw          $a0, 0xEC($a2)
    ctx->pc = 0x1640d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 236)));
    // 0x1640d4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1640d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1640d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1640d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1640dc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1640dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_1640e0:
    // 0x1640e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1640E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1640E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1640E8u;
}
