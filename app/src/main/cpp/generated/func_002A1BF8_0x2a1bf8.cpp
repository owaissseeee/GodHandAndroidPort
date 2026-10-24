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

// Function: func_002A1BF8
// Address: 0x2a1bf8 - 0x2a2358
void func_002A1BF8_0x2a1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A1BF8_0x2a1bf8");
#endif

    switch (ctx->pc) {
        case 0x2a1d80u: goto label_2a1d80;
        case 0x2a1d98u: goto label_2a1d98;
        case 0x2a1df4u: goto label_2a1df4;
        case 0x2a1e3cu: goto label_2a1e3c;
        case 0x2a1e58u: goto label_2a1e58;
        case 0x2a1e8cu: goto label_2a1e8c;
        case 0x2a1ed8u: goto label_2a1ed8;
        case 0x2a1ef0u: goto label_2a1ef0;
        case 0x2a1f00u: goto label_2a1f00;
        case 0x2a1f30u: goto label_2a1f30;
        case 0x2a1f60u: goto label_2a1f60;
        case 0x2a1f78u: goto label_2a1f78;
        case 0x2a1fb4u: goto label_2a1fb4;
        case 0x2a1fe0u: goto label_2a1fe0;
        case 0x2a2028u: goto label_2a2028;
        case 0x2a2078u: goto label_2a2078;
        case 0x2a2084u: goto label_2a2084;
        case 0x2a2094u: goto label_2a2094;
        case 0x2a20a4u: goto label_2a20a4;
        case 0x2a20b4u: goto label_2a20b4;
        case 0x2a20c4u: goto label_2a20c4;
        case 0x2a20fcu: goto label_2a20fc;
        case 0x2a2128u: goto label_2a2128;
        case 0x2a213cu: goto label_2a213c;
        case 0x2a2164u: goto label_2a2164;
        case 0x2a21d0u: goto label_2a21d0;
        case 0x2a2208u: goto label_2a2208;
        case 0x2a2230u: goto label_2a2230;
        case 0x2a224cu: goto label_2a224c;
        case 0x2a2288u: goto label_2a2288;
        case 0x2a22b4u: goto label_2a22b4;
        case 0x2a22fcu: goto label_2a22fc;
        default: break;
    }

    ctx->pc = 0x2a1bf8u;

    // 0x2a1bf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a1bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a1bfc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a1c00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a1c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a1c04: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a1c08: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a1c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a1c0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a1c0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c10: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a1c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a1c14: 0x2825821  addu        $t3, $s4, $v0
    ctx->pc = 0x2a1c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2a1c18: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a1c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a1c1c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a1c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a1c20: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a1c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a1c24: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2a1c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2a1c28: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2a1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2a1c2c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2a1c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2a1c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1c34: 0xdd6240c8  ld          $v0, 0x40C8($t3)
    ctx->pc = 0x2a1c34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 16584)));
    // 0x2a1c38: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2a1c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2a1c3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1C3Cu;
    {
        const bool branch_taken_0x2a1c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C3Cu;
        // 0x2a1c40: 0x246c74a0  addiu       $t4, $v1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c3c) {
            ctx->pc = 0x2A1C58u;
            goto label_2a1c58;
        }
    }
    ctx->pc = 0x2A1C44u;
    // 0x2a1c44: 0x8d820584  lw          $v0, 0x584($t4)
    ctx->pc = 0x2a1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1412)));
    // 0x2a1c48: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2a1c4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1c50: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A1C50u;
    {
        const bool branch_taken_0x2a1c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C50u;
        // 0x2a1c54: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c50) {
            ctx->pc = 0x2A1CDCu;
            goto label_2a1cdc;
        }
    }
    ctx->pc = 0x2A1C58u;
label_2a1c58:
    // 0x2a1c58: 0x3c032020  lui         $v1, 0x2020
    ctx->pc = 0x2a1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8224 << 16));
    // 0x2a1c5c: 0x3c043020  lui         $a0, 0x3020
    ctx->pc = 0x2a1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12320 << 16));
    // 0x2a1c60: 0x3c058060  lui         $a1, 0x8060
    ctx->pc = 0x2a1c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32864 << 16));
    // 0x2a1c64: 0x3c06ff60  lui         $a2, 0xFF60
    ctx->pc = 0x2a1c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65376 << 16));
    // 0x2a1c68: 0x3c026060  lui         $v0, 0x6060
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24672 << 16));
    // 0x2a1c6c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1c70: 0x34426060  ori         $v0, $v0, 0x6060
    ctx->pc = 0x2a1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x2a1c74: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2a1c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a1c78: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x2a1c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2a1c7c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2a1c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1c80: 0x34632b2b  ori         $v1, $v1, 0x2B2B
    ctx->pc = 0x2a1c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11051);
    // 0x2a1c84: 0x34843240  ori         $a0, $a0, 0x3240
    ctx->pc = 0x2a1c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12864);
    // 0x2a1c88: 0x34a580a0  ori         $a1, $a1, 0x80A0
    ctx->pc = 0x2a1c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32928);
    // 0x2a1c8c: 0x34c68098  ori         $a2, $a2, 0x8098
    ctx->pc = 0x2a1c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32920);
    // 0x2a1c90: 0xa56a432a  sh          $t2, 0x432A($t3)
    ctx->pc = 0x2a1c90u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17194), (uint16_t)GPR_U32(ctx, 10));
    // 0x2a1c94: 0xad6342d4  sw          $v1, 0x42D4($t3)
    ctx->pc = 0x2a1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17108), GPR_U32(ctx, 3));
    // 0x2a1c98: 0xad6442d8  sw          $a0, 0x42D8($t3)
    ctx->pc = 0x2a1c98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17112), GPR_U32(ctx, 4));
    // 0x2a1c9c: 0xad6542dc  sw          $a1, 0x42DC($t3)
    ctx->pc = 0x2a1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17116), GPR_U32(ctx, 5));
    // 0x2a1ca0: 0xad6642e0  sw          $a2, 0x42E0($t3)
    ctx->pc = 0x2a1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17120), GPR_U32(ctx, 6));
    // 0x2a1ca4: 0xa56742d2  sh          $a3, 0x42D2($t3)
    ctx->pc = 0x2a1ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17106), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a1ca8: 0xad624310  sw          $v0, 0x4310($t3)
    ctx->pc = 0x2a1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17168), GPR_U32(ctx, 2));
    // 0x2a1cac: 0xa5684326  sh          $t0, 0x4326($t3)
    ctx->pc = 0x2a1cacu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17190), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a1cb0: 0xa5694328  sh          $t1, 0x4328($t3)
    ctx->pc = 0x2a1cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17192), (uint16_t)GPR_U32(ctx, 9));
    // 0x2a1cb4: 0xa56742d0  sh          $a3, 0x42D0($t3)
    ctx->pc = 0x2a1cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17104), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a1cb8: 0xa56042f4  sh          $zero, 0x42F4($t3)
    ctx->pc = 0x2a1cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17140), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1cbc: 0xa56842f6  sh          $t0, 0x42F6($t3)
    ctx->pc = 0x2a1cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17142), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a1cc0: 0xa56942f8  sh          $t1, 0x42F8($t3)
    ctx->pc = 0x2a1cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17144), (uint16_t)GPR_U32(ctx, 9));
    // 0x2a1cc4: 0xa56a42fa  sh          $t2, 0x42FA($t3)
    ctx->pc = 0x2a1cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17146), (uint16_t)GPR_U32(ctx, 10));
    // 0x2a1cc8: 0xad624304  sw          $v0, 0x4304($t3)
    ctx->pc = 0x2a1cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17156), GPR_U32(ctx, 2));
    // 0x2a1ccc: 0xad624308  sw          $v0, 0x4308($t3)
    ctx->pc = 0x2a1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17160), GPR_U32(ctx, 2));
    // 0x2a1cd0: 0xad62430c  sw          $v0, 0x430C($t3)
    ctx->pc = 0x2a1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17164), GPR_U32(ctx, 2));
    // 0x2a1cd4: 0xa5604324  sh          $zero, 0x4324($t3)
    ctx->pc = 0x2a1cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17188), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1cd8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2a1cdc:
    // 0x2a1cdc: 0x2835821  addu        $t3, $s4, $v1
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2a1ce0: 0xdd6240c8  ld          $v0, 0x40C8($t3)
    ctx->pc = 0x2a1ce0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 16584)));
    // 0x2a1ce4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2a1ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2a1ce8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A1CE8u;
    {
        const bool branch_taken_0x2a1ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CE8u;
        // 0x2a1cec: 0x3c031010  lui         $v1, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ce8) {
            ctx->pc = 0x2A1D6Cu;
            goto label_2a1d6c;
        }
    }
    ctx->pc = 0x2A1CF0u;
    // 0x2a1cf0: 0x3c043030  lui         $a0, 0x3030
    ctx->pc = 0x2a1cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12336 << 16));
    // 0x2a1cf4: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x2a1cf8: 0x3c06a0a0  lui         $a2, 0xA0A0
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41120 << 16));
    // 0x2a1cfc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2a1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2a1d00: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a1d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1d04: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2a1d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2a1d08: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x2a1d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a1d0c: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a1d10: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2a1d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1d14: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x2a1d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x2a1d18: 0x34843030  ori         $a0, $a0, 0x3030
    ctx->pc = 0x2a1d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12336);
    // 0x2a1d1c: 0x34a54040  ori         $a1, $a1, 0x4040
    ctx->pc = 0x2a1d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16448);
    // 0x2a1d20: 0x34c6a0a0  ori         $a2, $a2, 0xA0A0
    ctx->pc = 0x2a1d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)41120);
    // 0x2a1d24: 0xa56a432a  sh          $t2, 0x432A($t3)
    ctx->pc = 0x2a1d24u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17194), (uint16_t)GPR_U32(ctx, 10));
    // 0x2a1d28: 0xad6342d4  sw          $v1, 0x42D4($t3)
    ctx->pc = 0x2a1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17108), GPR_U32(ctx, 3));
    // 0x2a1d2c: 0xad6442d8  sw          $a0, 0x42D8($t3)
    ctx->pc = 0x2a1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17112), GPR_U32(ctx, 4));
    // 0x2a1d30: 0xad6542dc  sw          $a1, 0x42DC($t3)
    ctx->pc = 0x2a1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17116), GPR_U32(ctx, 5));
    // 0x2a1d34: 0xad6642e0  sw          $a2, 0x42E0($t3)
    ctx->pc = 0x2a1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17120), GPR_U32(ctx, 6));
    // 0x2a1d38: 0xa56742d2  sh          $a3, 0x42D2($t3)
    ctx->pc = 0x2a1d38u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17106), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a1d3c: 0xad624310  sw          $v0, 0x4310($t3)
    ctx->pc = 0x2a1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17168), GPR_U32(ctx, 2));
    // 0x2a1d40: 0xa5684326  sh          $t0, 0x4326($t3)
    ctx->pc = 0x2a1d40u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17190), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a1d44: 0xa5694328  sh          $t1, 0x4328($t3)
    ctx->pc = 0x2a1d44u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17192), (uint16_t)GPR_U32(ctx, 9));
    // 0x2a1d48: 0xa56742d0  sh          $a3, 0x42D0($t3)
    ctx->pc = 0x2a1d48u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17104), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a1d4c: 0xa56042f4  sh          $zero, 0x42F4($t3)
    ctx->pc = 0x2a1d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17140), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a1d50: 0xa56842f6  sh          $t0, 0x42F6($t3)
    ctx->pc = 0x2a1d50u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17142), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a1d54: 0xa56942f8  sh          $t1, 0x42F8($t3)
    ctx->pc = 0x2a1d54u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17144), (uint16_t)GPR_U32(ctx, 9));
    // 0x2a1d58: 0xa56a42fa  sh          $t2, 0x42FA($t3)
    ctx->pc = 0x2a1d58u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17146), (uint16_t)GPR_U32(ctx, 10));
    // 0x2a1d5c: 0xad624304  sw          $v0, 0x4304($t3)
    ctx->pc = 0x2a1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17156), GPR_U32(ctx, 2));
    // 0x2a1d60: 0xad624308  sw          $v0, 0x4308($t3)
    ctx->pc = 0x2a1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17160), GPR_U32(ctx, 2));
    // 0x2a1d64: 0xad62430c  sw          $v0, 0x430C($t3)
    ctx->pc = 0x2a1d64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17164), GPR_U32(ctx, 2));
    // 0x2a1d68: 0xa5604324  sh          $zero, 0x4324($t3)
    ctx->pc = 0x2a1d68u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 17188), (uint16_t)GPR_U32(ctx, 0));
label_2a1d6c:
    // 0x2a1d6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d70: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a1d74: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a1d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1d78: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1D78u;
    SET_GPR_U32(ctx, 31, 0x2A1D80u);
    ctx->pc = 0x2A1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D78u;
    // 0x2a1d7c: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1D78u, 0x2A1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D80u;
label_2a1d80:
    // 0x2a1d80: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2a1d80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a1d84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d8c: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x2a1d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2a1d90: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1D90u;
    SET_GPR_U32(ctx, 31, 0x2A1D98u);
    ctx->pc = 0x2A1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D90u;
    // 0x2a1d94: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1D90u, 0x2A1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D98u;
label_2a1d98:
    // 0x2a1d98: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2a1d98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a1d9c: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a1d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1da0: 0x3405fffc  ori         $a1, $zero, 0xFFFC
    ctx->pc = 0x2a1da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x2a1da4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x2a1da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x2a1da8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2a1da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2a1dac: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x2a1dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
    // 0x2a1db0: 0x8e0611ac  lw          $a2, 0x11AC($s0)
    ctx->pc = 0x2a1db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4524)));
    // 0x2a1db4: 0x241e0e00  addiu       $fp, $zero, 0xE00
    ctx->pc = 0x2a1db4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x2a1db8: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x2a1db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1dbc: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a1dc0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a1dc0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a1dc4: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x2a1dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a1dc8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a1dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1dcc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1dd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a1dd4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a1dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a1dd8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a1dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a1ddc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1de0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a1de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a1de4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2a1de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a1de8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a1dec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1DECu;
    SET_GPR_U32(ctx, 31, 0x2A1DF4u);
    ctx->pc = 0x2A1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1DECu;
    // 0x2a1df0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1DECu, 0x2A1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DF4u;
label_2a1df4:
    // 0x2a1df4: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x2a1df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2a1df8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2a1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a1dfc: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1e00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e04: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a1e04u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a1e08: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a1e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1e0c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1e10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1e14: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a1e14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a1e18: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a1e18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a1e1c: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x2a1e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a1e20: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2a1e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a1e24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a1e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1e28: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a1e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1e2c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a1e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1e30: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x2a1e30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2a1e34: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1E34u;
    SET_GPR_U32(ctx, 31, 0x2A1E3Cu);
    ctx->pc = 0x2A1E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E34u;
    // 0x2a1e38: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1E34u, 0x2A1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E3Cu;
label_2a1e3c:
    // 0x2a1e3c: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x2a1e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2a1e40: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a1e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1e44: 0x34c6ff80  ori         $a2, $a2, 0xFF80
    ctx->pc = 0x2a1e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65408);
    // 0x2a1e48: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x2a1e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x2a1e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e50: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1E50u;
    SET_GPR_U32(ctx, 31, 0x2A1E58u);
    ctx->pc = 0x2A1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E50u;
    // 0x2a1e54: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1E50u, 0x2A1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E58u;
label_2a1e58:
    // 0x2a1e58: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x2a1e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x2a1e5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a1e60: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1e64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e68: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2a1e6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a1e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a1e70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1e74: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x2a1e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x2a1e78: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a1e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a1e7c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a1e80: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a1e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a1e84: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1E84u;
    SET_GPR_U32(ctx, 31, 0x2A1E8Cu);
    ctx->pc = 0x2A1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E84u;
    // 0x2a1e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1E84u, 0x2A1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E8Cu;
label_2a1e8c:
    // 0x2a1e8c: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1e90: 0x3c052420  lui         $a1, 0x2420
    ctx->pc = 0x2a1e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9248 << 16));
    // 0x2a1e94: 0x8e6211b8  lw          $v0, 0x11B8($s3)
    ctx->pc = 0x2a1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4536)));
    // 0x2a1e98: 0x3407c000  ori         $a3, $zero, 0xC000
    ctx->pc = 0x2a1e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2a1e9c: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x2a1e9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x2a1ea0: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x2a1ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1ea4: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x2a1ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a1ea8: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x2a1ea8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2a1eac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1eb0: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a1eb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a1eb4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2a1eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2a1eb8: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x2a1eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x2a1ebc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a1ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a1ec0: 0x3c63025  or          $a2, $fp, $a2
    ctx->pc = 0x2a1ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x2a1ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ec8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a1ec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a1ecc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a1ed0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1ED0u;
    SET_GPR_U32(ctx, 31, 0x2A1ED8u);
    ctx->pc = 0x2A1ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1ED0u;
    // 0x2a1ed4: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1ED0u, 0x2A1ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1ED8u;
label_2a1ed8:
    // 0x2a1ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1edc: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x2a1edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2a1ee0: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x2a1ee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x2a1ee4: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2a1ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2a1ee8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1EE8u;
    SET_GPR_U32(ctx, 31, 0x2A1EF0u);
    ctx->pc = 0x2A1EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EE8u;
    // 0x2a1eec: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1EE8u, 0x2A1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EF0u;
label_2a1ef0:
    // 0x2a1ef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ef4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a1ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a1ef8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1EF8u;
    SET_GPR_U32(ctx, 31, 0x2A1F00u);
    ctx->pc = 0x2A1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EF8u;
    // 0x2a1efc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1EF8u, 0x2A1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F00u;
label_2a1f00:
    // 0x2a1f00: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1f04: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x2a1f04u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1f08: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a1f0c: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x2a1f0cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a1f10: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a1f10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1f14: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2A1F14u;
    {
        const bool branch_taken_0x2a1f14 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F14u;
        // 0x2a1f18: 0x3c160058  lui         $s6, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f14) {
            ctx->pc = 0x2A204Cu;
            goto label_2a204c;
        }
    }
    ctx->pc = 0x2A1F1Cu;
    // 0x2a1f1c: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2a1f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a1f20: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x2a1f20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1f24: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x2a1f24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2a1f28: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x2a1f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a1f2c: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a1f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
label_2a1f30:
    // 0x2a1f30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a1f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f34: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2a1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2a1f38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a1f3c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2a1f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2a1f40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a1f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a1f44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a1f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a1f48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f4c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a1f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a1f50: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a1f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a1f54: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a1f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a1f58: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1F58u;
    SET_GPR_U32(ctx, 31, 0x2A1F60u);
    ctx->pc = 0x2A1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F58u;
    // 0x2a1f5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1F58u, 0x2A1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F60u;
label_2a1f60:
    // 0x2a1f60: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x2a1f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2a1f64: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a1f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a1f68: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a1f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a1f6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f70: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1F70u;
    SET_GPR_U32(ctx, 31, 0x2A1F78u);
    ctx->pc = 0x2A1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F70u;
    // 0x2a1f74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1F70u, 0x2A1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F78u;
label_2a1f78:
    // 0x2a1f78: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1f7c: 0x24070808  addiu       $a3, $zero, 0x808
    ctx->pc = 0x2a1f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2a1f80: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a1f84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f88: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a1f8c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a1f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1f94: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a1f94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1f98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a1f98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a1f9c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2a1f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a1fa0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1fa4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2a1fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a1fa8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2a1fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a1fac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1FACu;
    SET_GPR_U32(ctx, 31, 0x2A1FB4u);
    ctx->pc = 0x2A1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FACu;
    // 0x2a1fb0: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1FACu, 0x2A1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FB4u;
label_2a1fb4:
    // 0x2a1fb4: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a1fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a1fb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fbc: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1fc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a1fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1fc4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2a1fc8: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x2a1fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a1fcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1fd0: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x2a1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a1fd4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1fd8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1FD8u;
    SET_GPR_U32(ctx, 31, 0x2A1FE0u);
    ctx->pc = 0x2A1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FD8u;
    // 0x2a1fdc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1FD8u, 0x2A1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FE0u;
label_2a1fe0:
    // 0x2a1fe0: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1fe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fe8: 0x8e67118c  lw          $a3, 0x118C($s3)
    ctx->pc = 0x2a1fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a1fec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a1fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1ff0: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a1ff4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1ff8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1ffc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a1ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a2000: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a2000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a2004: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a2004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a2008: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a2008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a200c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a200cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a2010: 0x24630808  addiu       $v1, $v1, 0x808
    ctx->pc = 0x2a2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2056));
    // 0x2a2014: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a2014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a2018: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a2018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a201c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a201cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a2020: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A2020u;
    SET_GPR_U32(ctx, 31, 0x2A2028u);
    ctx->pc = 0x2A2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2020u;
    // 0x2a2024: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A2020u, 0x2A2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2028u;
label_2a2028:
    // 0x2a2028: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a202c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2030: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a2030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a2034: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a2038: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a2038u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a203c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a203cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a2040: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a2040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2044: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2A2044u;
    {
        const bool branch_taken_0x2a2044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2044) {
            ctx->pc = 0x2A2048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2044u;
            // 0x2a2048: 0x8e66118c  lw          $a2, 0x118C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1f30;
        }
    }
    ctx->pc = 0x2A204Cu;
label_2a204c:
    // 0x2a204c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2a204cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2a2050: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x2a2050u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x2a2054: 0x26100780  addiu       $s0, $s0, 0x780
    ctx->pc = 0x2a2054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
    // 0x2a2058: 0x348442d0  ori         $a0, $a0, 0x42D0
    ctx->pc = 0x2a2058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17104);
    // 0x2a205c: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a2060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2064: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x2a2064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x2a2068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a206c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2a206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2a2070: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x2A2070u;
    SET_GPR_U32(ctx, 31, 0x2A2078u);
    ctx->pc = 0x2A2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2070u;
    // 0x2a2074: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x2A2070u, 0x2A2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2078u;
label_2a2078:
    // 0x2a2078: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a2078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a207c: 0xc0a6642  jal         func_299908
    ctx->pc = 0x2A207Cu;
    SET_GPR_U32(ctx, 31, 0x2A2084u);
    ctx->pc = 0x2A2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A207Cu;
    // 0x2a2080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x2A207Cu, 0x2A2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2084u;
label_2a2084:
    // 0x2a2084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a208c: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x2A208Cu;
    SET_GPR_U32(ctx, 31, 0x2A2094u);
    ctx->pc = 0x2A2090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A208Cu;
    // 0x2a2090: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x2A208Cu, 0x2A2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2094u;
label_2a2094:
    // 0x2a2094: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a209c: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x2A209Cu;
    SET_GPR_U32(ctx, 31, 0x2A20A4u);
    ctx->pc = 0x2A20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A209Cu;
    // 0x2a20a0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x2A209Cu, 0x2A20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20A4u;
label_2a20a4:
    // 0x2a20a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a20a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a20a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20ac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A20ACu;
    SET_GPR_U32(ctx, 31, 0x2A20B4u);
    ctx->pc = 0x2A20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20ACu;
    // 0x2a20b0: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A20ACu, 0x2A20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20B4u;
label_2a20b4:
    // 0x2a20b4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a20b8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a20b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a20bc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A20BCu;
    SET_GPR_U32(ctx, 31, 0x2A20C4u);
    ctx->pc = 0x2A20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20BCu;
    // 0x2a20c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A20BCu, 0x2A20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20C4u;
label_2a20c4:
    // 0x2a20c4: 0x8ee51180  lw          $a1, 0x1180($s7)
    ctx->pc = 0x2a20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a20c8: 0x1e3142  srl         $a2, $fp, 5
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 30), 5));
    // 0x2a20cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2a20ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a20d0: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x2a20d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a20d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a20d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20d8: 0x225182a  slt         $v1, $s1, $a1
    ctx->pc = 0x2a20d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a20dc: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x2a20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2a20e0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2a20e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a20e4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a20e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a20e8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a20ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a20ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a20f0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a20f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a20f4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A20F4u;
    SET_GPR_U32(ctx, 31, 0x2A20FCu);
    ctx->pc = 0x2A20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20F4u;
    // 0x2a20f8: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A20F4u, 0x2A20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20FCu;
label_2a20fc:
    // 0x2a20fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a2100: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x2a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a2104: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x2a2104u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a2108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a210c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a2110: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a2110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a2114: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a2114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a2118: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a2118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a211c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a211cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a2120: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A2120u;
    SET_GPR_U32(ctx, 31, 0x2A2128u);
    ctx->pc = 0x2A2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2120u;
    // 0x2a2124: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A2120u, 0x2A2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2128u;
label_2a2128:
    // 0x2a2128: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a2128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a212c: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a212cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a2130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2134: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A2134u;
    SET_GPR_U32(ctx, 31, 0x2A213Cu);
    ctx->pc = 0x2A2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2134u;
    // 0x2a2138: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A2134u, 0x2A213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A213Cu;
label_2a213c:
    // 0x2a213c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a2140: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2a2140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2a2144: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a2144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a2148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a214c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x2a214cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2a2150: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a2150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a2154: 0x92461ad8  lbu         $a2, 0x1AD8($s2)
    ctx->pc = 0x2a2154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6872)));
    // 0x2a2158: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a2158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a215c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A215Cu;
    SET_GPR_U32(ctx, 31, 0x2A2164u);
    ctx->pc = 0x2A2160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A215Cu;
    // 0x2a2160: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A215Cu, 0x2A2164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2164u;
label_2a2164:
    // 0x2a2164: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2a2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a2168: 0x3c0825b0  lui         $t0, 0x25B0
    ctx->pc = 0x2a2168u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9648 << 16));
    // 0x2a216c: 0xa2421ad8  sb          $v0, 0x1AD8($s2)
    ctx->pc = 0x2a216cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6872), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2170: 0x3409800e  ori         $t1, $zero, 0x800E
    ctx->pc = 0x2a2170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2a2174: 0x94db8  dsll        $t1, $t1, 22
    ctx->pc = 0x2a2174u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 22);
    // 0x2a2178: 0x35298c00  ori         $t1, $t1, 0x8C00
    ctx->pc = 0x2a2178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)35840);
    // 0x2a217c: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x2a217cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x2a2180: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2184: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a2188: 0x96e21180  lhu         $v0, 0x1180($s7)
    ctx->pc = 0x2a2188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a218c: 0xa6421ada  sh          $v0, 0x1ADA($s2)
    ctx->pc = 0x2a218cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6874), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a2190: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a2190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a2194: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a2198: 0x8c4711b8  lw          $a3, 0x11B8($v0)
    ctx->pc = 0x2a2198u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x2a219c: 0x223302a  slt         $a2, $s1, $v1
    ctx->pc = 0x2a219cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a21a0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a21a4: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2a21a4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a21a8: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x2a21a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x2a21ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a21acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a21b0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a21b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a21b4: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x2a21b4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x2a21b8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a21b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a21bc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2a21bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2a21c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a21c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a21c4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a21c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a21c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A21C8u;
    SET_GPR_U32(ctx, 31, 0x2A21D0u);
    ctx->pc = 0x2A21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21C8u;
    // 0x2a21cc: 0xc93025  or          $a2, $a2, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A21C8u, 0x2A21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21D0u;
label_2a21d0:
    // 0x2a21d0: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x2a21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a21d4: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x2a21d4u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a21d8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a21dc: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x2a21dcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a21e0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a21e4: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2A21E4u;
    {
        const bool branch_taken_0x2a21e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21E4u;
        // 0x2a21e8: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21e4) {
            ctx->pc = 0x2A2320u;
            goto label_2a2320;
        }
    }
    ctx->pc = 0x2A21ECu;
    // 0x2a21ec: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2a21ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2a21f0: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x2a21f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x2a21f4: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x2a21f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a21f8: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x2a21f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2a21fc: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x2a21fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a2200: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x2a2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x2a2204: 0x0  nop
    ctx->pc = 0x2a2204u;
    // NOP
label_2a2208:
    // 0x2a2208: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a220c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x2a220cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2a2210: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a2210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a2214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a2218: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a2218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a221c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a2220: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2224: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a2224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a2228: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A2228u;
    SET_GPR_U32(ctx, 31, 0x2A2230u);
    ctx->pc = 0x2A222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2228u;
    // 0x2a222c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A2228u, 0x2A2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2230u;
label_2a2230:
    // 0x2a2230: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a2230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a2234: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a2234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a2238: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a2238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a223c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2240: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a2240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2244: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A2244u;
    SET_GPR_U32(ctx, 31, 0x2A224Cu);
    ctx->pc = 0x2A2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2244u;
    // 0x2a2248: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A2244u, 0x2A224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A224Cu;
label_2a224c:
    // 0x2a224c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a2250: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2a2250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a2254: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x2a2254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x2a2258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a225c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a225cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a2260: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a2260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a2264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2268: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a2268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a226c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a226cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a2270: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2a2270u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a2274: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a2274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a2278: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2a2278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a227c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2a227cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a2280: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A2280u;
    SET_GPR_U32(ctx, 31, 0x2A2288u);
    ctx->pc = 0x2A2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2280u;
    // 0x2a2284: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A2280u, 0x2A2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2288u;
label_2a2288:
    // 0x2a2288: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x2a2288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x2a228c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2290: 0x96421ada  lhu         $v0, 0x1ADA($s2)
    ctx->pc = 0x2a2290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6874)));
    // 0x2a2294: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2298: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a2298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a229c: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x2a229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a22a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a22a4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x2a22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a22a8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a22a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a22ac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A22ACu;
    SET_GPR_U32(ctx, 31, 0x2A22B4u);
    ctx->pc = 0x2A22B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A22ACu;
    // 0x2a22b0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A22ACu, 0x2A22B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22B4u;
label_2a22b4:
    // 0x2a22b4: 0x8e271180  lw          $a3, 0x1180($s1)
    ctx->pc = 0x2a22b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a22b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a22b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22bc: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x2a22bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x2a22c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a22c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a22c4: 0x8ea8118c  lw          $t0, 0x118C($s5)
    ctx->pc = 0x2a22c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x2a22c8: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x2a22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2a22cc: 0x96421ada  lhu         $v0, 0x1ADA($s2)
    ctx->pc = 0x2a22ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6874)));
    // 0x2a22d0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2a22d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a22d4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2a22d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2a22d8: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x2a22d8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2a22dc: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2a22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2a22e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a22e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a22e4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2a22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a22e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a22ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a22ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a22f0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a22f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a22f4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A22F4u;
    SET_GPR_U32(ctx, 31, 0x2A22FCu);
    ctx->pc = 0x2A22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A22F4u;
    // 0x2a22f8: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A22F4u, 0x2A22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22FCu;
label_2a22fc:
    // 0x2a22fc: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a2300: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a2300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2304: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a2304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a2308: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a230c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a230cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a2310: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a2310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a2314: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2a2314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2318: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2A2318u;
    {
        const bool branch_taken_0x2a2318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2318u;
        // 0x2a231c: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2318) {
            ctx->pc = 0x2A2208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2208;
        }
    }
    ctx->pc = 0x2A2320u;
label_2a2320:
    // 0x2a2320: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a2320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a2324: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a2324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a2328: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a2328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a232c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a232cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2330: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a2330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2334: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a2334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2338: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2a2338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a233c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2a233cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2340: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2a2340u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2348: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2348u;
        // 0x2a234c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2350u;
    // 0x2a2350: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2a2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a2354: 0x0  nop
    ctx->pc = 0x2a2354u;
    // NOP
    ctx->pc = 0x2a2358u;
}
