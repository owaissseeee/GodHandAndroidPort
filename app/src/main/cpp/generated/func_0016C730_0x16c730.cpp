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

// Function: func_0016C730
// Address: 0x16c730 - 0x16dc18
void func_0016C730_0x16c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016C730_0x16c730");
#endif

    switch (ctx->pc) {
        case 0x16c7b0u: goto label_16c7b0;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cba8u: goto label_16cba8;
        case 0x16cbc0u: goto label_16cbc0;
        case 0x16cbd0u: goto label_16cbd0;
        case 0x16cc90u: goto label_16cc90;
        case 0x16cc9cu: goto label_16cc9c;
        case 0x16cce0u: goto label_16cce0;
        case 0x16ce38u: goto label_16ce38;
        case 0x16ce44u: goto label_16ce44;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce94u: goto label_16ce94;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16d034u: goto label_16d034;
        case 0x16d040u: goto label_16d040;
        case 0x16d114u: goto label_16d114;
        case 0x16d138u: goto label_16d138;
        case 0x16d158u: goto label_16d158;
        case 0x16d164u: goto label_16d164;
        case 0x16d190u: goto label_16d190;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d248u: goto label_16d248;
        case 0x16d254u: goto label_16d254;
        case 0x16d268u: goto label_16d268;
        case 0x16d294u: goto label_16d294;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d314u: goto label_16d314;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d428u: goto label_16d428;
        case 0x16d430u: goto label_16d430;
        case 0x16d45cu: goto label_16d45c;
        case 0x16d4fcu: goto label_16d4fc;
        case 0x16d524u: goto label_16d524;
        case 0x16d560u: goto label_16d560;
        case 0x16d5b0u: goto label_16d5b0;
        case 0x16d674u: goto label_16d674;
        case 0x16d6b0u: goto label_16d6b0;
        case 0x16d6c4u: goto label_16d6c4;
        case 0x16d6dcu: goto label_16d6dc;
        case 0x16d6f8u: goto label_16d6f8;
        case 0x16d714u: goto label_16d714;
        case 0x16d76cu: goto label_16d76c;
        case 0x16d7a4u: goto label_16d7a4;
        case 0x16d848u: goto label_16d848;
        case 0x16d85cu: goto label_16d85c;
        case 0x16d874u: goto label_16d874;
        case 0x16d964u: goto label_16d964;
        case 0x16d980u: goto label_16d980;
        case 0x16d994u: goto label_16d994;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16db58u: goto label_16db58;
        case 0x16db88u: goto label_16db88;
        case 0x16db94u: goto label_16db94;
        case 0x16dbb0u: goto label_16dbb0;
        case 0x16dbc8u: goto label_16dbc8;
        case 0x16dbd0u: goto label_16dbd0;
        case 0x16dbd8u: goto label_16dbd8;
        case 0x16dbe0u: goto label_16dbe0;
        default: break;
    }

    ctx->pc = 0x16c730u;

    // 0x16c730: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16c734: 0x240330d0  addiu       $v1, $zero, 0x30D0
    ctx->pc = 0x16c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12496));
    // 0x16c738: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x16c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x16c73c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x16c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x16c740: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16c740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16c744: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16c744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c748: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x16c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x16c74c: 0x26660080  addiu       $a2, $s3, 0x80
    ctx->pc = 0x16c74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x16c750: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x16c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x16c754: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x16c754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c758: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x16c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x16c75c: 0x2415002d  addiu       $s5, $zero, 0x2D
    ctx->pc = 0x16c75cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16c760: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x16c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x16c764: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x16c764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x16c768: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x16c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x16c76c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x16c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x16c770: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x16c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x16c774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16c778: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x16c778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16c77c: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x16c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x16c780: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x16c780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c784: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x16c788: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x16c788u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c78c: 0x8e640124  lw          $a0, 0x124($s3)
    ctx->pc = 0x16c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x16c790: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16c794: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16c798: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16c798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16c79c: 0x8e630128  lw          $v1, 0x128($s3)
    ctx->pc = 0x16c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x16c7a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16c7a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16c7a8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16c7ac: 0x0  nop
    ctx->pc = 0x16c7acu;
    // NOP
label_16c7b0:
    // 0x16c7b0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16c7b4: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x16c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16c7b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16c7bc: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x16c7bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c7c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c7c4: 0x2ea30038  sltiu       $v1, $s5, 0x38
    ctx->pc = 0x16c7c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
    // 0x16c7c8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16c7cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x16c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x16c7d0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C7D0u;
    {
        const bool branch_taken_0x16c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7D0u;
        // 0x16c7d4: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7d0) {
            ctx->pc = 0x16C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c7b0;
        }
    }
    ctx->pc = 0x16C7D8u;
    // 0x16c7d8: 0x8e620308  lw          $v0, 0x308($s3)
    ctx->pc = 0x16c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 776)));
    // 0x16c7dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16c7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16c7e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C7E0u;
    {
        const bool branch_taken_0x16c7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E0u;
        // 0x16c7e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7e0) {
            ctx->pc = 0x16C7ECu;
            goto label_16c7ec;
        }
    }
    ctx->pc = 0x16C7E8u;
    // 0x16c7e8: 0xa262025c  sb          $v0, 0x25C($s3)
    ctx->pc = 0x16c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 604), (uint8_t)GPR_U32(ctx, 2));
label_16c7ec:
    // 0x16c7ec: 0x8264025c  lb          $a0, 0x25C($s3)
    ctx->pc = 0x16c7ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16c7f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c7f4: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16C7F4u;
    {
        const bool branch_taken_0x16c7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7F4u;
        // 0x16c7f8: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7f4) {
            ctx->pc = 0x16C874u;
            goto label_16c874;
        }
    }
    ctx->pc = 0x16C7FCu;
    // 0x16c7fc: 0x82630284  lb          $v1, 0x284($s3)
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16c800: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x16c800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16c804: 0x8e660084  lw          $a2, 0x84($s3)
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x16c808: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x16c808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16c80c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x16c810: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x16c814: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x16c814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x16c818: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16c818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16c81c: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x16c820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c824: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16c824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16c828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c82c: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x16c82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x16c830: 0x82630284  lb          $v1, 0x284($s3)
    ctx->pc = 0x16c830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16c834: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16c834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16c838: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x16c838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16c83c: 0x8e660084  lw          $a2, 0x84($s3)
    ctx->pc = 0x16c83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x16c840: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16c844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c848: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16c848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c84c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x16c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c850: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x16c850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x16c854: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x16c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x16c858: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16c85c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16c85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16c860: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16c860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16c864: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x16c868: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16c86c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16C86Cu;
    {
        const bool branch_taken_0x16c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C86Cu;
        // 0x16c870: 0x481025  or          $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c86c) {
            ctx->pc = 0x16C89Cu;
            goto label_16c89c;
        }
    }
    ctx->pc = 0x16C874u;
label_16c874:
    // 0x16c874: 0x8e650084  lw          $a1, 0x84($s3)
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x16c878: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x16c87c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16c880: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16c884: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16c884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16c888: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16c88c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x16c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x16c890: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x16c890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x16c894: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16c898: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16c898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_16c89c:
    // 0x16c89c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16c8a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16c8a4: 0x2462ec58  addiu       $v0, $v1, -0x13A8
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16c8a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x16c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16c8ac: 0x2c430009  sltiu       $v1, $v0, 0x9
    ctx->pc = 0x16c8acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x16c8b0: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x16C8B0u;
    {
        const bool branch_taken_0x16c8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c8b0) {
            ctx->pc = 0x16C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8B0u;
            // 0x16c8b4: 0x8e62020c  lw          $v0, 0x20C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C9A4u;
            goto label_16c9a4;
        }
    }
    ctx->pc = 0x16C8B8u;
    // 0x16c8b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C8B8u;
    {
        const bool branch_taken_0x16c8b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B8u;
        // 0x16c8bc: 0x8e64020c  lw          $a0, 0x20C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8b8) {
            ctx->pc = 0x16C8D4u;
            goto label_16c8d4;
        }
    }
    ctx->pc = 0x16C8C0u;
    // 0x16c8c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c8c4: 0x0  nop
    ctx->pc = 0x16c8c4u;
    // NOP
    // 0x16c8c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16c8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16c8cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C8CCu;
    {
        const bool branch_taken_0x16c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8cc) {
            ctx->pc = 0x16C8F0u;
            goto label_16c8f0;
        }
    }
    ctx->pc = 0x16C8D4u;
label_16c8d4:
    // 0x16c8d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16c8d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16c8dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16c8e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c8e4: 0x0  nop
    ctx->pc = 0x16c8e4u;
    // NOP
    // 0x16c8e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16c8e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16c8ec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x16c8ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_16c8f0:
    // 0x16c8f0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x16c8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x16c8f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c8f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x16c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x16c8fc: 0x24a2ec58  addiu       $v0, $a1, -0x13A8
    ctx->pc = 0x16c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962264));
    // 0x16c900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16c904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16c904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c908: 0x0  nop
    ctx->pc = 0x16c908u;
    // NOP
    // 0x16c90c: 0x0  nop
    ctx->pc = 0x16c90cu;
    // NOP
    // 0x16c910: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16c910u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x16c914: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x16c914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x16c918: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x16c918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16c91c: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x16c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
    // 0x16c920: 0x8e650208  lw          $a1, 0x208($s3)
    ctx->pc = 0x16c920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x16c924: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x16c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c928: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16c92c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16c92cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c930: 0x86620260  lh          $v0, 0x260($s3)
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x16c934: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x16c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c938: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x16c93c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x16c93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16c940: 0x0  nop
    ctx->pc = 0x16c940u;
    // NOP
    // 0x16c944: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x16c944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x16c948: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C948u;
    {
        const bool branch_taken_0x16c948 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x16C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C948u;
        // 0x16c94c: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c948) {
            ctx->pc = 0x16C964u;
            goto label_16c964;
        }
    }
    ctx->pc = 0x16C950u;
    // 0x16c950: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x16c950u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c954: 0x0  nop
    ctx->pc = 0x16c954u;
    // NOP
    // 0x16c958: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16c958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16c95c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C95Cu;
    {
        const bool branch_taken_0x16c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c95c) {
            ctx->pc = 0x16C980u;
            goto label_16c980;
        }
    }
    ctx->pc = 0x16C964u;
label_16c964:
    // 0x16c964: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x16c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x16c968: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x16c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16c96c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16c970: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c974: 0x0  nop
    ctx->pc = 0x16c974u;
    // NOP
    // 0x16c978: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16c978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16c97c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x16c97cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_16c980:
    // 0x16c980: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x16c980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x16c984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c988: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x16c988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c98c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x16c98cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16c990: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x16c990u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[0]);
    // 0x16c994: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x16c994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x16c998: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16c998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16c99c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16C99Cu;
    {
        const bool branch_taken_0x16c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C99Cu;
        // 0x16c9a0: 0xe4a1003c  swc1        $f1, 0x3C($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c99c) {
            ctx->pc = 0x16C9C4u;
            goto label_16c9c4;
        }
    }
    ctx->pc = 0x16C9A4u;
label_16c9a4:
    // 0x16c9a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16c9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16c9a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c9ac: 0x0  nop
    ctx->pc = 0x16c9acu;
    // NOP
    // 0x16c9b0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16c9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16c9b4: 0x8e630208  lw          $v1, 0x208($s3)
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x16c9b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16c9bc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x16c9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c9c0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x16c9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_16c9c4:
    // 0x16c9c4: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x16c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x16c9c8: 0x240430d0  addiu       $a0, $zero, 0x30D0
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12496));
    // 0x16c9cc: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16c9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16c9d0: 0x8e630168  lw          $v1, 0x168($s3)
    ctx->pc = 0x16c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x16c9d4: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16c9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16c9d8: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16c9d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16c9dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C9DCu;
    {
        const bool branch_taken_0x16c9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9DCu;
        // 0x16c9e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9dc) {
            ctx->pc = 0x16C9ECu;
            goto label_16c9ec;
        }
    }
    ctx->pc = 0x16C9E4u;
    // 0x16c9e4: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C9E4u;
    {
        const bool branch_taken_0x16c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c9e4) {
            ctx->pc = 0x16C9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C9E4u;
            // 0x16c9e8: 0x8e6300fc  lw          $v1, 0xFC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CA48u;
            goto label_16ca48;
        }
    }
    ctx->pc = 0x16C9ECu;
label_16c9ec:
    // 0x16c9ec: 0x8e6300fc  lw          $v1, 0xFC($s3)
    ctx->pc = 0x16c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x16c9f0: 0x240430f3  addiu       $a0, $zero, 0x30F3
    ctx->pc = 0x16c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12531));
    // 0x16c9f4: 0x240530f5  addiu       $a1, $zero, 0x30F5
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12533));
    // 0x16c9f8: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16c9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16c9fc: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x16ca00: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16ca00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ca04: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x16ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x16ca08: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x16ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x16ca0c: 0x8e640108  lw          $a0, 0x108($s3)
    ctx->pc = 0x16ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x16ca10: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x16ca10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x16ca14: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16ca18: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16ca18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16ca1c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16CA1Cu;
    {
        const bool branch_taken_0x16ca1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA1Cu;
        // 0x16ca20: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca1c) {
            ctx->pc = 0x16CA70u;
            goto label_16ca70;
        }
    }
    ctx->pc = 0x16CA24u;
    // 0x16ca24: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16ca24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16ca28: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16CA28u;
    {
        const bool branch_taken_0x16ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA28u;
        // 0x16ca2c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca28) {
            ctx->pc = 0x16CA70u;
            goto label_16ca70;
        }
    }
    ctx->pc = 0x16CA30u;
    // 0x16ca30: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x16ca34: 0x240430f4  addiu       $a0, $zero, 0x30F4
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12532));
    // 0x16ca38: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16ca38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ca3c: 0x8e630168  lw          $v1, 0x168($s3)
    ctx->pc = 0x16ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x16ca40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16CA40u;
    {
        const bool branch_taken_0x16ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA40u;
        // 0x16ca44: 0xa4640090  sh          $a0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca40) {
            ctx->pc = 0x16CA6Cu;
            goto label_16ca6c;
        }
    }
    ctx->pc = 0x16CA48u;
label_16ca48:
    // 0x16ca48: 0x240430f6  addiu       $a0, $zero, 0x30F6
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12534));
    // 0x16ca4c: 0x240530f5  addiu       $a1, $zero, 0x30F5
    ctx->pc = 0x16ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12533));
    // 0x16ca50: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16ca50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ca54: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x16ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x16ca58: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16ca58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ca5c: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x16ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x16ca60: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x16ca60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x16ca64: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x16ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x16ca68: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x16ca68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
label_16ca6c:
    // 0x16ca6c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_16ca70:
    // 0x16ca70: 0x266302ec  addiu       $v1, $s3, 0x2EC
    ctx->pc = 0x16ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 748));
    // 0x16ca74: 0xc454ffa0  lwc1        $f20, -0x60($v0)
    ctx->pc = 0x16ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ca78: 0x2452ffa0  addiu       $s2, $v0, -0x60
    ctx->pc = 0x16ca78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x16ca7c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x16ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x16ca80: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x16ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x16ca84: 0x245e9b70  addiu       $fp, $v0, -0x6490
    ctx->pc = 0x16ca84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16ca88: 0x26650170  addiu       $a1, $s3, 0x170
    ctx->pc = 0x16ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
    // 0x16ca8c: 0x266202e0  addiu       $v0, $s3, 0x2E0
    ctx->pc = 0x16ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x16ca90: 0x3c14f7ff  lui         $s4, 0xF7FF
    ctx->pc = 0x16ca90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63487 << 16));
    // 0x16ca94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x16ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x16ca98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16ca98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca9c: 0x26620290  addiu       $v0, $s3, 0x290
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x16caa0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x16caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x16caa4: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x16caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x16caa8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16caac: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x16caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x16cab0: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x16cab0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x16cab4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x16cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x16cab8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x16cabc: 0x0  nop
    ctx->pc = 0x16cabcu;
    // NOP
label_16cac0:
    // 0x16cac0: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x16cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x16cac4: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x16cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1388)));
    // 0x16cac8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16CAC8u;
    {
        const bool branch_taken_0x16cac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAC8u;
        // 0x16cacc: 0x26a4000d  addiu       $a0, $s5, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cac8) {
            ctx->pc = 0x16CB1Cu;
            goto label_16cb1c;
        }
    }
    ctx->pc = 0x16CAD0u;
    // 0x16cad0: 0x8c620594  lw          $v0, 0x594($v1)
    ctx->pc = 0x16cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
    // 0x16cad4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16cad8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x16CAD8u;
    {
        const bool branch_taken_0x16cad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cad8) {
            ctx->pc = 0x16CADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CAD8u;
            // 0x16cadc: 0xc6400030  lwc1        $f0, 0x30($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB20u;
            goto label_16cb20;
        }
    }
    ctx->pc = 0x16CAE0u;
    // 0x16cae0: 0x26a4000d  addiu       $a0, $s5, 0xD
    ctx->pc = 0x16cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 13));
    // 0x16cae4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x16cae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cae8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16caec: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x16caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16caf0: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x16caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x16caf4: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x16caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16caf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cafc: 0xe4540070  swc1        $f20, 0x70($v0)
    ctx->pc = 0x16cafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x16cb00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb04: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x16cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x16cb08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb0c: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x16cb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x16cb10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16CB14u;
    {
        const bool branch_taken_0x16cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB14u;
        // 0x16cb18: 0xe462007c  swc1        $f2, 0x7C($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb14) {
            ctx->pc = 0x16CB54u;
            goto label_16cb54;
        }
    }
    ctx->pc = 0x16CB1Cu;
label_16cb1c:
    // 0x16cb1c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x16cb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cb20:
    // 0x16cb20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cb24: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x16cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cb28: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x16cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x16cb2c: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x16cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16cb30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb34: 0xc643003c  lwc1        $f3, 0x3C($s2)
    ctx->pc = 0x16cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16cb38: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x16cb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x16cb3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb40: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x16cb40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x16cb44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb48: 0xe4620078  swc1        $f2, 0x78($v1)
    ctx->pc = 0x16cb48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x16cb4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cb50: 0xe443007c  swc1        $f3, 0x7C($v0)
    ctx->pc = 0x16cb50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_16cb54:
    // 0x16cb54: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16cb54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16cb58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CB58u;
    {
        const bool branch_taken_0x16cb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB58u;
        // 0x16cb5c: 0x26a30002  addiu       $v1, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb58) {
            ctx->pc = 0x16CB7Cu;
            goto label_16cb7c;
        }
    }
    ctx->pc = 0x16CB60u;
    // 0x16cb60: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16cb64: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x16cb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16cb68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CB68u;
    {
        const bool branch_taken_0x16cb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cb68) {
            ctx->pc = 0x16CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CB68u;
            // 0x16cb6c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB80u;
            goto label_16cb80;
        }
    }
    ctx->pc = 0x16CB70u;
    // 0x16cb70: 0x26a30002  addiu       $v1, $s5, 0x2
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x16cb74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16CB74u;
    {
        const bool branch_taken_0x16cb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB74u;
        // 0x16cb78: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb74) {
            ctx->pc = 0x16CB80u;
            goto label_16cb80;
        }
    }
    ctx->pc = 0x16CB7Cu;
label_16cb7c:
    // 0x16cb7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cb80:
    // 0x16cb80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16cb84: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x16cb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb88: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16cb8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cb90: 0xa064008b  sb          $a0, 0x8B($v1)
    ctx->pc = 0x16cb90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x16cb94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16cb98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb9c: 0x24919b70  addiu       $s1, $a0, -0x6490
    ctx->pc = 0x16cb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16cba0: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16CBA0u;
    SET_GPR_U32(ctx, 31, 0x16CBA8u);
    ctx->pc = 0x16CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBA0u;
    // 0x16cba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16CBA0u, 0x16CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBA8u;
label_16cba8:
    // 0x16cba8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x16cba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16cbac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16CBACu;
    {
        const bool branch_taken_0x16cbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBACu;
        // 0x16cbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbac) {
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CBB4u;
    // 0x16cbb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbb8: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16CBB8u;
    SET_GPR_U32(ctx, 31, 0x16CBC0u);
    ctx->pc = 0x16CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBB8u;
    // 0x16cbbc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16CBB8u, 0x16CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBC0u;
label_16cbc0:
    // 0x16cbc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16cbc8: 0xc0b2418  jal         func_2C9060
    ctx->pc = 0x16CBC8u;
    SET_GPR_U32(ctx, 31, 0x16CBD0u);
    ctx->pc = 0x16CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBC8u;
    // 0x16cbcc: 0x2444ec58  addiu       $a0, $v0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9060u, 0x16CBC8u, 0x16CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBD0u;
label_16cbd0:
    // 0x16cbd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16cbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbd4: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x16CBD4u;
    {
        const bool branch_taken_0x16cbd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBD4u;
        // 0x16cbd8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbd4) {
            ctx->pc = 0x16CCC0u;
            goto label_16ccc0;
        }
    }
    ctx->pc = 0x16CBDCu;
    // 0x16cbdc: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x16cbdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16cbe0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16cbe4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cbe8: 0x2463304e  addiu       $v1, $v1, 0x304E
    ctx->pc = 0x16cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12366));
    // 0x16cbec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16CBECu;
    {
        const bool branch_taken_0x16cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBECu;
        // 0x16cbf0: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbec) {
            ctx->pc = 0x16CC08u;
            goto label_16cc08;
        }
    }
    ctx->pc = 0x16CBF4u;
label_16cbf4:
    // 0x16cbf4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16cbf8: 0x240430c1  addiu       $a0, $zero, 0x30C1
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x16cbfc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16cc00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cc04: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
label_16cc08:
    // 0x16cc08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16cc0c: 0x12a2001d  beq         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16CC0Cu;
    {
        const bool branch_taken_0x16cc0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x16CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC0Cu;
        // 0x16cc10: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc0c) {
            ctx->pc = 0x16CC84u;
            goto label_16cc84;
        }
    }
    ctx->pc = 0x16CC14u;
    // 0x16cc14: 0x8262025d  lb          $v0, 0x25D($s3)
    ctx->pc = 0x16cc14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 605)));
    // 0x16cc18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16cc1c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x16cc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16cc20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16CC20u;
    {
        const bool branch_taken_0x16cc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC20u;
        // 0x16cc24: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc20) {
            ctx->pc = 0x16CC64u;
            goto label_16cc64;
        }
    }
    ctx->pc = 0x16CC28u;
    // 0x16cc28: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16cc28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16cc2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CC2Cu;
    {
        const bool branch_taken_0x16cc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC2Cu;
        // 0x16cc30: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc2c) {
            ctx->pc = 0x16CC50u;
            goto label_16cc50;
        }
    }
    ctx->pc = 0x16CC34u;
    // 0x16cc34: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16cc34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16cc38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CC38u;
    {
        const bool branch_taken_0x16cc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC38u;
        // 0x16cc3c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc38) {
            ctx->pc = 0x16CC4Cu;
            goto label_16cc4c;
        }
    }
    ctx->pc = 0x16CC40u;
    // 0x16cc40: 0x14760009  bne         $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x16CC40u;
    {
        const bool branch_taken_0x16cc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x16CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC40u;
        // 0x16cc44: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc40) {
            ctx->pc = 0x16CC68u;
            goto label_16cc68;
        }
    }
    ctx->pc = 0x16CC48u;
    // 0x16cc48: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_16cc4c:
    // 0x16cc4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16cc50:
    // 0x16cc50: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16cc54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cc58: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16cc5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16CC5Cu;
    {
        const bool branch_taken_0x16cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC5Cu;
        // 0x16cc60: 0x741824  and         $v1, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc5c) {
            ctx->pc = 0x16CC7Cu;
            goto label_16cc7c;
        }
    }
    ctx->pc = 0x16CC64u;
label_16cc64:
    // 0x16cc64: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x16cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_16cc68:
    // 0x16cc68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cc6c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16cc70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cc74: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16cc78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x16cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16cc7c:
    // 0x16cc7c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x16cc80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x16cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16cc84:
    // 0x16cc84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc88: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16CC88u;
    SET_GPR_U32(ctx, 31, 0x16CC90u);
    ctx->pc = 0x16CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC88u;
    // 0x16cc8c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16CC88u, 0x16CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC90u;
label_16cc90:
    // 0x16cc90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc94: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x16CC94u;
    SET_GPR_U32(ctx, 31, 0x16CC9Cu);
    ctx->pc = 0x16CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC94u;
    // 0x16cc98: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x16CC94u, 0x16CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC9Cu;
label_16cc9c:
    // 0x16cc9c: 0x14560009  bne         $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x16CC9Cu;
    {
        const bool branch_taken_0x16cc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x16CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC9Cu;
        // 0x16cca0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc9c) {
            ctx->pc = 0x16CCC4u;
            goto label_16ccc4;
        }
    }
    ctx->pc = 0x16CCA4u;
    // 0x16cca4: 0x26a2002d  addiu       $v0, $s5, 0x2D
    ctx->pc = 0x16cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 45));
    // 0x16cca8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ccac: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16ccb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ccb4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16ccb8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x16ccb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x16ccbc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_16ccc0:
    // 0x16ccc0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x16ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_16ccc4:
    // 0x16ccc4: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x16ccc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ccc8: 0x2ea30006  sltiu       $v1, $s5, 0x6
    ctx->pc = 0x16ccc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16cccc: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
    ctx->pc = 0x16CCCCu;
    {
        const bool branch_taken_0x16cccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCCCu;
        // 0x16ccd0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cccc) {
            ctx->pc = 0x16CAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cac0;
        }
    }
    ctx->pc = 0x16CCD4u;
    // 0x16ccd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16ccd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccd8: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x16ccd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16ccdc: 0x0  nop
    ctx->pc = 0x16ccdcu;
    // NOP
label_16cce0:
    // 0x16cce0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16CCE0u;
    {
        const bool branch_taken_0x16cce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCE0u;
        // 0x16cce4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cce0) {
            ctx->pc = 0x16CD18u;
            goto label_16cd18;
        }
    }
    ctx->pc = 0x16CCE8u;
    // 0x16cce8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16ccec: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x16ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16ccf0: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x16ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x16ccf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ccf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ccfc: 0x800008  jr          $a0
    ctx->pc = 0x16CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CD04u: goto label_16cd04;
            case 0x16CD0Cu: goto label_16cd0c;
            case 0x16CD14u: goto label_16cd14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CCFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16CD04u;
label_16cd04:
    // 0x16cd04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CD04u;
    {
        const bool branch_taken_0x16cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD04u;
        // 0x16cd08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd04) {
            ctx->pc = 0x16CD18u;
            goto label_16cd18;
        }
    }
    ctx->pc = 0x16CD0Cu;
label_16cd0c:
    // 0x16cd0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16CD0Cu;
    {
        const bool branch_taken_0x16cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD0Cu;
        // 0x16cd10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd0c) {
            ctx->pc = 0x16CD18u;
            goto label_16cd18;
        }
    }
    ctx->pc = 0x16CD14u;
label_16cd14:
    // 0x16cd14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16cd18:
    // 0x16cd18: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16cd1c: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x16cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16cd20: 0x8c82056c  lw          $v0, 0x56C($a0)
    ctx->pc = 0x16cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16cd24: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16CD24u;
    {
        const bool branch_taken_0x16cd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD24u;
        // 0x16cd28: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd24) {
            ctx->pc = 0x16CD80u;
            goto label_16cd80;
        }
    }
    ctx->pc = 0x16CD2Cu;
    // 0x16cd2c: 0x8c820594  lw          $v0, 0x594($a0)
    ctx->pc = 0x16cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1428)));
    // 0x16cd30: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16cd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16cd34: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16CD34u;
    {
        const bool branch_taken_0x16cd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD34u;
        // 0x16cd38: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd34) {
            ctx->pc = 0x16CD80u;
            goto label_16cd80;
        }
    }
    ctx->pc = 0x16CD3Cu;
    // 0x16cd3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16cd40: 0x2445ffa0  addiu       $a1, $v0, -0x60
    ctx->pc = 0x16cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x16cd44: 0x26a4001a  addiu       $a0, $s5, 0x1A
    ctx->pc = 0x16cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 26));
    // 0x16cd48: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x16cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16cd4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cd50: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x16cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x16cd54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cd58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cd5c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x16cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16cd60: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x16cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16cd64: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x16cd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd68: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x16cd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x16cd6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16cd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd70: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x16cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cd78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16CD78u;
    {
        const bool branch_taken_0x16cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD78u;
        // 0x16cd7c: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd78) {
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CD80u;
label_16cd80:
    // 0x16cd80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16cd84: 0x2445ffa0  addiu       $a1, $v0, -0x60
    ctx->pc = 0x16cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x16cd88: 0x26a4001a  addiu       $a0, $s5, 0x1A
    ctx->pc = 0x16cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 26));
    // 0x16cd8c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16cd90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cd94: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x16cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x16cd98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16cd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd9c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x16cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cda0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x16cda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cda4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cda8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16cda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdac: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x16cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16cdb0: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x16cdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x16cdb4: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x16cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cdb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cdbc: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x16cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cdc0:
    // 0x16cdc0: 0xe4620074  swc1        $f2, 0x74($v1)
    ctx->pc = 0x16cdc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x16cdc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cdc8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x16cdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x16cdcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cdd0: 0xe461007c  swc1        $f1, 0x7C($v1)
    ctx->pc = 0x16cdd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x16cdd4: 0x82630284  lb          $v1, 0x284($s3)
    ctx->pc = 0x16cdd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16cdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cddc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16CDDCu;
    {
        const bool branch_taken_0x16cddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDDCu;
        // 0x16cde0: 0x26a30013  addiu       $v1, $s5, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cddc) {
            ctx->pc = 0x16CDFCu;
            goto label_16cdfc;
        }
    }
    ctx->pc = 0x16CDE4u;
    // 0x16cde4: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16cde8: 0x14550005  bne         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CDE8u;
    {
        const bool branch_taken_0x16cde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x16CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE8u;
        // 0x16cdec: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cde8) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDF0u;
    // 0x16cdf0: 0x26a30013  addiu       $v1, $s5, 0x13
    ctx->pc = 0x16cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19));
    // 0x16cdf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16CDF4u;
    {
        const bool branch_taken_0x16cdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDF4u;
        // 0x16cdf8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdf4) {
            ctx->pc = 0x16CE00u;
            goto label_16ce00;
        }
    }
    ctx->pc = 0x16CDFCu;
label_16cdfc:
    // 0x16cdfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ce00:
    // 0x16ce00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ce04: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x16ce04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce08: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16ce0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ce10: 0xa064008b  sb          $a0, 0x8B($v1)
    ctx->pc = 0x16ce10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x16ce14: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x16ce18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16ce1c: 0x24769b70  addiu       $s6, $v1, -0x6490
    ctx->pc = 0x16ce1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x16ce20: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x16ce20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16ce24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16ce28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ce2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce30: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16CE30u;
    SET_GPR_U32(ctx, 31, 0x16CE38u);
    ctx->pc = 0x16CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE30u;
    // 0x16ce34: 0x2450ec58  addiu       $s0, $v0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16CE30u, 0x16CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE38u;
label_16ce38:
    // 0x16ce38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce3c: 0xc0b2418  jal         func_2C9060
    ctx->pc = 0x16CE3Cu;
    SET_GPR_U32(ctx, 31, 0x16CE44u);
    ctx->pc = 0x16CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE3Cu;
    // 0x16ce40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9060u, 0x16CE3Cu, 0x16CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE44u;
label_16ce44:
    // 0x16ce44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16ce44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce48: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16CE48u;
    {
        const bool branch_taken_0x16ce48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE48u;
        // 0x16ce4c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce48) {
            ctx->pc = 0x16CE64u;
            goto label_16ce64;
        }
    }
    ctx->pc = 0x16CE50u;
    // 0x16ce50: 0x240430c1  addiu       $a0, $zero, 0x30C1
    ctx->pc = 0x16ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x16ce54: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16ce58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ce5c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16CE5Cu;
    {
        const bool branch_taken_0x16ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE5Cu;
        // 0x16ce60: 0xa4640090  sh          $a0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce5c) {
            ctx->pc = 0x16CEC4u;
            goto label_16cec4;
        }
    }
    ctx->pc = 0x16CE64u;
label_16ce64:
    // 0x16ce64: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x16ce64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16ce68: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16ce6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce70: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ce74: 0x2463304e  addiu       $v1, $v1, 0x304E
    ctx->pc = 0x16ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12366));
    // 0x16ce78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ce7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce80: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16CE80u;
    SET_GPR_U32(ctx, 31, 0x16CE88u);
    ctx->pc = 0x16CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE80u;
    // 0x16ce84: 0xa4e30090  sh          $v1, 0x90($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 144), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16CE80u, 0x16CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE88u;
label_16ce88:
    // 0x16ce88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce8c: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x16CE8Cu;
    SET_GPR_U32(ctx, 31, 0x16CE94u);
    ctx->pc = 0x16CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE8Cu;
    // 0x16ce90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x16CE8Cu, 0x16CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE94u;
label_16ce94:
    // 0x16ce94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ce98: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16CE98u;
    {
        const bool branch_taken_0x16ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE98u;
        // 0x16ce9c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce98) {
            ctx->pc = 0x16CEC8u;
            goto label_16cec8;
        }
    }
    ctx->pc = 0x16CEA0u;
    // 0x16cea0: 0x26a30033  addiu       $v1, $s5, 0x33
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 51));
    // 0x16cea4: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x16cea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ceac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16ceacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x16ceb0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x16ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16ceb4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ceb8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16cebc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16cec0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x16cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_16cec4:
    // 0x16cec4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x16cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_16cec8:
    // 0x16cec8: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x16cec8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16cecc: 0x2ea30005  sltiu       $v1, $s5, 0x5
    ctx->pc = 0x16ceccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16ced0: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x16CED0u;
    {
        const bool branch_taken_0x16ced0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CED0u;
        // 0x16ced4: 0x2ea20005  sltiu       $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ced0) {
            ctx->pc = 0x16CCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cce0;
        }
    }
    ctx->pc = 0x16CED8u;
    // 0x16ced8: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16ced8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16cedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cee0: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16CEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CEE0u;
            // 0x16cee4: 0x8e640120  lw          $a0, 0x120($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CF30u;
            goto label_16cf30;
        }
    }
    ctx->pc = 0x16CEE8u;
    // 0x16cee8: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16ceec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16CEECu;
    {
        const bool branch_taken_0x16ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ceec) {
            ctx->pc = 0x16CF18u;
            goto label_16cf18;
        }
    }
    ctx->pc = 0x16CEF4u;
    // 0x16cef4: 0x8e640120  lw          $a0, 0x120($s3)
    ctx->pc = 0x16cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x16cef8: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x16cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16cefc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16cf00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16cf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16cf04: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16cf08: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x16cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x16cf0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16cf10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16CF10u;
    {
        const bool branch_taken_0x16cf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF10u;
        // 0x16cf14: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf10) {
            ctx->pc = 0x16CF4Cu;
            goto label_16cf4c;
        }
    }
    ctx->pc = 0x16CF18u;
label_16cf18:
    // 0x16cf18: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CF18u;
    {
        const bool branch_taken_0x16cf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF18u;
        // 0x16cf1c: 0x8e640120  lw          $a0, 0x120($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf18) {
            ctx->pc = 0x16CF30u;
            goto label_16cf30;
        }
    }
    ctx->pc = 0x16CF20u;
    // 0x16cf20: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16cf24: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16cf28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CF28u;
    {
        const bool branch_taken_0x16cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF28u;
        // 0x16cf2c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf28) {
            ctx->pc = 0x16CF3Cu;
            goto label_16cf3c;
        }
    }
    ctx->pc = 0x16CF30u;
label_16cf30:
    // 0x16cf30: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x16cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16cf34: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16cf38: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16cf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_16cf3c:
    // 0x16cf3c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16cf40: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x16cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x16cf44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16cf48: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_16cf4c:
    // 0x16cf4c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16cf50: 0x8263025c  lb          $v1, 0x25C($s3)
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16cf54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16cf58: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x16CF58u;
    {
        const bool branch_taken_0x16cf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF58u;
        // 0x16cf5c: 0x8e640160  lw          $a0, 0x160($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf58) {
            ctx->pc = 0x16D0A4u;
            goto label_16d0a4;
        }
    }
    ctx->pc = 0x16CF60u;
    // 0x16cf60: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16cf64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16cf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16cf68: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16cf6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16cf70: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16cf74: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16cf74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16cf78: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x16CF78u;
    {
        const bool branch_taken_0x16cf78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cf78) {
            ctx->pc = 0x16CF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CF78u;
            // 0x16cf7c: 0x8e640160  lw          $a0, 0x160($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D0A4u;
            goto label_16d0a4;
        }
    }
    ctx->pc = 0x16CF80u;
    // 0x16cf80: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16cf80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16cf84: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x16CF84u;
    {
        const bool branch_taken_0x16cf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cf84) {
            ctx->pc = 0x16CF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CF84u;
            // 0x16cf88: 0x8262005a  lb          $v0, 0x5A($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D000u;
            goto label_16d000;
        }
    }
    ctx->pc = 0x16CF8Cu;
    // 0x16cf8c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x16cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x16cf90: 0x8266025c  lb          $a2, 0x25C($s3)
    ctx->pc = 0x16cf90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16cf94: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x16cf94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x16cf98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf9c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16CF9Cu;
    SET_GPR_U32(ctx, 31, 0x16CFA4u);
    ctx->pc = 0x16CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF9Cu;
    // 0x16cfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16CF9Cu, 0x16CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFA4u;
label_16cfa4:
    // 0x16cfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfa8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x16CFA8u;
    SET_GPR_U32(ctx, 31, 0x16CFB0u);
    ctx->pc = 0x16CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFA8u;
    // 0x16cfac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x16CFA8u, 0x16CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFB0u;
label_16cfb0:
    // 0x16cfb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cfb4: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16CFB4u;
    {
        const bool branch_taken_0x16cfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cfb4) {
            ctx->pc = 0x16CFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CFB4u;
            // 0x16cfb8: 0x8262005a  lb          $v0, 0x5A($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D000u;
            goto label_16d000;
        }
    }
    ctx->pc = 0x16CFBCu;
    // 0x16cfbc: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16cfbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16cfc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16cfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16cfc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16cfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16cfc8: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x16cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x16cfcc: 0x8e640160  lw          $a0, 0x160($s3)
    ctx->pc = 0x16cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x16cfd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cfd4: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x16cfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x16cfd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16cfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16cfdc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16cfe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cfe4: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x16cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cfe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16cfe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16cfec: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x16cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x16cff0: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16cff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16cff4: 0x8e640160  lw          $a0, 0x160($s3)
    ctx->pc = 0x16cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x16cff8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16CFF8u;
    {
        const bool branch_taken_0x16cff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFF8u;
        // 0x16cffc: 0x2442002d  addiu       $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cff8) {
            ctx->pc = 0x16D088u;
            goto label_16d088;
        }
    }
    ctx->pc = 0x16D000u;
label_16d000:
    // 0x16d000: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x16D000u;
    {
        const bool branch_taken_0x16d000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d000) {
            ctx->pc = 0x16D004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D000u;
            // 0x16d004: 0x8e640160  lw          $a0, 0x160($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D0A4u;
            goto label_16d0a4;
        }
    }
    ctx->pc = 0x16D008u;
    // 0x16d008: 0x82630284  lb          $v1, 0x284($s3)
    ctx->pc = 0x16d008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16d00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d010: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16D010u;
    {
        const bool branch_taken_0x16d010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d010) {
            ctx->pc = 0x16D014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D010u;
            // 0x16d014: 0x8e640160  lw          $a0, 0x160($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D0A4u;
            goto label_16d0a4;
        }
    }
    ctx->pc = 0x16D018u;
    // 0x16d018: 0x8265025c  lb          $a1, 0x25C($s3)
    ctx->pc = 0x16d018u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16d01c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16d020: 0x24909b70  addiu       $s0, $a0, -0x6490
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16d024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d02c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D02Cu;
    SET_GPR_U32(ctx, 31, 0x16D034u);
    ctx->pc = 0x16D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D02Cu;
    // 0x16d030: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D02Cu, 0x16D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D034u;
label_16d034:
    // 0x16d034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d038: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x16D038u;
    SET_GPR_U32(ctx, 31, 0x16D040u);
    ctx->pc = 0x16D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D038u;
    // 0x16d03c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x16D038u, 0x16D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D040u;
label_16d040:
    // 0x16d040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d044: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16D044u;
    {
        const bool branch_taken_0x16d044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D044u;
        // 0x16d048: 0x8e640160  lw          $a0, 0x160($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d044) {
            ctx->pc = 0x16D0A4u;
            goto label_16d0a4;
        }
    }
    ctx->pc = 0x16D04Cu;
    // 0x16d04c: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16d04cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16d050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16d050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16d054: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16d054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d058: 0x24420033  addiu       $v0, $v0, 0x33
    ctx->pc = 0x16d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 51));
    // 0x16d05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d060: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x16d060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x16d064: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16d064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16d068: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16d06c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d070: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x16d070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d074: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16d074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16d078: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x16d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x16d07c: 0x8262025c  lb          $v0, 0x25C($s3)
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16d080: 0x8e640160  lw          $a0, 0x160($s3)
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x16d084: 0x24420033  addiu       $v0, $v0, 0x33
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 51));
label_16d088:
    // 0x16d088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d08c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16d090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d094: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x16d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d098: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16d098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16d09c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D09Cu;
    {
        const bool branch_taken_0x16d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D09Cu;
        // 0x16d0a0: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d09c) {
            ctx->pc = 0x16D0B4u;
            goto label_16d0b4;
        }
    }
    ctx->pc = 0x16D0A4u;
label_16d0a4:
    // 0x16d0a4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16d0a8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d0ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d0b0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_16d0b4:
    // 0x16d0b4: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16d0b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16d0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d0bc: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x16D0BCu;
    {
        const bool branch_taken_0x16d0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0BCu;
        // 0x16d0c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0bc) {
            ctx->pc = 0x16D27Cu;
            goto label_16d27c;
        }
    }
    ctx->pc = 0x16D0C4u;
    // 0x16d0c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D0C4u;
    {
        const bool branch_taken_0x16d0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0C4u;
        // 0x16d0c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0c4) {
            ctx->pc = 0x16D0DCu;
            goto label_16d0dc;
        }
    }
    ctx->pc = 0x16D0CCu;
    // 0x16d0cc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D0CCu;
    {
        const bool branch_taken_0x16d0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0cc) {
            ctx->pc = 0x16D0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D0CCu;
            // 0x16d0d0: 0x8265025c  lb          $a1, 0x25C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D0ECu;
            goto label_16d0ec;
        }
    }
    ctx->pc = 0x16D0D4u;
    // 0x16d0d4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x16D0D4u;
    {
        const bool branch_taken_0x16d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0D4u;
        // 0x16d0d8: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0d4) {
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D0DCu;
label_16d0dc:
    // 0x16d0dc: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x16D0DCu;
    {
        const bool branch_taken_0x16d0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0DCu;
        // 0x16d0e0: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0dc) {
            ctx->pc = 0x16D300u;
            goto label_16d300;
        }
    }
    ctx->pc = 0x16D0E4u;
    // 0x16d0e4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x16D0E4u;
    {
        const bool branch_taken_0x16d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0E4u;
        // 0x16d0e8: 0x96630302  lhu         $v1, 0x302($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 770)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0e4) {
            ctx->pc = 0x16D31Cu;
            goto label_16d31c;
        }
    }
    ctx->pc = 0x16D0ECu;
label_16d0ec:
    // 0x16d0ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d0f0: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16D0F0u;
    {
        const bool branch_taken_0x16d0f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d0f0) {
            ctx->pc = 0x16D0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D0F0u;
            // 0x16d0f4: 0x82620284  lb          $v0, 0x284($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D11Cu;
            goto label_16d11c;
        }
    }
    ctx->pc = 0x16D0F8u;
    // 0x16d0f8: 0x8e640264  lw          $a0, 0x264($s3)
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d0fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d100: 0x908202f6  lbu         $v0, 0x2F6($a0)
    ctx->pc = 0x16d100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x16d104: 0x54430085  bnel        $v0, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x16D104u;
    {
        const bool branch_taken_0x16d104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d104) {
            ctx->pc = 0x16D108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D104u;
            // 0x16d108: 0x96630302  lhu         $v1, 0x302($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 770)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D31Cu;
            goto label_16d31c;
        }
    }
    ctx->pc = 0x16D10Cu;
    // 0x16d10c: 0xc042e22  jal         func_10B888
    ctx->pc = 0x16D10Cu;
    SET_GPR_U32(ctx, 31, 0x16D114u);
    ctx->pc = 0x16D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D10Cu;
    // 0x16d110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x16D10Cu, 0x16D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D114u;
label_16d114:
    // 0x16d114: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x16D114u;
    {
        const bool branch_taken_0x16d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D114u;
        // 0x16d118: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d114) {
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D11Cu;
label_16d11c:
    // 0x16d11c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16D11Cu;
    {
        const bool branch_taken_0x16d11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D11Cu;
        // 0x16d120: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d11c) {
            ctx->pc = 0x16D1D8u;
            goto label_16d1d8;
        }
    }
    ctx->pc = 0x16D124u;
    // 0x16d124: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x16d124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x16d128: 0x24b19b70  addiu       $s1, $a1, -0x6490
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x16d12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d130: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16D130u;
    SET_GPR_U32(ctx, 31, 0x16D138u);
    ctx->pc = 0x16D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D130u;
    // 0x16d134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16D130u, 0x16D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D138u;
label_16d138:
    // 0x16d138: 0x8266025c  lb          $a2, 0x25C($s3)
    ctx->pc = 0x16d138u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16d13c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16d13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16d140: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x16D140u;
    {
        const bool branch_taken_0x16d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D140u;
        // 0x16d144: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d140) {
            ctx->pc = 0x16D314u;
            goto label_16d314;
        }
    }
    ctx->pc = 0x16D148u;
    // 0x16d148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d150: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D150u;
    SET_GPR_U32(ctx, 31, 0x16D158u);
    ctx->pc = 0x16D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D150u;
    // 0x16d154: 0x2450ec58  addiu       $s0, $v0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D150u, 0x16D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D158u;
label_16d158:
    // 0x16d158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d15c: 0xc0b2418  jal         func_2C9060
    ctx->pc = 0x16D15Cu;
    SET_GPR_U32(ctx, 31, 0x16D164u);
    ctx->pc = 0x16D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D15Cu;
    // 0x16d160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9060u, 0x16D15Cu, 0x16D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D164u;
label_16d164:
    // 0x16d164: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x16D164u;
    {
        const bool branch_taken_0x16d164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d164) {
            ctx->pc = 0x16D168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D164u;
            // 0x16d168: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D16Cu;
    // 0x16d16c: 0x8e630264  lw          $v1, 0x264($s3)
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d170: 0x906202f6  lbu         $v0, 0x2F6($v1)
    ctx->pc = 0x16d170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 758)));
    // 0x16d174: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x16d174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x16d178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D178u;
    {
        const bool branch_taken_0x16d178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D178u;
        // 0x16d17c: 0x8266025c  lb          $a2, 0x25C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d178) {
            ctx->pc = 0x16D19Cu;
            goto label_16d19c;
        }
    }
    ctx->pc = 0x16D180u;
    // 0x16d180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d184: 0x86700300  lh          $s0, 0x300($s3)
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 768)));
    // 0x16d188: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D188u;
    SET_GPR_U32(ctx, 31, 0x16D190u);
    ctx->pc = 0x16D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D188u;
    // 0x16d18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D188u, 0x16D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D190u;
label_16d190:
    // 0x16d190: 0x52020061  beql        $s0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x16D190u;
    {
        const bool branch_taken_0x16d190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16d190) {
            ctx->pc = 0x16D194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D190u;
            // 0x16d194: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D198u;
    // 0x16d198: 0x8266025c  lb          $a2, 0x25C($s3)
    ctx->pc = 0x16d198u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
label_16d19c:
    // 0x16d19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1a0: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D1A0u;
    SET_GPR_U32(ctx, 31, 0x16D1A8u);
    ctx->pc = 0x16D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1A0u;
    // 0x16d1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D1A0u, 0x16D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1A8u;
label_16d1a8:
    // 0x16d1a8: 0x8e640264  lw          $a0, 0x264($s3)
    ctx->pc = 0x16d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d1ac: 0xc042e60  jal         func_10B980
    ctx->pc = 0x16D1ACu;
    SET_GPR_U32(ctx, 31, 0x16D1B4u);
    ctx->pc = 0x16D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1ACu;
    // 0x16d1b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B980u, 0x16D1ACu, 0x16D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1B4u;
label_16d1b4:
    // 0x16d1b4: 0x8266025c  lb          $a2, 0x25C($s3)
    ctx->pc = 0x16d1b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16d1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1bc: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D1BCu;
    SET_GPR_U32(ctx, 31, 0x16D1C4u);
    ctx->pc = 0x16D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1BCu;
    // 0x16d1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D1BCu, 0x16D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1C4u;
label_16d1c4:
    // 0x16d1c4: 0xa6620300  sh          $v0, 0x300($s3)
    ctx->pc = 0x16d1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d1d0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x16D1D0u;
    {
        const bool branch_taken_0x16d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D0u;
        // 0x16d1d4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1d0) {
            ctx->pc = 0x16D2E4u;
            goto label_16d2e4;
        }
    }
    ctx->pc = 0x16D1D8u;
label_16d1d8:
    // 0x16d1d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16d1dc: 0x24719b70  addiu       $s1, $v1, -0x6490
    ctx->pc = 0x16d1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x16d1e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1e4: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D1E4u;
    SET_GPR_U32(ctx, 31, 0x16D1ECu);
    ctx->pc = 0x16D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1E4u;
    // 0x16d1e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D1E4u, 0x16D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1ECu;
label_16d1ec:
    // 0x16d1ec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x16d1f0: 0x24a4ec58  addiu       $a0, $a1, -0x13A8
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962264));
    // 0x16d1f4: 0xc0b2418  jal         func_2C9060
    ctx->pc = 0x16D1F4u;
    SET_GPR_U32(ctx, 31, 0x16D1FCu);
    ctx->pc = 0x16D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1F4u;
    // 0x16d1f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9060u, 0x16D1F4u, 0x16D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1FCu;
label_16d1fc:
    // 0x16d1fc: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x16D1FCu;
    {
        const bool branch_taken_0x16d1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1fc) {
            ctx->pc = 0x16D200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D1FCu;
            // 0x16d200: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D204u;
    // 0x16d204: 0x8e630264  lw          $v1, 0x264($s3)
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d208: 0x906202f6  lbu         $v0, 0x2F6($v1)
    ctx->pc = 0x16d208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 758)));
    // 0x16d20c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x16d20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x16d210: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D210u;
    {
        const bool branch_taken_0x16d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D210u;
        // 0x16d214: 0x8265025c  lb          $a1, 0x25C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d210) {
            ctx->pc = 0x16D238u;
            goto label_16d238;
        }
    }
    ctx->pc = 0x16D218u;
    // 0x16d218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d21c: 0x86700300  lh          $s0, 0x300($s3)
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 768)));
    // 0x16d220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d224: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D224u;
    SET_GPR_U32(ctx, 31, 0x16D22Cu);
    ctx->pc = 0x16D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D224u;
    // 0x16d228: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D224u, 0x16D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D22Cu;
label_16d22c:
    // 0x16d22c: 0x5202003a  beql        $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x16D22Cu;
    {
        const bool branch_taken_0x16d22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16d22c) {
            ctx->pc = 0x16D230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D22Cu;
            // 0x16d230: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D234u;
    // 0x16d234: 0x8265025c  lb          $a1, 0x25C($s3)
    ctx->pc = 0x16d234u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
label_16d238:
    // 0x16d238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d240: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D240u;
    SET_GPR_U32(ctx, 31, 0x16D248u);
    ctx->pc = 0x16D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D240u;
    // 0x16d244: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D240u, 0x16D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D248u;
label_16d248:
    // 0x16d248: 0x8e640264  lw          $a0, 0x264($s3)
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d24c: 0xc042e60  jal         func_10B980
    ctx->pc = 0x16D24Cu;
    SET_GPR_U32(ctx, 31, 0x16D254u);
    ctx->pc = 0x16D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D24Cu;
    // 0x16d250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B980u, 0x16D24Cu, 0x16D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D254u;
label_16d254:
    // 0x16d254: 0x8265025c  lb          $a1, 0x25C($s3)
    ctx->pc = 0x16d254u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16d258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d25c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d260: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D260u;
    SET_GPR_U32(ctx, 31, 0x16D268u);
    ctx->pc = 0x16D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D260u;
    // 0x16d264: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D260u, 0x16D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D268u;
label_16d268:
    // 0x16d268: 0xa6620300  sh          $v0, 0x300($s3)
    ctx->pc = 0x16d268u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d270: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d274: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16D274u;
    {
        const bool branch_taken_0x16d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D274u;
        // 0x16d278: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d274) {
            ctx->pc = 0x16D2E4u;
            goto label_16d2e4;
        }
    }
    ctx->pc = 0x16D27Cu;
label_16d27c:
    // 0x16d27c: 0x86620260  lh          $v0, 0x260($s3)
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x16d280: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16d280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16d284: 0x8665025e  lh          $a1, 0x25E($s3)
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16d288: 0x2464ec58  addiu       $a0, $v1, -0x13A8
    ctx->pc = 0x16d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16d28c: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16D28Cu;
    SET_GPR_U32(ctx, 31, 0x16D294u);
    ctx->pc = 0x16D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D28Cu;
    // 0x16d290: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16D28Cu, 0x16D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D294u;
label_16d294:
    // 0x16d294: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d298: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16D298u;
    {
        const bool branch_taken_0x16d298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D298u;
        // 0x16d29c: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d298) {
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D2A0u;
    // 0x16d2a0: 0x908202f6  lbu         $v0, 0x2F6($a0)
    ctx->pc = 0x16d2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x16d2a4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x16d2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x16d2a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D2A8u;
    {
        const bool branch_taken_0x16d2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A8u;
        // 0x16d2ac: 0x96250018  lhu         $a1, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2a8) {
            ctx->pc = 0x16D2C4u;
            goto label_16d2c4;
        }
    }
    ctx->pc = 0x16D2B0u;
    // 0x16d2b0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16d2b4: 0x86630300  lh          $v1, 0x300($s3)
    ctx->pc = 0x16d2b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 768)));
    // 0x16d2b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16d2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16d2bc: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16D2BCu;
    {
        const bool branch_taken_0x16d2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16d2bc) {
            ctx->pc = 0x16D2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D2BCu;
            // 0x16d2c0: 0x96630302  lhu         $v1, 0x302($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 770)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D31Cu;
            goto label_16d31c;
        }
    }
    ctx->pc = 0x16D2C4u;
label_16d2c4:
    // 0x16d2c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16d2c8: 0xc042e60  jal         func_10B980
    ctx->pc = 0x16D2C8u;
    SET_GPR_U32(ctx, 31, 0x16D2D0u);
    ctx->pc = 0x16D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2C8u;
    // 0x16d2cc: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B980u, 0x16D2C8u, 0x16D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2D0u;
label_16d2d0:
    // 0x16d2d0: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x16d2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d2d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2d8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16d2dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d2e0: 0xa6620300  sh          $v0, 0x300($s3)
    ctx->pc = 0x16d2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 768), (uint16_t)GPR_U32(ctx, 2));
label_16d2e4:
    // 0x16d2e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x16D2E4u;
    SET_GPR_U32(ctx, 31, 0x16D2ECu);
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x16D2E4u, 0x16D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2ECu;
label_16d2ec:
    // 0x16d2ec: 0x8e630264  lw          $v1, 0x264($s3)
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d2f0: 0xa6600304  sh          $zero, 0x304($s3)
    ctx->pc = 0x16d2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 772), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d2f4: 0xa6600302  sh          $zero, 0x302($s3)
    ctx->pc = 0x16d2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 770), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d2f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16D2F8u;
    {
        const bool branch_taken_0x16d2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F8u;
        // 0x16d2fc: 0xa46003ac  sh          $zero, 0x3AC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 940), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2f8) {
            ctx->pc = 0x16D314u;
            goto label_16d314;
        }
    }
    ctx->pc = 0x16D300u;
label_16d300:
    // 0x16d300: 0x908202f6  lbu         $v0, 0x2F6($a0)
    ctx->pc = 0x16d300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x16d304: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D304u;
    {
        const bool branch_taken_0x16d304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d304) {
            ctx->pc = 0x16D308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D304u;
            // 0x16d308: 0x8e640264  lw          $a0, 0x264($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D30Cu;
    // 0x16d30c: 0xc042e22  jal         func_10B888
    ctx->pc = 0x16D30Cu;
    SET_GPR_U32(ctx, 31, 0x16D314u);
    ctx->pc = 0x16D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D30Cu;
    // 0x16d310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x16D30Cu, 0x16D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D314u;
label_16d314:
    // 0x16d314: 0x8e640264  lw          $a0, 0x264($s3)
    ctx->pc = 0x16d314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
label_16d318:
    // 0x16d318: 0x96630302  lhu         $v1, 0x302($s3)
    ctx->pc = 0x16d318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 770)));
label_16d31c:
    // 0x16d31c: 0x948203ac  lhu         $v0, 0x3AC($a0)
    ctx->pc = 0x16d31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 940)));
    // 0x16d320: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x16d320u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x16d324: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x16d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x16d328: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16d328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16d32c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16D32Cu;
    {
        const bool branch_taken_0x16d32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D32Cu;
        // 0x16d330: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d32c) {
            ctx->pc = 0x16D3ACu;
            goto label_16d3ac;
        }
    }
    ctx->pc = 0x16D334u;
    // 0x16d334: 0x96620304  lhu         $v0, 0x304($s3)
    ctx->pc = 0x16d334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x16d338: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x16d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16d33c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x16d33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16d340: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16d340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16d344: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x16d344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x16d348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d34c: 0x24a5c7d0  addiu       $a1, $a1, -0x3830
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952912));
    // 0x16d350: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x16d350u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16d354: 0x86620300  lh          $v0, 0x300($s3)
    ctx->pc = 0x16d354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 768)));
    // 0x16d358: 0x96630304  lhu         $v1, 0x304($s3)
    ctx->pc = 0x16d358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x16d35c: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x16d35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16d360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d364: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d368: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d36c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16d370: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d378: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x16d378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x16d37c: 0x96620304  lhu         $v0, 0x304($s3)
    ctx->pc = 0x16d37cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x16d380: 0x86630300  lh          $v1, 0x300($s3)
    ctx->pc = 0x16d380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 768)));
    // 0x16d384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d388: 0xa6620304  sh          $v0, 0x304($s3)
    ctx->pc = 0x16d388u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d38c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x16d38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16d390: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d39c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16d3a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d3a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16D3A4u;
    {
        const bool branch_taken_0x16d3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d3a4) {
            ctx->pc = 0x16D3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D3A4u;
            // 0x16d3a8: 0xa6600304  sh          $zero, 0x304($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 772), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D3ACu;
            goto label_16d3ac;
        }
    }
    ctx->pc = 0x16D3ACu;
label_16d3ac:
    // 0x16d3ac: 0x8e630264  lw          $v1, 0x264($s3)
    ctx->pc = 0x16d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x16d3b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16d3b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3b4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x16d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16d3b8: 0x946203ac  lhu         $v0, 0x3AC($v1)
    ctx->pc = 0x16d3b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x16d3bc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x16d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d3c0: 0xa6620302  sh          $v0, 0x302($s3)
    ctx->pc = 0x16d3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 770), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d3c4: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_16d3c8:
    // 0x16d3c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x16d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d3cc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16d3ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d3d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16d3d4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x16d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16d3d8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D3D8u;
    {
        const bool branch_taken_0x16d3d8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3d8) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D3E0u;
    // 0x16d3e0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16d3e4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x16d3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d3e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16d3ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_16d3f0:
    // 0x16d3f0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x16d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16d3f4: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x16d3f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d3f8: 0x2ea30005  sltiu       $v1, $s5, 0x5
    ctx->pc = 0x16d3f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16d3fc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x16D3FCu;
    {
        const bool branch_taken_0x16d3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3FCu;
        // 0x16d400: 0x151040  sll         $v0, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3fc) {
            ctx->pc = 0x16D3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D404u;
    // 0x16d404: 0x96690304  lhu         $t1, 0x304($s3)
    ctx->pc = 0x16d404u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x16d408: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x16d408u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x16d40c: 0x2508feb0  addiu       $t0, $t0, -0x150
    ctx->pc = 0x16d40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966960));
    // 0x16d410: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16d414: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x16d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16d418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d41c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x16d41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16d420: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x16D420u;
    SET_GPR_U32(ctx, 31, 0x16D428u);
    ctx->pc = 0x16D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D420u;
    // 0x16d424: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x16D420u, 0x16D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D428u;
label_16d428:
    // 0x16d428: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16d42c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_16d430:
    // 0x16d430: 0x2b02818  mult        $a1, $s5, $s0
    ctx->pc = 0x16d430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16d434: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16d434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16d438: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x16d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16d43c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d444: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x16d444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d448: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16d44c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16d450: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x16d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x16d454: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x16D454u;
    SET_GPR_U32(ctx, 31, 0x16D45Cu);
    ctx->pc = 0x16D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D454u;
    // 0x16d458: 0x2448feb8  addiu       $t0, $v0, -0x148 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x16D454u, 0x16D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D45Cu;
label_16d45c:
    // 0x16d45c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x16d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16d460: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x16d460u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d464: 0x2ea30005  sltiu       $v1, $s5, 0x5
    ctx->pc = 0x16d464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16d468: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x16D468u;
    {
        const bool branch_taken_0x16d468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D468u;
        // 0x16d46c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d468) {
            ctx->pc = 0x16D430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d430;
        }
    }
    ctx->pc = 0x16D470u;
    // 0x16d470: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16d474: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D474u;
    {
        const bool branch_taken_0x16d474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D474u;
        // 0x16d478: 0x3c040042  lui         $a0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d474) {
            ctx->pc = 0x16D490u;
            goto label_16d490;
        }
    }
    ctx->pc = 0x16D47Cu;
    // 0x16d47c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16d480: 0x8e6201c0  lw          $v0, 0x1C0($s3)
    ctx->pc = 0x16d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x16d484: 0xc460ff98  lwc1        $f0, -0x68($v1)
    ctx->pc = 0x16d484u;
    { uint32_t bits = FAST_READ32(0x41FF98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D488u;
    {
        const bool branch_taken_0x16d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D488u;
        // 0x16d48c: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d488) {
            ctx->pc = 0x16D4A0u;
            goto label_16d4a0;
        }
    }
    ctx->pc = 0x16D490u;
label_16d490:
    // 0x16d490: 0x8e6301c0  lw          $v1, 0x1C0($s3)
    ctx->pc = 0x16d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x16d494: 0x2482ff98  addiu       $v0, $a0, -0x68
    ctx->pc = 0x16d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967192));
    // 0x16d498: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d49c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x16d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_16d4a0:
    // 0x16d4a0: 0x8663025e  lh          $v1, 0x25E($s3)
    ctx->pc = 0x16d4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16d4a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16d4a8: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x16d4ac: 0x8e660204  lw          $a2, 0x204($s3)
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 516)));
    // 0x16d4b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16d4b4: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x16d4b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d4bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16d4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16d4c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16d4c4: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16d4c8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x16d4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d4d0: 0x0  nop
    ctx->pc = 0x16d4d0u;
    // NOP
    // 0x16d4d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16d4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16d4d8: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x16d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x16d4dc: 0x8e630258  lw          $v1, 0x258($s3)
    ctx->pc = 0x16d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
    // 0x16d4e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16d4e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16d4e8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16d4ec: 0x86660260  lh          $a2, 0x260($s3)
    ctx->pc = 0x16d4ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x16d4f0: 0x8665025e  lh          $a1, 0x25E($s3)
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16d4f4: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16D4F4u;
    SET_GPR_U32(ctx, 31, 0x16D4FCu);
    ctx->pc = 0x16D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4F4u;
    // 0x16d4f8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16D4F4u, 0x16D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4FCu;
label_16d4fc:
    // 0x16d4fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d500: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16D500u;
    {
        const bool branch_taken_0x16d500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D500u;
        // 0x16d504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d500) {
            ctx->pc = 0x16D57Cu;
            goto label_16d57c;
        }
    }
    ctx->pc = 0x16D508u;
    // 0x16d508: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16d50c: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16D50Cu;
    {
        const bool branch_taken_0x16d50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d50c) {
            ctx->pc = 0x16D510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D50Cu;
            // 0x16d510: 0x8e640258  lw          $a0, 0x258($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D580u;
            goto label_16d580;
        }
    }
    ctx->pc = 0x16D514u;
    // 0x16d514: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x16d518: 0x86250018  lh          $a1, 0x18($s1)
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d51c: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x16D51Cu;
    SET_GPR_U32(ctx, 31, 0x16D524u);
    ctx->pc = 0x16D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D51Cu;
    // 0x16d520: 0x24649b70  addiu       $a0, $v1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x16D51Cu, 0x16D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D524u;
label_16d524:
    // 0x16d524: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d528: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D528u;
    {
        const bool branch_taken_0x16d528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D528u;
        // 0x16d52c: 0x8e640258  lw          $a0, 0x258($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d528) {
            ctx->pc = 0x16D580u;
            goto label_16d580;
        }
    }
    ctx->pc = 0x16D530u;
    // 0x16d530: 0x8662025e  lh          $v0, 0x25E($s3)
    ctx->pc = 0x16d530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16d534: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x16d534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16d538: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x16d53c: 0x3c0141b8  lui         $at, 0x41B8
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16824 << 16));
    // 0x16d540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16d540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d548: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16d54c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d550: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x16d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d554: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16d554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16d558: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16D558u;
    {
        const bool branch_taken_0x16d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D558u;
        // 0x16d55c: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d558) {
            ctx->pc = 0x16D590u;
            goto label_16d590;
        }
    }
    ctx->pc = 0x16D560u;
label_16d560:
    // 0x16d560: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x16d564: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16d568: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16d568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16d56c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16d574: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x16D574u;
    {
        const bool branch_taken_0x16d574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D574u;
        // 0x16d578: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d574) {
            ctx->pc = 0x16DB1Cu;
            goto label_16db1c;
        }
    }
    ctx->pc = 0x16D57Cu;
label_16d57c:
    // 0x16d57c: 0x8e640258  lw          $a0, 0x258($s3)
    ctx->pc = 0x16d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
label_16d580:
    // 0x16d580: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16d580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16d584: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d58c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_16d590:
    // 0x16d590: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16d594: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x16d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16d598: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16d598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16d59c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16d59cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16d5a4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x16d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x16d5a8: 0x26a20009  addiu       $v0, $s5, 0x9
    ctx->pc = 0x16d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x16d5ac: 0x0  nop
    ctx->pc = 0x16d5acu;
    // NOP
label_16d5b0:
    // 0x16d5b0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16d5b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5b8: 0x240330c1  addiu       $v1, $zero, 0x30C1
    ctx->pc = 0x16d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x16d5bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d5c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d5c4: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x16d5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16d5c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d5cc: 0x26a5001e  addiu       $a1, $s5, 0x1E
    ctx->pc = 0x16d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 30));
    // 0x16d5d0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x16d5d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5d4: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x16d5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d5d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16d5dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5e0: 0x26a30016  addiu       $v1, $s5, 0x16
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 22));
    // 0x16d5e4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x16d5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16d5e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d5ec: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x16d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x16d5f0: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x16d5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x16d5f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d5f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d600: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16d600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d604: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x16d604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x16d608: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d60c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16d610: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16d610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16d614: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16d614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16d618: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d61c: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x16d620: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16d620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16d624: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16d628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d62c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x16d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x16d630: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x16d630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16d634: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x16d634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16d638: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D638u;
    {
        const bool branch_taken_0x16d638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d638) {
            ctx->pc = 0x16D63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D638u;
            // 0x16d63c: 0x86650260  lh          $a1, 0x260($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D660u;
            goto label_16d660;
        }
    }
    ctx->pc = 0x16D640u;
    // 0x16d640: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x16d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16d644: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x16d644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16d648: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16d648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d64c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x16d64cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d650: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16d654: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d658: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x16D658u;
    {
        const bool branch_taken_0x16d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D658u;
        // 0x16d65c: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d658) {
            ctx->pc = 0x16D7E8u;
            goto label_16d7e8;
        }
    }
    ctx->pc = 0x16D660u;
label_16d660:
    // 0x16d660: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16d660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16d664: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x16d668: 0x26b60001  addiu       $s6, $s5, 0x1
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16d66c: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16D66Cu;
    SET_GPR_U32(ctx, 31, 0x16D674u);
    ctx->pc = 0x16D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D66Cu;
    // 0x16d670: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16D66Cu, 0x16D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D674u;
label_16d674:
    // 0x16d674: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d678: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
    ctx->pc = 0x16D678u;
    {
        const bool branch_taken_0x16d678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D678u;
        // 0x16d67c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d678) {
            ctx->pc = 0x16D7E8u;
            goto label_16d7e8;
        }
    }
    ctx->pc = 0x16D680u;
    // 0x16d680: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x16d680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16d684: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x16d684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16d688: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16d688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d68c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d690: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x16d690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d694: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16d69c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x16d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x16d6a0: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x16d6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16d6a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d6a8: 0x2442304e  addiu       $v0, $v0, 0x304E
    ctx->pc = 0x16d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12366));
    // 0x16d6ac: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16d6acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
label_16d6b0:
    // 0x16d6b0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x16d6b4: 0x24b09b70  addiu       $s0, $a1, -0x6490
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x16d6b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6bc: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16D6BCu;
    SET_GPR_U32(ctx, 31, 0x16D6C4u);
    ctx->pc = 0x16D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6BCu;
    // 0x16d6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16D6BCu, 0x16D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6C4u;
label_16d6c4:
    // 0x16d6c4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x16d6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16d6c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D6C8u;
    {
        const bool branch_taken_0x16d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6C8u;
        // 0x16d6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6c8) {
            ctx->pc = 0x16D6ECu;
            goto label_16d6ec;
        }
    }
    ctx->pc = 0x16D6D0u;
    // 0x16d6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6d4: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D6D4u;
    SET_GPR_U32(ctx, 31, 0x16D6DCu);
    ctx->pc = 0x16D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6D4u;
    // 0x16d6d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D6D4u, 0x16D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6DCu;
label_16d6dc:
    // 0x16d6dc: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x16d6dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d6e0: 0x5443fff3  bnel        $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x16D6E0u;
    {
        const bool branch_taken_0x16d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d6e0) {
            ctx->pc = 0x16D6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D6E0u;
            // 0x16d6e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d6b0;
        }
    }
    ctx->pc = 0x16D6E8u;
    // 0x16d6e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x16d6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d6ec:
    // 0x16d6ec: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x16D6ECu;
    {
        const bool branch_taken_0x16d6ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6ECu;
        // 0x16d6f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6ec) {
            ctx->pc = 0x16D728u;
            goto label_16d728;
        }
    }
    ctx->pc = 0x16D6F4u;
    // 0x16d6f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16d6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d6f8:
    // 0x16d6f8: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x16d6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16d6fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D6FCu;
    {
        const bool branch_taken_0x16d6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6FCu;
        // 0x16d700: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6fc) {
            ctx->pc = 0x16D724u;
            goto label_16d724;
        }
    }
    ctx->pc = 0x16D704u;
    // 0x16d704: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16d704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d708: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x16d708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16d70c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D70Cu;
    SET_GPR_U32(ctx, 31, 0x16D714u);
    ctx->pc = 0x16D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D70Cu;
    // 0x16d710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D70Cu, 0x16D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D714u;
label_16d714:
    // 0x16d714: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d718: 0x5443fff7  bnel        $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16D718u;
    {
        const bool branch_taken_0x16d718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d718) {
            ctx->pc = 0x16D71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D718u;
            // 0x16d71c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D720u;
    // 0x16d720: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x16d720u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d724:
    // 0x16d724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d728:
    // 0x16d728: 0x56820006  bnel        $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D728u;
    {
        const bool branch_taken_0x16d728 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d728) {
            ctx->pc = 0x16D72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D728u;
            // 0x16d72c: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D730u;
    // 0x16d730: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x16d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16d734: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x16d738: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16d73c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D73Cu;
    {
        const bool branch_taken_0x16d73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D73Cu;
        // 0x16d740: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d73c) {
            ctx->pc = 0x16D750u;
            goto label_16d750;
        }
    }
    ctx->pc = 0x16D744u;
label_16d744:
    // 0x16d744: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x16d748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d74c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16d750:
    // 0x16d750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d754: 0xa064008b  sb          $a0, 0x8B($v1)
    ctx->pc = 0x16d754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x16d758: 0x86650260  lh          $a1, 0x260($s3)
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x16d75c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16d760: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16d764: 0xc0b26b4  jal         func_2C9AD0
    ctx->pc = 0x16D764u;
    SET_GPR_U32(ctx, 31, 0x16D76Cu);
    ctx->pc = 0x16D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D764u;
    // 0x16d768: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9AD0u, 0x16D764u, 0x16D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D76Cu;
label_16d76c:
    // 0x16d76c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D76Cu;
    {
        const bool branch_taken_0x16d76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D76Cu;
        // 0x16d770: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d76c) {
            ctx->pc = 0x16D794u;
            goto label_16d794;
        }
    }
    ctx->pc = 0x16D774u;
    // 0x16d774: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x16d774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16d778: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16d778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d77c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16d77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16d780: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d788: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d78c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x16d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x16d790: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16d790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_16d794:
    // 0x16d794: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x16d798: 0x86250018  lh          $a1, 0x18($s1)
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d79c: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x16D79Cu;
    SET_GPR_U32(ctx, 31, 0x16D7A4u);
    ctx->pc = 0x16D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D79Cu;
    // 0x16d7a0: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x16D79Cu, 0x16D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7A4u;
label_16d7a4:
    // 0x16d7a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d7a8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D7A8u;
    {
        const bool branch_taken_0x16d7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7A8u;
        // 0x16d7ac: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7a8) {
            ctx->pc = 0x16D7CCu;
            goto label_16d7cc;
        }
    }
    ctx->pc = 0x16D7B0u;
    // 0x16d7b0: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x16d7b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16d7b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d7bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d7c0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d7c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D7C4u;
    {
        const bool branch_taken_0x16d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7C4u;
        // 0x16d7c8: 0x651824  and         $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7c4) {
            ctx->pc = 0x16D7E4u;
            goto label_16d7e4;
        }
    }
    ctx->pc = 0x16D7CCu;
label_16d7cc:
    // 0x16d7cc: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x16d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x16d7d0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x16d7d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d7d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d7dc: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d7e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x16d7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16d7e4:
    // 0x16d7e4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_16d7e8:
    // 0x16d7e8: 0x32d5ffff  andi        $s5, $s6, 0xFFFF
    ctx->pc = 0x16d7e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x16d7ec: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x16d7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16d7f0: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x16D7F0u;
    {
        const bool branch_taken_0x16d7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7F0u;
        // 0x16d7f4: 0x26a20009  addiu       $v0, $s5, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7f0) {
            ctx->pc = 0x16D5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d5b0;
        }
    }
    ctx->pc = 0x16D7F8u;
    // 0x16d7f8: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x16d7fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16d800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d804: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d80c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16d810: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16d810u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x16d814: 0x146500c2  bne         $v1, $a1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x16D814u;
    {
        const bool branch_taken_0x16d814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x16D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D814u;
        // 0x16d818: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d814) {
            ctx->pc = 0x16DB20u;
            goto label_16db20;
        }
    }
    ctx->pc = 0x16D81Cu;
    // 0x16d81c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x16d820: 0x3c14f7ff  lui         $s4, 0xF7FF
    ctx->pc = 0x16d820u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63487 << 16));
    // 0x16d824: 0xc454ffa0  lwc1        $f20, -0x60($v0)
    ctx->pc = 0x16d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d828: 0x2452ffa0  addiu       $s2, $v0, -0x60
    ctx->pc = 0x16d828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x16d82c: 0x24759b70  addiu       $s5, $v1, -0x6490
    ctx->pc = 0x16d82cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x16d830: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16d830u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d838: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x16d838u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x16d83c: 0x241630c3  addiu       $s6, $zero, 0x30C3
    ctx->pc = 0x16d83cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12483));
    // 0x16d840: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16D840u;
    {
        const bool branch_taken_0x16d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D840u;
        // 0x16d844: 0x3c1e0800  lui         $fp, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d840) {
            ctx->pc = 0x16D958u;
            goto label_16d958;
        }
    }
    ctx->pc = 0x16D848u;
label_16d848:
    // 0x16d848: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16d84c: 0x8665025e  lh          $a1, 0x25E($s3)
    ctx->pc = 0x16d84cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16d850: 0x2464ec58  addiu       $a0, $v1, -0x13A8
    ctx->pc = 0x16d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16d854: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16D854u;
    SET_GPR_U32(ctx, 31, 0x16D85Cu);
    ctx->pc = 0x16D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D854u;
    // 0x16d858: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16D854u, 0x16D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D85Cu;
label_16d85c:
    // 0x16d85c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d860: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x16D860u;
    {
        const bool branch_taken_0x16d860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D860u;
        // 0x16d864: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d860) {
            ctx->pc = 0x16D954u;
            goto label_16d954;
        }
    }
    ctx->pc = 0x16D868u;
    // 0x16d868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d86c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D86Cu;
    SET_GPR_U32(ctx, 31, 0x16D874u);
    ctx->pc = 0x16D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D86Cu;
    // 0x16d870: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D86Cu, 0x16D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D874u;
label_16d874:
    // 0x16d874: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x16d874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d878: 0x54430037  bnel        $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x16D878u;
    {
        const bool branch_taken_0x16d878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d878) {
            ctx->pc = 0x16D87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D878u;
            // 0x16d87c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D958u;
            goto label_16d958;
        }
    }
    ctx->pc = 0x16D880u;
    // 0x16d880: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x16d884: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x16d884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x16d888: 0x24a674a0  addiu       $a2, $a1, 0x74A0
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x16d88c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d890: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x16d890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x16d894: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16d894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16d898: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x16d89c: 0xa4760090  sh          $s6, 0x90($v1)
    ctx->pc = 0x16d89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 22));
    // 0x16d8a0: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x16d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x16d8a4: 0xa4560090  sh          $s6, 0x90($v0)
    ctx->pc = 0x16d8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 22));
    // 0x16d8a8: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x16d8a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16d8ac: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x16d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x16d8b0: 0x2463304e  addiu       $v1, $v1, 0x304E
    ctx->pc = 0x16d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12366));
    // 0x16d8b4: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x16d8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d8b8: 0x8e64011c  lw          $a0, 0x11C($s3)
    ctx->pc = 0x16d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d8bc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d8c0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x16d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x16d8c4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16d8c8: 0x8e650118  lw          $a1, 0x118($s3)
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x16d8cc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16d8d0: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x16d8d4: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x16d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x16d8d8: 0x8cc3056c  lw          $v1, 0x56C($a2)
    ctx->pc = 0x16d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1388)));
    // 0x16d8dc: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D8DCu;
    {
        const bool branch_taken_0x16d8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d8dc) {
            ctx->pc = 0x16D8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D8DCu;
            // 0x16d8e0: 0x8e62011c  lw          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D920u;
            goto label_16d920;
        }
    }
    ctx->pc = 0x16D8E4u;
    // 0x16d8e4: 0x8cc20594  lw          $v0, 0x594($a2)
    ctx->pc = 0x16d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1428)));
    // 0x16d8e8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16d8ec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16D8ECu;
    {
        const bool branch_taken_0x16d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8ECu;
        // 0x16d8f0: 0x8e62011c  lw          $v0, 0x11C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8ec) {
            ctx->pc = 0x16D920u;
            goto label_16d920;
        }
    }
    ctx->pc = 0x16D8F4u;
    // 0x16d8f4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x16d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d8f8: 0xe4540070  swc1        $f20, 0x70($v0)
    ctx->pc = 0x16d8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x16d8fc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x16d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d900: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d904: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x16d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16d908: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x16d908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x16d90c: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x16d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d910: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x16d910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x16d914: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d918: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16D918u;
    {
        const bool branch_taken_0x16d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D918u;
        // 0x16d91c: 0xe462007c  swc1        $f2, 0x7C($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d918) {
            ctx->pc = 0x16D94Cu;
            goto label_16d94c;
        }
    }
    ctx->pc = 0x16D920u;
label_16d920:
    // 0x16d920: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x16d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d924: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x16d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d928: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x16d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x16d92c: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x16d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16d930: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d934: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x16d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d938: 0xe4610074  swc1        $f1, 0x74($v1)
    ctx->pc = 0x16d938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x16d93c: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d940: 0xe4420078  swc1        $f2, 0x78($v0)
    ctx->pc = 0x16d940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x16d944: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16d944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16d948: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x16d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
label_16d94c:
    // 0x16d94c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16D94Cu;
    {
        const bool branch_taken_0x16d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D94Cu;
        // 0x16d950: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d94c) {
            ctx->pc = 0x16D970u;
            goto label_16d970;
        }
    }
    ctx->pc = 0x16D954u;
label_16d954:
    // 0x16d954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16d954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16d958:
    // 0x16d958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d95c: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16D95Cu;
    SET_GPR_U32(ctx, 31, 0x16D964u);
    ctx->pc = 0x16D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D95Cu;
    // 0x16d960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16D95Cu, 0x16D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D964u;
label_16d964:
    // 0x16d964: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x16d964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16d968: 0x5440ffb7  bnel        $v0, $zero, . + 4 + (-0x49 << 2)
    ctx->pc = 0x16D968u;
    {
        const bool branch_taken_0x16d968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d968) {
            ctx->pc = 0x16D96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D968u;
            // 0x16d96c: 0x86620260  lh          $v0, 0x260($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d848;
        }
    }
    ctx->pc = 0x16D970u;
label_16d970:
    // 0x16d970: 0x56e0006b  bnel        $s7, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x16D970u;
    {
        const bool branch_taken_0x16d970 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d970) {
            ctx->pc = 0x16D974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D970u;
            // 0x16d974: 0x8263005a  lb          $v1, 0x5A($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB20u;
            goto label_16db20;
        }
    }
    ctx->pc = 0x16D978u;
    // 0x16d978: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d97c: 0x86620260  lh          $v0, 0x260($s3)
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
label_16d980:
    // 0x16d980: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16d984: 0x8665025e  lh          $a1, 0x25E($s3)
    ctx->pc = 0x16d984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16d988: 0x2464ec58  addiu       $a0, $v1, -0x13A8
    ctx->pc = 0x16d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16d98c: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16D98Cu;
    SET_GPR_U32(ctx, 31, 0x16D994u);
    ctx->pc = 0x16D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D98Cu;
    // 0x16d990: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16D98Cu, 0x16D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D994u;
label_16d994:
    // 0x16d994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d998: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x16D998u;
    {
        const bool branch_taken_0x16d998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D998u;
        // 0x16d99c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d998) {
            ctx->pc = 0x16DB0Cu;
            goto label_16db0c;
        }
    }
    ctx->pc = 0x16D9A0u;
    // 0x16d9a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9a4: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x16d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x16d9a8: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16D9A8u;
    SET_GPR_U32(ctx, 31, 0x16D9B0u);
    ctx->pc = 0x16D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9A8u;
    // 0x16d9ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16D9A8u, 0x16D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9B0u;
label_16d9b0:
    // 0x16d9b0: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x16d9b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16d9b4: 0x54430056  bnel        $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x16D9B4u;
    {
        const bool branch_taken_0x16d9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d9b4) {
            ctx->pc = 0x16D9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D9B4u;
            // 0x16d9b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB10u;
            goto label_16db10;
        }
    }
    ctx->pc = 0x16D9BCu;
    // 0x16d9bc: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x16d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x16d9c0: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x16d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x16d9c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16d9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16d9c8: 0x240630c3  addiu       $a2, $zero, 0x30C3
    ctx->pc = 0x16d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12483));
    // 0x16d9cc: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16d9d0: 0x2609ffff  addiu       $t1, $s0, -0x1
    ctx->pc = 0x16d9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16d9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16d9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9d8: 0x2d270005  sltiu       $a3, $t1, 0x5
    ctx->pc = 0x16d9d8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16d9dc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x16d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x16d9e0: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x16d9e4: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x16d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x16d9e8: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x16d9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16d9ec: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x16d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x16d9f0: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16d9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16d9f4: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x16d9f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16d9f8: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x16d9fc: 0x2442304e  addiu       $v0, $v0, 0x304E
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12366));
    // 0x16da00: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16da00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16da04: 0x8e64011c  lw          $a0, 0x11C($s3)
    ctx->pc = 0x16da04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16da08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16da0c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16da0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16da10: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x16DA10u;
    {
        const bool branch_taken_0x16da10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA10u;
        // 0x16da14: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da10) {
            ctx->pc = 0x16DA48u;
            goto label_16da48;
        }
    }
    ctx->pc = 0x16DA18u;
    // 0x16da18: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16da18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16da1c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x16da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x16da20: 0x2442fee0  addiu       $v0, $v0, -0x120
    ctx->pc = 0x16da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    // 0x16da24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16da2c: 0x800008  jr          $a0
    ctx->pc = 0x16DA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DA34u: goto label_16da34;
            case 0x16DA3Cu: goto label_16da3c;
            case 0x16DA44u: goto label_16da44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16DA34u;
label_16da34:
    // 0x16da34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16DA34u;
    {
        const bool branch_taken_0x16da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA34u;
        // 0x16da38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da34) {
            ctx->pc = 0x16DA48u;
            goto label_16da48;
        }
    }
    ctx->pc = 0x16DA3Cu;
label_16da3c:
    // 0x16da3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16DA3Cu;
    {
        const bool branch_taken_0x16da3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA3Cu;
        // 0x16da40: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da3c) {
            ctx->pc = 0x16DA48u;
            goto label_16da48;
        }
    }
    ctx->pc = 0x16DA44u;
label_16da44:
    // 0x16da44: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x16da44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16da48:
    // 0x16da48: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16da4c: 0x244374a0  addiu       $v1, $v0, 0x74A0
    ctx->pc = 0x16da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16da50: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16da54: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16DA54u;
    {
        const bool branch_taken_0x16da54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA54u;
        // 0x16da58: 0x3c040042  lui         $a0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da54) {
            ctx->pc = 0x16DAA4u;
            goto label_16daa4;
        }
    }
    ctx->pc = 0x16DA5Cu;
    // 0x16da5c: 0x8c620594  lw          $v0, 0x594($v1)
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
    // 0x16da60: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16da60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16da64: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16DA64u;
    {
        const bool branch_taken_0x16da64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA64u;
        // 0x16da68: 0x8e67011c  lw          $a3, 0x11C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da64) {
            ctx->pc = 0x16DAA8u;
            goto label_16daa8;
        }
    }
    ctx->pc = 0x16DA6Cu;
    // 0x16da6c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16da70: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x16da74: 0x2465ffa0  addiu       $a1, $v1, -0x60
    ctx->pc = 0x16da74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x16da78: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x16da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16da7c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x16da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16da80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16da84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16da84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da88: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x16da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16da8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16da8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da90: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x16da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    // 0x16da94: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x16da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16da98: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16da9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16DA9Cu;
    {
        const bool branch_taken_0x16da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA9Cu;
        // 0x16daa0: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da9c) {
            ctx->pc = 0x16DAD8u;
            goto label_16dad8;
        }
    }
    ctx->pc = 0x16DAA4u;
label_16daa4:
    // 0x16daa4: 0x8e67011c  lw          $a3, 0x11C($s3)
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_16daa8:
    // 0x16daa8: 0x2485ffa0  addiu       $a1, $a0, -0x60
    ctx->pc = 0x16daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
    // 0x16daac: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x16dab0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16dab4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x16dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dab8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16dab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dabc: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x16dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dac0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16dac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dac4: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x16dac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    // 0x16dac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dacc: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x16daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dad0: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16dad4: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x16dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16dad8:
    // 0x16dad8: 0xe4620074  swc1        $f2, 0x74($v1)
    ctx->pc = 0x16dad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x16dadc: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16dae0: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x16dae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x16dae4: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x16dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x16dae8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x16dae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x16daec: 0x1040fe9c  beqz        $v0, . + 4 + (-0x164 << 2)
    ctx->pc = 0x16DAECu;
    {
        const bool branch_taken_0x16daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAECu;
        // 0x16daf0: 0xe461007c  swc1        $f1, 0x7C($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daec) {
            ctx->pc = 0x16D560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d560;
        }
    }
    ctx->pc = 0x16DAF4u;
    // 0x16daf4: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x16daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x16daf8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16dafc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16db00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16db04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB04u;
    {
        const bool branch_taken_0x16db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB04u;
        // 0x16db08: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db04) {
            ctx->pc = 0x16DB1Cu;
            goto label_16db1c;
        }
    }
    ctx->pc = 0x16DB0Cu;
label_16db0c:
    // 0x16db0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16db0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16db10:
    // 0x16db10: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x16db10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16db14: 0x5440ff9a  bnel        $v0, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x16DB14u;
    {
        const bool branch_taken_0x16db14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db14) {
            ctx->pc = 0x16DB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB14u;
            // 0x16db18: 0x86620260  lh          $v0, 0x260($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d980;
        }
    }
    ctx->pc = 0x16DB1Cu;
label_16db1c:
    // 0x16db1c: 0x8263005a  lb          $v1, 0x5A($s3)
    ctx->pc = 0x16db1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
label_16db20:
    // 0x16db20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB20u;
    {
        const bool branch_taken_0x16db20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB20u;
        // 0x16db24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db20) {
            ctx->pc = 0x16DB38u;
            goto label_16db38;
        }
    }
    ctx->pc = 0x16DB28u;
    // 0x16db28: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB28u;
            // 0x16db2c: 0x86620260  lh          $v0, 0x260($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB9Cu;
            goto label_16db9c;
        }
    }
    ctx->pc = 0x16DB30u;
    // 0x16db30: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16DB30u;
    {
        const bool branch_taken_0x16db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db30) {
            ctx->pc = 0x16DBC8u;
            goto label_16dbc8;
        }
    }
    ctx->pc = 0x16DB38u;
label_16db38:
    // 0x16db38: 0x82620284  lb          $v0, 0x284($s3)
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x16db3c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16DB3Cu;
    {
        const bool branch_taken_0x16db3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db3c) {
            ctx->pc = 0x16DB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB3Cu;
            // 0x16db40: 0x8265025c  lb          $a1, 0x25C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB70u;
            goto label_16db70;
        }
    }
    ctx->pc = 0x16DB44u;
    // 0x16db44: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x16db48: 0x24b09b70  addiu       $s0, $a1, -0x6490
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x16db4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16db4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db50: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16DB50u;
    SET_GPR_U32(ctx, 31, 0x16DB58u);
    ctx->pc = 0x16DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB50u;
    // 0x16db54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16DB50u, 0x16DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB58u;
label_16db58:
    // 0x16db58: 0x8266025c  lb          $a2, 0x25C($s3)
    ctx->pc = 0x16db58u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x16db5c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16db5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16db60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16DB60u;
    {
        const bool branch_taken_0x16db60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB60u;
        // 0x16db64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db60) {
            ctx->pc = 0x16DBC8u;
            goto label_16dbc8;
        }
    }
    ctx->pc = 0x16DB68u;
    // 0x16db68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB68u;
    {
        const bool branch_taken_0x16db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB68u;
        // 0x16db6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db68) {
            ctx->pc = 0x16DB80u;
            goto label_16db80;
        }
    }
    ctx->pc = 0x16DB70u;
label_16db70:
    // 0x16db70: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x16db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x16db74: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x16db74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16db78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16db78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16db80:
    // 0x16db80: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16DB80u;
    SET_GPR_U32(ctx, 31, 0x16DB88u);
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16DB80u, 0x16DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB88u;
label_16db88:
    // 0x16db88: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16db88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16db8c: 0xc05bb84  jal         func_16EE10
    ctx->pc = 0x16DB8Cu;
    SET_GPR_U32(ctx, 31, 0x16DB94u);
    ctx->pc = 0x16DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB8Cu;
    // 0x16db90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EE10u, 0x16DB8Cu, 0x16DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB94u;
label_16db94:
    // 0x16db94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16DB94u;
    {
        const bool branch_taken_0x16db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db94) {
            ctx->pc = 0x16DBC8u;
            goto label_16dbc8;
        }
    }
    ctx->pc = 0x16DB9Cu;
label_16db9c:
    // 0x16db9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16dba0: 0x8665025e  lh          $a1, 0x25E($s3)
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 606)));
    // 0x16dba4: 0x2464ec58  addiu       $a0, $v1, -0x13A8
    ctx->pc = 0x16dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16dba8: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16DBA8u;
    SET_GPR_U32(ctx, 31, 0x16DBB0u);
    ctx->pc = 0x16DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBA8u;
    // 0x16dbac: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16DBA8u, 0x16DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBB0u;
label_16dbb0:
    // 0x16dbb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16dbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbb4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DBB4u;
    {
        const bool branch_taken_0x16dbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbb4) {
            ctx->pc = 0x16DBC8u;
            goto label_16dbc8;
        }
    }
    ctx->pc = 0x16DBBCu;
    // 0x16dbbc: 0x96250018  lhu         $a1, 0x18($s1)
    ctx->pc = 0x16dbbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16dbc0: 0xc05bb84  jal         func_16EE10
    ctx->pc = 0x16DBC0u;
    SET_GPR_U32(ctx, 31, 0x16DBC8u);
    ctx->pc = 0x16DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBC0u;
    // 0x16dbc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EE10u, 0x16DBC0u, 0x16DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBC8u;
label_16dbc8:
    // 0x16dbc8: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16DBC8u;
    SET_GPR_U32(ctx, 31, 0x16DBD0u);
    ctx->pc = 0x16DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBC8u;
    // 0x16dbcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16DBC8u, 0x16DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBD0u;
label_16dbd0:
    // 0x16dbd0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16DBD0u;
    SET_GPR_U32(ctx, 31, 0x16DBD8u);
    ctx->pc = 0x16DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBD0u;
    // 0x16dbd4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16DBD0u, 0x16DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBD8u;
label_16dbd8:
    // 0x16dbd8: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16DBD8u;
    SET_GPR_U32(ctx, 31, 0x16DBE0u);
    ctx->pc = 0x16DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBD8u;
    // 0x16dbdc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16DBD8u, 0x16DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBE0u;
label_16dbe0:
    // 0x16dbe0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x16dbe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16dbe4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x16dbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16dbe8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x16dbe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16dbec: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16dbecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16dbf0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x16dbf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16dbf4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16dbf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16dbf8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x16dbf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dbfc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x16dbfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc00: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x16dc00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dc04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16dc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dc08: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x16dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16dc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC0Cu;
        // 0x16dc10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DC14u;
    // 0x16dc14: 0x0  nop
    ctx->pc = 0x16dc14u;
    // NOP
    ctx->pc = 0x16dc18u;
}
