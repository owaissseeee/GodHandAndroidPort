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

// Function: cCollisionSolidManage_ChkHit
// Address: 0x1348e8 - 0x134cb0
void cCollisionSolidManage_ChkHit_0x1348e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_ChkHit_0x1348e8");
#endif

    switch (ctx->pc) {
        case 0x1348e8u: goto label_1348e8;
        case 0x1348ecu: goto label_1348ec;
        case 0x1348f0u: goto label_1348f0;
        case 0x1348f4u: goto label_1348f4;
        case 0x1348f8u: goto label_1348f8;
        case 0x1348fcu: goto label_1348fc;
        case 0x134900u: goto label_134900;
        case 0x134904u: goto label_134904;
        case 0x134908u: goto label_134908;
        case 0x13490cu: goto label_13490c;
        case 0x134910u: goto label_134910;
        case 0x134914u: goto label_134914;
        case 0x134918u: goto label_134918;
        case 0x13491cu: goto label_13491c;
        case 0x134920u: goto label_134920;
        case 0x134924u: goto label_134924;
        case 0x134928u: goto label_134928;
        case 0x13492cu: goto label_13492c;
        case 0x134930u: goto label_134930;
        case 0x134934u: goto label_134934;
        case 0x134938u: goto label_134938;
        case 0x13493cu: goto label_13493c;
        case 0x134940u: goto label_134940;
        case 0x134944u: goto label_134944;
        case 0x134948u: goto label_134948;
        case 0x13494cu: goto label_13494c;
        case 0x134950u: goto label_134950;
        case 0x134954u: goto label_134954;
        case 0x134958u: goto label_134958;
        case 0x13495cu: goto label_13495c;
        case 0x134960u: goto label_134960;
        case 0x134964u: goto label_134964;
        case 0x134968u: goto label_134968;
        case 0x13496cu: goto label_13496c;
        case 0x134970u: goto label_134970;
        case 0x134974u: goto label_134974;
        case 0x134978u: goto label_134978;
        case 0x13497cu: goto label_13497c;
        case 0x134980u: goto label_134980;
        case 0x134984u: goto label_134984;
        case 0x134988u: goto label_134988;
        case 0x13498cu: goto label_13498c;
        case 0x134990u: goto label_134990;
        case 0x134994u: goto label_134994;
        case 0x134998u: goto label_134998;
        case 0x13499cu: goto label_13499c;
        case 0x1349a0u: goto label_1349a0;
        case 0x1349a4u: goto label_1349a4;
        case 0x1349a8u: goto label_1349a8;
        case 0x1349acu: goto label_1349ac;
        case 0x1349b0u: goto label_1349b0;
        case 0x1349b4u: goto label_1349b4;
        case 0x1349b8u: goto label_1349b8;
        case 0x1349bcu: goto label_1349bc;
        case 0x1349c0u: goto label_1349c0;
        case 0x1349c4u: goto label_1349c4;
        case 0x1349c8u: goto label_1349c8;
        case 0x1349ccu: goto label_1349cc;
        case 0x1349d0u: goto label_1349d0;
        case 0x1349d4u: goto label_1349d4;
        case 0x1349d8u: goto label_1349d8;
        case 0x1349dcu: goto label_1349dc;
        case 0x1349e0u: goto label_1349e0;
        case 0x1349e4u: goto label_1349e4;
        case 0x1349e8u: goto label_1349e8;
        case 0x1349ecu: goto label_1349ec;
        case 0x1349f0u: goto label_1349f0;
        case 0x1349f4u: goto label_1349f4;
        case 0x1349f8u: goto label_1349f8;
        case 0x1349fcu: goto label_1349fc;
        case 0x134a00u: goto label_134a00;
        case 0x134a04u: goto label_134a04;
        case 0x134a08u: goto label_134a08;
        case 0x134a0cu: goto label_134a0c;
        case 0x134a10u: goto label_134a10;
        case 0x134a14u: goto label_134a14;
        case 0x134a18u: goto label_134a18;
        case 0x134a1cu: goto label_134a1c;
        case 0x134a20u: goto label_134a20;
        case 0x134a24u: goto label_134a24;
        case 0x134a28u: goto label_134a28;
        case 0x134a2cu: goto label_134a2c;
        case 0x134a30u: goto label_134a30;
        case 0x134a34u: goto label_134a34;
        case 0x134a38u: goto label_134a38;
        case 0x134a3cu: goto label_134a3c;
        case 0x134a40u: goto label_134a40;
        case 0x134a44u: goto label_134a44;
        case 0x134a48u: goto label_134a48;
        case 0x134a4cu: goto label_134a4c;
        case 0x134a50u: goto label_134a50;
        case 0x134a54u: goto label_134a54;
        case 0x134a58u: goto label_134a58;
        case 0x134a5cu: goto label_134a5c;
        case 0x134a60u: goto label_134a60;
        case 0x134a64u: goto label_134a64;
        case 0x134a68u: goto label_134a68;
        case 0x134a6cu: goto label_134a6c;
        case 0x134a70u: goto label_134a70;
        case 0x134a74u: goto label_134a74;
        case 0x134a78u: goto label_134a78;
        case 0x134a7cu: goto label_134a7c;
        case 0x134a80u: goto label_134a80;
        case 0x134a84u: goto label_134a84;
        case 0x134a88u: goto label_134a88;
        case 0x134a8cu: goto label_134a8c;
        case 0x134a90u: goto label_134a90;
        case 0x134a94u: goto label_134a94;
        case 0x134a98u: goto label_134a98;
        case 0x134a9cu: goto label_134a9c;
        case 0x134aa0u: goto label_134aa0;
        case 0x134aa4u: goto label_134aa4;
        case 0x134aa8u: goto label_134aa8;
        case 0x134aacu: goto label_134aac;
        case 0x134ab0u: goto label_134ab0;
        case 0x134ab4u: goto label_134ab4;
        case 0x134ab8u: goto label_134ab8;
        case 0x134abcu: goto label_134abc;
        case 0x134ac0u: goto label_134ac0;
        case 0x134ac4u: goto label_134ac4;
        case 0x134ac8u: goto label_134ac8;
        case 0x134accu: goto label_134acc;
        case 0x134ad0u: goto label_134ad0;
        case 0x134ad4u: goto label_134ad4;
        case 0x134ad8u: goto label_134ad8;
        case 0x134adcu: goto label_134adc;
        case 0x134ae0u: goto label_134ae0;
        case 0x134ae4u: goto label_134ae4;
        case 0x134ae8u: goto label_134ae8;
        case 0x134aecu: goto label_134aec;
        case 0x134af0u: goto label_134af0;
        case 0x134af4u: goto label_134af4;
        case 0x134af8u: goto label_134af8;
        case 0x134afcu: goto label_134afc;
        case 0x134b00u: goto label_134b00;
        case 0x134b04u: goto label_134b04;
        case 0x134b08u: goto label_134b08;
        case 0x134b0cu: goto label_134b0c;
        case 0x134b10u: goto label_134b10;
        case 0x134b14u: goto label_134b14;
        case 0x134b18u: goto label_134b18;
        case 0x134b1cu: goto label_134b1c;
        case 0x134b20u: goto label_134b20;
        case 0x134b24u: goto label_134b24;
        case 0x134b28u: goto label_134b28;
        case 0x134b2cu: goto label_134b2c;
        case 0x134b30u: goto label_134b30;
        case 0x134b34u: goto label_134b34;
        case 0x134b38u: goto label_134b38;
        case 0x134b3cu: goto label_134b3c;
        case 0x134b40u: goto label_134b40;
        case 0x134b44u: goto label_134b44;
        case 0x134b48u: goto label_134b48;
        case 0x134b4cu: goto label_134b4c;
        case 0x134b50u: goto label_134b50;
        case 0x134b54u: goto label_134b54;
        case 0x134b58u: goto label_134b58;
        case 0x134b5cu: goto label_134b5c;
        case 0x134b60u: goto label_134b60;
        case 0x134b64u: goto label_134b64;
        case 0x134b68u: goto label_134b68;
        case 0x134b6cu: goto label_134b6c;
        case 0x134b70u: goto label_134b70;
        case 0x134b74u: goto label_134b74;
        case 0x134b78u: goto label_134b78;
        case 0x134b7cu: goto label_134b7c;
        case 0x134b80u: goto label_134b80;
        case 0x134b84u: goto label_134b84;
        case 0x134b88u: goto label_134b88;
        case 0x134b8cu: goto label_134b8c;
        case 0x134b90u: goto label_134b90;
        case 0x134b94u: goto label_134b94;
        case 0x134b98u: goto label_134b98;
        case 0x134b9cu: goto label_134b9c;
        case 0x134ba0u: goto label_134ba0;
        case 0x134ba4u: goto label_134ba4;
        case 0x134ba8u: goto label_134ba8;
        case 0x134bacu: goto label_134bac;
        case 0x134bb0u: goto label_134bb0;
        case 0x134bb4u: goto label_134bb4;
        case 0x134bb8u: goto label_134bb8;
        case 0x134bbcu: goto label_134bbc;
        case 0x134bc0u: goto label_134bc0;
        case 0x134bc4u: goto label_134bc4;
        case 0x134bc8u: goto label_134bc8;
        case 0x134bccu: goto label_134bcc;
        case 0x134bd0u: goto label_134bd0;
        case 0x134bd4u: goto label_134bd4;
        case 0x134bd8u: goto label_134bd8;
        case 0x134bdcu: goto label_134bdc;
        case 0x134be0u: goto label_134be0;
        case 0x134be4u: goto label_134be4;
        case 0x134be8u: goto label_134be8;
        case 0x134becu: goto label_134bec;
        case 0x134bf0u: goto label_134bf0;
        case 0x134bf4u: goto label_134bf4;
        case 0x134bf8u: goto label_134bf8;
        case 0x134bfcu: goto label_134bfc;
        case 0x134c00u: goto label_134c00;
        case 0x134c04u: goto label_134c04;
        case 0x134c08u: goto label_134c08;
        case 0x134c0cu: goto label_134c0c;
        case 0x134c10u: goto label_134c10;
        case 0x134c14u: goto label_134c14;
        case 0x134c18u: goto label_134c18;
        case 0x134c1cu: goto label_134c1c;
        case 0x134c20u: goto label_134c20;
        case 0x134c24u: goto label_134c24;
        case 0x134c28u: goto label_134c28;
        case 0x134c2cu: goto label_134c2c;
        case 0x134c30u: goto label_134c30;
        case 0x134c34u: goto label_134c34;
        case 0x134c38u: goto label_134c38;
        case 0x134c3cu: goto label_134c3c;
        case 0x134c40u: goto label_134c40;
        case 0x134c44u: goto label_134c44;
        case 0x134c48u: goto label_134c48;
        case 0x134c4cu: goto label_134c4c;
        case 0x134c50u: goto label_134c50;
        case 0x134c54u: goto label_134c54;
        case 0x134c58u: goto label_134c58;
        case 0x134c5cu: goto label_134c5c;
        case 0x134c60u: goto label_134c60;
        case 0x134c64u: goto label_134c64;
        case 0x134c68u: goto label_134c68;
        case 0x134c6cu: goto label_134c6c;
        case 0x134c70u: goto label_134c70;
        case 0x134c74u: goto label_134c74;
        case 0x134c78u: goto label_134c78;
        case 0x134c7cu: goto label_134c7c;
        case 0x134c80u: goto label_134c80;
        case 0x134c84u: goto label_134c84;
        case 0x134c88u: goto label_134c88;
        case 0x134c8cu: goto label_134c8c;
        case 0x134c90u: goto label_134c90;
        case 0x134c94u: goto label_134c94;
        case 0x134c98u: goto label_134c98;
        case 0x134c9cu: goto label_134c9c;
        case 0x134ca0u: goto label_134ca0;
        case 0x134ca4u: goto label_134ca4;
        case 0x134ca8u: goto label_134ca8;
        case 0x134cacu: goto label_134cac;
        default: break;
    }

    ctx->pc = 0x1348e8u;

label_1348e8:
    // 0x1348e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1348e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1348ec:
    // 0x1348ec: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1348ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1348f0:
    // 0x1348f0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1348f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1348f4:
    // 0x1348f4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1348f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1348f8:
    // 0x1348f8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1348f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1348fc:
    // 0x1348fc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1348fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_134900:
    // 0x134900: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x134900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_134904:
    // 0x134904: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x134904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_134908:
    // 0x134908: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x134908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_13490c:
    // 0x13490c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x13490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_134910:
    // 0x134910: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_134914:
    // 0x134914: 0x9ca305a0  lwu         $v1, 0x5A0($a1)
    ctx->pc = 0x134914u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 1440)));
label_134918:
    // 0x134918: 0x310bb  dsra        $v0, $v1, 2
    ctx->pc = 0x134918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
label_13491c:
    // 0x13491c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_134920:
    // 0x134920: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_134924:
    if (ctx->pc == 0x134924u) {
        ctx->pc = 0x134924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134920u;
        // 0x134924: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134928u;
        goto label_134928;
    }
    ctx->pc = 0x134920u;
    {
        const bool branch_taken_0x134920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134920u;
        // 0x134924: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134920) {
            ctx->pc = 0x134938u;
            goto label_134938;
        }
    }
    ctx->pc = 0x134928u;
label_134928:
    // 0x134928: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x134928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
label_13492c:
    // 0x13492c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_134930:
    // 0x134930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_134934:
    if (ctx->pc == 0x134934u) {
        ctx->pc = 0x134934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134930u;
        // 0x134934: 0x26820008  addiu       $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134938u;
        goto label_134938;
    }
    ctx->pc = 0x134930u;
    {
        const bool branch_taken_0x134930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134930u;
        // 0x134934: 0x26820008  addiu       $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134930) {
            ctx->pc = 0x134940u;
            goto label_134940;
        }
    }
    ctx->pc = 0x134938u;
label_134938:
    // 0x134938: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_13493c:
    if (ctx->pc == 0x13493Cu) {
        ctx->pc = 0x13493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134938u;
        // 0x13493c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134940u;
        goto label_134940;
    }
    ctx->pc = 0x134938u;
    {
        const bool branch_taken_0x134938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134938u;
        // 0x13493c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134938) {
            ctx->pc = 0x134C80u;
            goto label_134c80;
        }
    }
    ctx->pc = 0x134940u;
label_134940:
    // 0x134940: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x134940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_134944:
    // 0x134944: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x134944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_134948:
    // 0x134948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13494c:
    // 0x13494c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13494cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134950:
    // 0x134950: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x134950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_134954:
    // 0x134954: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x134954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_134958:
    // 0x134958: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x134958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_13495c:
    // 0x13495c: 0x0  nop
    ctx->pc = 0x13495cu;
    // NOP
label_134960:
    // 0x134960: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_134964:
    if (ctx->pc == 0x134964u) {
        ctx->pc = 0x134964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134960u;
        // 0x134964: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134968u;
        goto label_134968;
    }
    ctx->pc = 0x134960u;
    {
        const bool branch_taken_0x134960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134960u;
        // 0x134964: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134960) {
            ctx->pc = 0x134950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134950;
        }
    }
    ctx->pc = 0x134968u;
label_134968:
    // 0x134968: 0xae800088  sw          $zero, 0x88($s4)
    ctx->pc = 0x134968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 0));
label_13496c:
    // 0x13496c: 0xc04d1b2  jal         func_1346C8
label_134970:
    if (ctx->pc == 0x134970u) {
        ctx->pc = 0x134970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13496Cu;
        // 0x134970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134974u;
        goto label_134974;
    }
    ctx->pc = 0x13496Cu;
    SET_GPR_U32(ctx, 31, 0x134974u);
    ctx->pc = 0x134970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13496Cu;
    // 0x134970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346C8u, 0x13496Cu, 0x134974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134974u;
label_134974:
    // 0x134974: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134978:
    // 0x134978: 0x12a0ffef  beqz        $s5, . + 4 + (-0x11 << 2)
label_13497c:
    if (ctx->pc == 0x13497Cu) {
        ctx->pc = 0x13497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134978u;
        // 0x13497c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134980u;
        goto label_134980;
    }
    ctx->pc = 0x134978u;
    {
        const bool branch_taken_0x134978 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134978u;
        // 0x13497c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134978) {
            ctx->pc = 0x134938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134938;
        }
    }
    ctx->pc = 0x134980u;
label_134980:
    // 0x134980: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x134980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_134984:
    // 0x134984: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x134984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_134988:
    // 0x134988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13498c:
    // 0x13498c: 0x3c01c61c  lui         $at, 0xC61C
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50716 << 16));
label_134990:
    // 0x134990: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x134990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_134994:
    // 0x134994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x134994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_134998:
    // 0x134998: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13499c:
    // 0x13499c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1349a0:
    // 0x1349a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1349a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1349a4:
    // 0x1349a4: 0x26be0020  addiu       $fp, $s5, 0x20
    ctx->pc = 0x1349a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1349a8:
    // 0x1349a8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1349a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1349ac:
    // 0x1349ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1349acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1349b0:
    // 0x1349b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1349b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1349b4:
    // 0x1349b4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1349b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1349b8:
    // 0x1349b8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1349b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1349bc:
    // 0x1349bc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1349bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1349c0:
    // 0x1349c0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1349c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1349c4:
    // 0x1349c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1349c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1349c8:
    // 0x1349c8: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1349cc:
    // 0x1349cc: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_1349d0:
    if (ctx->pc == 0x1349D0u) {
        ctx->pc = 0x1349D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349CCu;
        // 0x1349d0: 0x26b70030  addiu       $s7, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349D4u;
        goto label_1349d4;
    }
    ctx->pc = 0x1349CCu;
    {
        const bool branch_taken_0x1349cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349CCu;
        // 0x1349d0: 0x26b70030  addiu       $s7, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349cc) {
            ctx->pc = 0x134A84u;
            goto label_134a84;
        }
    }
    ctx->pc = 0x1349D4u;
label_1349d4:
    // 0x1349d4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1349d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1349d8:
    // 0x1349d8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1349dc:
    // 0x1349dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1349dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1349e0:
    // 0x1349e0: 0x60f809  jalr        $v1
label_1349e4:
    if (ctx->pc == 0x1349E4u) {
        ctx->pc = 0x1349E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349E0u;
        // 0x1349e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349E8u;
        goto label_1349e8;
    }
    ctx->pc = 0x1349E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1349E8u);
        ctx->pc = 0x1349E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349E0u;
        // 0x1349e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1349E0u, 0x1349E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1349E8u;
label_1349e8:
    // 0x1349e8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1349e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1349ec:
    // 0x1349ec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1349ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1349f0:
    // 0x1349f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1349f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1349f4:
    // 0x1349f4: 0x0  nop
    ctx->pc = 0x1349f4u;
    // NOP
label_1349f8:
    // 0x1349f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1349fc:
    if (ctx->pc == 0x1349FCu) {
        ctx->pc = 0x1349FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349F8u;
        // 0x1349fc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A00u;
        goto label_134a00;
    }
    ctx->pc = 0x1349F8u;
    {
        const bool branch_taken_0x1349f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1349f8) {
            ctx->pc = 0x1349FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1349F8u;
            // 0x1349fc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A00u;
            goto label_134a00;
        }
    }
    ctx->pc = 0x134A00u;
label_134a00:
    // 0x134a00: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x134a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134a04:
    // 0x134a04: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x134a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134a08:
    // 0x134a08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134a0c:
    // 0x134a0c: 0x0  nop
    ctx->pc = 0x134a0cu;
    // NOP
label_134a10:
    // 0x134a10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_134a14:
    if (ctx->pc == 0x134A14u) {
        ctx->pc = 0x134A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A10u;
        // 0x134a14: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A18u;
        goto label_134a18;
    }
    ctx->pc = 0x134A10u;
    {
        const bool branch_taken_0x134a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a10) {
            ctx->pc = 0x134A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A10u;
            // 0x134a14: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A18u;
            goto label_134a18;
        }
    }
    ctx->pc = 0x134A18u;
label_134a18:
    // 0x134a18: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x134a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134a1c:
    // 0x134a1c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x134a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134a20:
    // 0x134a20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134a24:
    // 0x134a24: 0x0  nop
    ctx->pc = 0x134a24u;
    // NOP
label_134a28:
    // 0x134a28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_134a2c:
    if (ctx->pc == 0x134A2Cu) {
        ctx->pc = 0x134A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A28u;
        // 0x134a2c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A30u;
        goto label_134a30;
    }
    ctx->pc = 0x134A28u;
    {
        const bool branch_taken_0x134a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a28) {
            ctx->pc = 0x134A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A28u;
            // 0x134a2c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A30u;
            goto label_134a30;
        }
    }
    ctx->pc = 0x134A30u;
label_134a30:
    // 0x134a30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x134a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134a34:
    // 0x134a34: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x134a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134a38:
    // 0x134a38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x134a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134a3c:
    // 0x134a3c: 0x0  nop
    ctx->pc = 0x134a3cu;
    // NOP
label_134a40:
    // 0x134a40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_134a44:
    if (ctx->pc == 0x134A44u) {
        ctx->pc = 0x134A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A40u;
        // 0x134a44: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A48u;
        goto label_134a48;
    }
    ctx->pc = 0x134A40u;
    {
        const bool branch_taken_0x134a40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a40) {
            ctx->pc = 0x134A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A40u;
            // 0x134a44: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A48u;
            goto label_134a48;
        }
    }
    ctx->pc = 0x134A48u;
label_134a48:
    // 0x134a48: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x134a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134a4c:
    // 0x134a4c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x134a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134a50:
    // 0x134a50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x134a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134a54:
    // 0x134a54: 0x0  nop
    ctx->pc = 0x134a54u;
    // NOP
label_134a58:
    // 0x134a58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_134a5c:
    if (ctx->pc == 0x134A5Cu) {
        ctx->pc = 0x134A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A58u;
        // 0x134a5c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A60u;
        goto label_134a60;
    }
    ctx->pc = 0x134A58u;
    {
        const bool branch_taken_0x134a58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a58) {
            ctx->pc = 0x134A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A58u;
            // 0x134a5c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A60u;
            goto label_134a60;
        }
    }
    ctx->pc = 0x134A60u;
label_134a60:
    // 0x134a60: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x134a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134a64:
    // 0x134a64: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x134a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134a68:
    // 0x134a68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x134a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134a6c:
    // 0x134a6c: 0x0  nop
    ctx->pc = 0x134a6cu;
    // NOP
label_134a70:
    // 0x134a70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_134a74:
    if (ctx->pc == 0x134A74u) {
        ctx->pc = 0x134A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A70u;
        // 0x134a74: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A78u;
        goto label_134a78;
    }
    ctx->pc = 0x134A70u;
    {
        const bool branch_taken_0x134a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a70) {
            ctx->pc = 0x134A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A70u;
            // 0x134a74: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A78u;
            goto label_134a78;
        }
    }
    ctx->pc = 0x134A78u;
label_134a78:
    // 0x134a78: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_134a7c:
    // 0x134a7c: 0x5600ffd6  bnel        $s0, $zero, . + 4 + (-0x2A << 2)
label_134a80:
    if (ctx->pc == 0x134A80u) {
        ctx->pc = 0x134A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A7Cu;
        // 0x134a80: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A84u;
        goto label_134a84;
    }
    ctx->pc = 0x134A7Cu;
    {
        const bool branch_taken_0x134a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x134a7c) {
            ctx->pc = 0x134A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A7Cu;
            // 0x134a80: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1349D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1349d8;
        }
    }
    ctx->pc = 0x134A84u;
label_134a84:
    // 0x134a84: 0x13dd0006  beq         $fp, $sp, . + 4 + (0x6 << 2)
label_134a88:
    if (ctx->pc == 0x134A88u) {
        ctx->pc = 0x134A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A84u;
        // 0x134a88: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A8Cu;
        goto label_134a8c;
    }
    ctx->pc = 0x134A84u;
    {
        const bool branch_taken_0x134a84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 29));
        ctx->pc = 0x134A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A84u;
        // 0x134a88: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a84) {
            ctx->pc = 0x134AA0u;
            goto label_134aa0;
        }
    }
    ctx->pc = 0x134A8Cu;
label_134a8c:
    // 0x134a8c: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x134a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
label_134a90:
    // 0x134a90: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x134a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134a94:
    // 0x134a94: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x134a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_134a98:
    // 0x134a98: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x134a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134a9c:
    // 0x134a9c: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x134a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_134aa0:
    // 0x134aa0: 0x12f10006  beq         $s7, $s1, . + 4 + (0x6 << 2)
label_134aa4:
    if (ctx->pc == 0x134AA4u) {
        ctx->pc = 0x134AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA0u;
        // 0x134aa4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AA8u;
        goto label_134aa8;
    }
    ctx->pc = 0x134AA0u;
    {
        const bool branch_taken_0x134aa0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 17));
        ctx->pc = 0x134AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA0u;
        // 0x134aa4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa0) {
            ctx->pc = 0x134ABCu;
            goto label_134abc;
        }
    }
    ctx->pc = 0x134AA8u;
label_134aa8:
    // 0x134aa8: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x134aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_134aac:
    // 0x134aac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x134aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134ab0:
    // 0x134ab0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x134ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_134ab4:
    // 0x134ab4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x134ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134ab8:
    // 0x134ab8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x134ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_134abc:
    // 0x134abc: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x134abcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_134ac0:
    // 0x134ac0: 0x1260006f  beqz        $s3, . + 4 + (0x6F << 2)
label_134ac4:
    if (ctx->pc == 0x134AC4u) {
        ctx->pc = 0x134AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC0u;
        // 0x134ac4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AC8u;
        goto label_134ac8;
    }
    ctx->pc = 0x134AC0u;
    {
        const bool branch_taken_0x134ac0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC0u;
        // 0x134ac4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ac0) {
            ctx->pc = 0x134C80u;
            goto label_134c80;
        }
    }
    ctx->pc = 0x134AC8u;
label_134ac8:
    // 0x134ac8: 0x9e620008  lwu         $v0, 0x8($s3)
    ctx->pc = 0x134ac8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_134acc:
    // 0x134acc: 0x0  nop
    ctx->pc = 0x134accu;
    // NOP
label_134ad0:
    // 0x134ad0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_134ad4:
    // 0x134ad4: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
label_134ad8:
    if (ctx->pc == 0x134AD8u) {
        ctx->pc = 0x134AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD4u;
        // 0x134ad8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134ADCu;
        goto label_134adc;
    }
    ctx->pc = 0x134AD4u;
    {
        const bool branch_taken_0x134ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ad4) {
            ctx->pc = 0x134AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134AD4u;
            // 0x134ad8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C74u;
            goto label_134c74;
        }
    }
    ctx->pc = 0x134ADCu;
label_134adc:
    // 0x134adc: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x134adcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_134ae0:
    // 0x134ae0: 0x52200064  beql        $s1, $zero, . + 4 + (0x64 << 2)
label_134ae4:
    if (ctx->pc == 0x134AE4u) {
        ctx->pc = 0x134AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AE0u;
        // 0x134ae4: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AE8u;
        goto label_134ae8;
    }
    ctx->pc = 0x134AE0u;
    {
        const bool branch_taken_0x134ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ae0) {
            ctx->pc = 0x134AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134AE0u;
            // 0x134ae4: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C74u;
            goto label_134c74;
        }
    }
    ctx->pc = 0x134AE8u;
label_134ae8:
    // 0x134ae8: 0x52b1005f  beql        $s5, $s1, . + 4 + (0x5F << 2)
label_134aec:
    if (ctx->pc == 0x134AECu) {
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AE8u;
        // 0x134aec: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AF0u;
        goto label_134af0;
    }
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134AE8u;
            // 0x134aec: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C68u;
            goto label_134c68;
        }
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134af4:
    // 0x134af4: 0x9c6205a0  lwu         $v0, 0x5A0($v1)
    ctx->pc = 0x134af4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1440)));
label_134af8:
    // 0x134af8: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x134af8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_134afc:
    // 0x134afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_134b00:
    // 0x134b00: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
label_134b04:
    if (ctx->pc == 0x134B04u) {
        ctx->pc = 0x134B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B00u;
        // 0x134b04: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B08u;
        goto label_134b08;
    }
    ctx->pc = 0x134B00u;
    {
        const bool branch_taken_0x134b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134b00) {
            ctx->pc = 0x134B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B00u;
            // 0x134b04: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C68u;
            goto label_134c68;
        }
    }
    ctx->pc = 0x134B08u;
label_134b08:
    // 0x134b08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_134b0c:
    // 0x134b0c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x134b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_134b10:
    // 0x134b10: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x134b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_134b14:
    // 0x134b14: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x134b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_134b18:
    // 0x134b18: 0xc04d494  jal         func_135250
label_134b1c:
    if (ctx->pc == 0x134B1Cu) {
        ctx->pc = 0x134B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B18u;
        // 0x134b1c: 0x26280030  addiu       $t0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B20u;
        goto label_134b20;
    }
    ctx->pc = 0x134B18u;
    SET_GPR_U32(ctx, 31, 0x134B20u);
    ctx->pc = 0x134B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B18u;
    // 0x134b1c: 0x26280030  addiu       $t0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135250u, 0x134B18u, 0x134B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B20u;
label_134b20:
    // 0x134b20: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_134b24:
    if (ctx->pc == 0x134B24u) {
        ctx->pc = 0x134B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B20u;
        // 0x134b24: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B28u;
        goto label_134b28;
    }
    ctx->pc = 0x134B20u;
    {
        const bool branch_taken_0x134b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b20) {
            ctx->pc = 0x134B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B20u;
            // 0x134b24: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C68u;
            goto label_134c68;
        }
    }
    ctx->pc = 0x134B28u;
label_134b28:
    // 0x134b28: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_134b2c:
    // 0x134b2c: 0x5200004e  beql        $s0, $zero, . + 4 + (0x4E << 2)
label_134b30:
    if (ctx->pc == 0x134B30u) {
        ctx->pc = 0x134B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B2Cu;
        // 0x134b30: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B34u;
        goto label_134b34;
    }
    ctx->pc = 0x134B2Cu;
    {
        const bool branch_taken_0x134b2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b2c) {
            ctx->pc = 0x134B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B2Cu;
            // 0x134b30: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C68u;
            goto label_134c68;
        }
    }
    ctx->pc = 0x134B34u;
label_134b34:
    // 0x134b34: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_134b38:
    // 0x134b38: 0x9e020008  lwu         $v0, 0x8($s0)
    ctx->pc = 0x134b38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_134b3c:
    // 0x134b3c: 0x0  nop
    ctx->pc = 0x134b3cu;
    // NOP
label_134b40:
    // 0x134b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_134b44:
    // 0x134b44: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_134b48:
    if (ctx->pc == 0x134B48u) {
        ctx->pc = 0x134B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B44u;
        // 0x134b48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B4Cu;
        goto label_134b4c;
    }
    ctx->pc = 0x134B44u;
    {
        const bool branch_taken_0x134b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B44u;
        // 0x134b48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b44) {
            ctx->pc = 0x134C58u;
            goto label_134c58;
        }
    }
    ctx->pc = 0x134B4Cu;
label_134b4c:
    // 0x134b4c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x134b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_134b50:
    // 0x134b50: 0x14720014  bne         $v1, $s2, . + 4 + (0x14 << 2)
label_134b54:
    if (ctx->pc == 0x134B54u) {
        ctx->pc = 0x134B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B50u;
        // 0x134b54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B58u;
        goto label_134b58;
    }
    ctx->pc = 0x134B50u;
    {
        const bool branch_taken_0x134b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x134B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B50u;
        // 0x134b54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b50) {
            ctx->pc = 0x134BA4u;
            goto label_134ba4;
        }
    }
    ctx->pc = 0x134B58u;
label_134b58:
    // 0x134b58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x134b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_134b5c:
    // 0x134b5c: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
label_134b60:
    if (ctx->pc == 0x134B60u) {
        ctx->pc = 0x134B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B5Cu;
        // 0x134b60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B64u;
        goto label_134b64;
    }
    ctx->pc = 0x134B5Cu;
    {
        const bool branch_taken_0x134b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x134B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B5Cu;
        // 0x134b60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b5c) {
            ctx->pc = 0x134B80u;
            goto label_134b80;
        }
    }
    ctx->pc = 0x134B64u;
label_134b64:
    // 0x134b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_134b68:
    // 0x134b68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x134b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134b6c:
    // 0x134b6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x134b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134b70:
    // 0x134b70: 0xc04d32c  jal         func_134CB0
label_134b74:
    if (ctx->pc == 0x134B74u) {
        ctx->pc = 0x134B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B70u;
        // 0x134b74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B78u;
        goto label_134b78;
    }
    ctx->pc = 0x134B70u;
    SET_GPR_U32(ctx, 31, 0x134B78u);
    ctx->pc = 0x134B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B70u;
    // 0x134b74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CB0u, 0x134B70u, 0x134B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B78u;
label_134b78:
    // 0x134b78: 0x1000001f  b           . + 4 + (0x1F << 2)
label_134b7c:
    if (ctx->pc == 0x134B7Cu) {
        ctx->pc = 0x134B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B78u;
        // 0x134b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B80u;
        goto label_134b80;
    }
    ctx->pc = 0x134B78u;
    {
        const bool branch_taken_0x134b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B78u;
        // 0x134b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b78) {
            ctx->pc = 0x134BF8u;
            goto label_134bf8;
        }
    }
    ctx->pc = 0x134B80u;
label_134b80:
    // 0x134b80: 0x1456001e  bne         $v0, $s6, . + 4 + (0x1E << 2)
label_134b84:
    if (ctx->pc == 0x134B84u) {
        ctx->pc = 0x134B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B80u;
        // 0x134b84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B88u;
        goto label_134b88;
    }
    ctx->pc = 0x134B80u;
    {
        const bool branch_taken_0x134b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x134B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B80u;
        // 0x134b84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b80) {
            ctx->pc = 0x134BFCu;
            goto label_134bfc;
        }
    }
    ctx->pc = 0x134B88u;
label_134b88:
    // 0x134b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_134b8c:
    // 0x134b8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x134b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134b90:
    // 0x134b90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x134b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134b94:
    // 0x134b94: 0xc04d386  jal         func_134E18
label_134b98:
    if (ctx->pc == 0x134B98u) {
        ctx->pc = 0x134B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B94u;
        // 0x134b98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B9Cu;
        goto label_134b9c;
    }
    ctx->pc = 0x134B94u;
    SET_GPR_U32(ctx, 31, 0x134B9Cu);
    ctx->pc = 0x134B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B94u;
    // 0x134b98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E18u, 0x134B94u, 0x134B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B9Cu;
label_134b9c:
    // 0x134b9c: 0x10000016  b           . + 4 + (0x16 << 2)
label_134ba0:
    if (ctx->pc == 0x134BA0u) {
        ctx->pc = 0x134BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B9Cu;
        // 0x134ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BA4u;
        goto label_134ba4;
    }
    ctx->pc = 0x134B9Cu;
    {
        const bool branch_taken_0x134b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B9Cu;
        // 0x134ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b9c) {
            ctx->pc = 0x134BF8u;
            goto label_134bf8;
        }
    }
    ctx->pc = 0x134BA4u;
label_134ba4:
    // 0x134ba4: 0x14760015  bne         $v1, $s6, . + 4 + (0x15 << 2)
label_134ba8:
    if (ctx->pc == 0x134BA8u) {
        ctx->pc = 0x134BACu;
        goto label_134bac;
    }
    ctx->pc = 0x134BA4u;
    {
        const bool branch_taken_0x134ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x134ba4) {
            ctx->pc = 0x134BFCu;
            goto label_134bfc;
        }
    }
    ctx->pc = 0x134BACu;
label_134bac:
    // 0x134bac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x134bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_134bb0:
    // 0x134bb0: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
label_134bb4:
    if (ctx->pc == 0x134BB4u) {
        ctx->pc = 0x134BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BB0u;
        // 0x134bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BB8u;
        goto label_134bb8;
    }
    ctx->pc = 0x134BB0u;
    {
        const bool branch_taken_0x134bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x134BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BB0u;
        // 0x134bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bb0) {
            ctx->pc = 0x134BD8u;
            goto label_134bd8;
        }
    }
    ctx->pc = 0x134BB8u;
label_134bb8:
    // 0x134bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_134bbc:
    // 0x134bbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x134bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134bc0:
    // 0x134bc0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_134bc4:
    // 0x134bc4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x134bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134bc8:
    // 0x134bc8: 0xc04d386  jal         func_134E18
label_134bcc:
    if (ctx->pc == 0x134BCCu) {
        ctx->pc = 0x134BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BC8u;
        // 0x134bcc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BD0u;
        goto label_134bd0;
    }
    ctx->pc = 0x134BC8u;
    SET_GPR_U32(ctx, 31, 0x134BD0u);
    ctx->pc = 0x134BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BC8u;
    // 0x134bcc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E18u, 0x134BC8u, 0x134BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BD0u;
label_134bd0:
    // 0x134bd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_134bd4:
    if (ctx->pc == 0x134BD4u) {
        ctx->pc = 0x134BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BD0u;
        // 0x134bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BD8u;
        goto label_134bd8;
    }
    ctx->pc = 0x134BD0u;
    {
        const bool branch_taken_0x134bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BD0u;
        // 0x134bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bd0) {
            ctx->pc = 0x134BF8u;
            goto label_134bf8;
        }
    }
    ctx->pc = 0x134BD8u;
label_134bd8:
    // 0x134bd8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_134bdc:
    if (ctx->pc == 0x134BDCu) {
        ctx->pc = 0x134BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BD8u;
        // 0x134bdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BE0u;
        goto label_134be0;
    }
    ctx->pc = 0x134BD8u;
    {
        const bool branch_taken_0x134bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BD8u;
        // 0x134bdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bd8) {
            ctx->pc = 0x134BFCu;
            goto label_134bfc;
        }
    }
    ctx->pc = 0x134BE0u;
label_134be0:
    // 0x134be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_134be4:
    // 0x134be4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x134be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134be8:
    // 0x134be8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x134be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134bec:
    // 0x134bec: 0xc04d410  jal         func_135040
label_134bf0:
    if (ctx->pc == 0x134BF0u) {
        ctx->pc = 0x134BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BECu;
        // 0x134bf0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BF4u;
        goto label_134bf4;
    }
    ctx->pc = 0x134BECu;
    SET_GPR_U32(ctx, 31, 0x134BF4u);
    ctx->pc = 0x134BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BECu;
    // 0x134bf0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135040u, 0x134BECu, 0x134BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BF4u;
label_134bf4:
    // 0x134bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134bf8:
    // 0x134bf8: 0x242200b  movn        $a0, $s2, $v0
    ctx->pc = 0x134bf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
label_134bfc:
    // 0x134bfc: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_134c00:
    if (ctx->pc == 0x134C00u) {
        ctx->pc = 0x134C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BFCu;
        // 0x134c00: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C04u;
        goto label_134c04;
    }
    ctx->pc = 0x134BFCu;
    {
        const bool branch_taken_0x134bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134bfc) {
            ctx->pc = 0x134C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134BFCu;
            // 0x134c00: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C5Cu;
            goto label_134c5c;
        }
    }
    ctx->pc = 0x134C04u;
label_134c04:
    // 0x134c04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134c08:
    // 0x134c08: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_134c0c:
    if (ctx->pc == 0x134C0Cu) {
        ctx->pc = 0x134C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C08u;
        // 0x134c0c: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C10u;
        goto label_134c10;
    }
    ctx->pc = 0x134C08u;
    {
        const bool branch_taken_0x134c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c08) {
            ctx->pc = 0x134C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C08u;
            // 0x134c0c: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C3Cu;
            goto label_134c3c;
        }
    }
    ctx->pc = 0x134C10u;
label_134c10:
    // 0x134c10: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_134c14:
    // 0x134c14: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_134c18:
    // 0x134c18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_134c1c:
    if (ctx->pc == 0x134C1Cu) {
        ctx->pc = 0x134C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C18u;
        // 0x134c1c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C20u;
        goto label_134c20;
    }
    ctx->pc = 0x134C18u;
    {
        const bool branch_taken_0x134c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C18u;
        // 0x134c1c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c18) {
            ctx->pc = 0x134C38u;
            goto label_134c38;
        }
    }
    ctx->pc = 0x134C20u;
label_134c20:
    // 0x134c20: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x134c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_134c24:
    // 0x134c24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x134c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_134c28:
    // 0x134c28: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x134c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_134c2c:
    // 0x134c2c: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x134c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_134c30:
    // 0x134c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_134c34:
    // 0x134c34: 0xae830088  sw          $v1, 0x88($s4)
    ctx->pc = 0x134c34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
label_134c38:
    // 0x134c38: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x134c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_134c3c:
    // 0x134c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134c40:
    // 0x134c40: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x134c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_134c44:
    // 0x134c44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_134c48:
    // 0x134c48: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x134c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_134c4c:
    // 0x134c4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x134c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_134c50:
    // 0x134c50: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x134c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_134c54:
    // 0x134c54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x134c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_134c58:
    // 0x134c58: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x134c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_134c5c:
    // 0x134c5c: 0x5600ffb8  bnel        $s0, $zero, . + 4 + (-0x48 << 2)
label_134c60:
    if (ctx->pc == 0x134C60u) {
        ctx->pc = 0x134C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C5Cu;
        // 0x134c60: 0x9e020008  lwu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C64u;
        goto label_134c64;
    }
    ctx->pc = 0x134C5Cu;
    {
        const bool branch_taken_0x134c5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x134c5c) {
            ctx->pc = 0x134C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C5Cu;
            // 0x134c60: 0x9e020008  lwu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134b40;
        }
    }
    ctx->pc = 0x134C64u;
label_134c64:
    // 0x134c64: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_134c68:
    // 0x134c68: 0x1620ff9f  bnez        $s1, . + 4 + (-0x61 << 2)
label_134c6c:
    if (ctx->pc == 0x134C6Cu) {
        ctx->pc = 0x134C70u;
        goto label_134c70;
    }
    ctx->pc = 0x134C68u;
    {
        const bool branch_taken_0x134c68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x134c68) {
            ctx->pc = 0x134AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134ae8;
        }
    }
    ctx->pc = 0x134C70u;
label_134c70:
    // 0x134c70: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x134c70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_134c74:
    // 0x134c74: 0x5660ff96  bnel        $s3, $zero, . + 4 + (-0x6A << 2)
label_134c78:
    if (ctx->pc == 0x134C78u) {
        ctx->pc = 0x134C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C74u;
        // 0x134c78: 0x9e620008  lwu         $v0, 0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C7Cu;
        goto label_134c7c;
    }
    ctx->pc = 0x134C74u;
    {
        const bool branch_taken_0x134c74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x134c74) {
            ctx->pc = 0x134C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C74u;
            // 0x134c78: 0x9e620008  lwu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134ad0;
        }
    }
    ctx->pc = 0x134C7Cu;
label_134c7c:
    // 0x134c7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_134c80:
    // 0x134c80: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x134c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_134c84:
    // 0x134c84: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x134c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_134c88:
    // 0x134c88: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x134c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_134c8c:
    // 0x134c8c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x134c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_134c90:
    // 0x134c90: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x134c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_134c94:
    // 0x134c94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x134c94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_134c98:
    // 0x134c98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134c98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_134c9c:
    // 0x134c9c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x134c9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_134ca0:
    // 0x134ca0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x134ca0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_134ca4:
    // 0x134ca4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_134ca8:
    // 0x134ca8: 0x3e00008  jr          $ra
label_134cac:
    if (ctx->pc == 0x134CACu) {
        ctx->pc = 0x134CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CA8u;
        // 0x134cac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134CB0u;
        goto label_fallthrough_0x134ca8;
    }
    ctx->pc = 0x134CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CA8u;
        // 0x134cac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x134ca8:
    ctx->pc = 0x134CB0u;
}
