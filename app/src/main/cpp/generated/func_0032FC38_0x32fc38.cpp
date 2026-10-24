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

// Function: func_0032FC38
// Address: 0x32fc38 - 0x330080
void func_0032FC38_0x32fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032FC38_0x32fc38");
#endif

    switch (ctx->pc) {
        case 0x32fc38u: goto label_32fc38;
        case 0x32fc3cu: goto label_32fc3c;
        case 0x32fc40u: goto label_32fc40;
        case 0x32fc44u: goto label_32fc44;
        case 0x32fc48u: goto label_32fc48;
        case 0x32fc4cu: goto label_32fc4c;
        case 0x32fc50u: goto label_32fc50;
        case 0x32fc54u: goto label_32fc54;
        case 0x32fc58u: goto label_32fc58;
        case 0x32fc5cu: goto label_32fc5c;
        case 0x32fc60u: goto label_32fc60;
        case 0x32fc64u: goto label_32fc64;
        case 0x32fc68u: goto label_32fc68;
        case 0x32fc6cu: goto label_32fc6c;
        case 0x32fc70u: goto label_32fc70;
        case 0x32fc74u: goto label_32fc74;
        case 0x32fc78u: goto label_32fc78;
        case 0x32fc7cu: goto label_32fc7c;
        case 0x32fc80u: goto label_32fc80;
        case 0x32fc84u: goto label_32fc84;
        case 0x32fc88u: goto label_32fc88;
        case 0x32fc8cu: goto label_32fc8c;
        case 0x32fc90u: goto label_32fc90;
        case 0x32fc94u: goto label_32fc94;
        case 0x32fc98u: goto label_32fc98;
        case 0x32fc9cu: goto label_32fc9c;
        case 0x32fca0u: goto label_32fca0;
        case 0x32fca4u: goto label_32fca4;
        case 0x32fca8u: goto label_32fca8;
        case 0x32fcacu: goto label_32fcac;
        case 0x32fcb0u: goto label_32fcb0;
        case 0x32fcb4u: goto label_32fcb4;
        case 0x32fcb8u: goto label_32fcb8;
        case 0x32fcbcu: goto label_32fcbc;
        case 0x32fcc0u: goto label_32fcc0;
        case 0x32fcc4u: goto label_32fcc4;
        case 0x32fcc8u: goto label_32fcc8;
        case 0x32fcccu: goto label_32fccc;
        case 0x32fcd0u: goto label_32fcd0;
        case 0x32fcd4u: goto label_32fcd4;
        case 0x32fcd8u: goto label_32fcd8;
        case 0x32fcdcu: goto label_32fcdc;
        case 0x32fce0u: goto label_32fce0;
        case 0x32fce4u: goto label_32fce4;
        case 0x32fce8u: goto label_32fce8;
        case 0x32fcecu: goto label_32fcec;
        case 0x32fcf0u: goto label_32fcf0;
        case 0x32fcf4u: goto label_32fcf4;
        case 0x32fcf8u: goto label_32fcf8;
        case 0x32fcfcu: goto label_32fcfc;
        case 0x32fd00u: goto label_32fd00;
        case 0x32fd04u: goto label_32fd04;
        case 0x32fd08u: goto label_32fd08;
        case 0x32fd0cu: goto label_32fd0c;
        case 0x32fd10u: goto label_32fd10;
        case 0x32fd14u: goto label_32fd14;
        case 0x32fd18u: goto label_32fd18;
        case 0x32fd1cu: goto label_32fd1c;
        case 0x32fd20u: goto label_32fd20;
        case 0x32fd24u: goto label_32fd24;
        case 0x32fd28u: goto label_32fd28;
        case 0x32fd2cu: goto label_32fd2c;
        case 0x32fd30u: goto label_32fd30;
        case 0x32fd34u: goto label_32fd34;
        case 0x32fd38u: goto label_32fd38;
        case 0x32fd3cu: goto label_32fd3c;
        case 0x32fd40u: goto label_32fd40;
        case 0x32fd44u: goto label_32fd44;
        case 0x32fd48u: goto label_32fd48;
        case 0x32fd4cu: goto label_32fd4c;
        case 0x32fd50u: goto label_32fd50;
        case 0x32fd54u: goto label_32fd54;
        case 0x32fd58u: goto label_32fd58;
        case 0x32fd5cu: goto label_32fd5c;
        case 0x32fd60u: goto label_32fd60;
        case 0x32fd64u: goto label_32fd64;
        case 0x32fd68u: goto label_32fd68;
        case 0x32fd6cu: goto label_32fd6c;
        case 0x32fd70u: goto label_32fd70;
        case 0x32fd74u: goto label_32fd74;
        case 0x32fd78u: goto label_32fd78;
        case 0x32fd7cu: goto label_32fd7c;
        case 0x32fd80u: goto label_32fd80;
        case 0x32fd84u: goto label_32fd84;
        case 0x32fd88u: goto label_32fd88;
        case 0x32fd8cu: goto label_32fd8c;
        case 0x32fd90u: goto label_32fd90;
        case 0x32fd94u: goto label_32fd94;
        case 0x32fd98u: goto label_32fd98;
        case 0x32fd9cu: goto label_32fd9c;
        case 0x32fda0u: goto label_32fda0;
        case 0x32fda4u: goto label_32fda4;
        case 0x32fda8u: goto label_32fda8;
        case 0x32fdacu: goto label_32fdac;
        case 0x32fdb0u: goto label_32fdb0;
        case 0x32fdb4u: goto label_32fdb4;
        case 0x32fdb8u: goto label_32fdb8;
        case 0x32fdbcu: goto label_32fdbc;
        case 0x32fdc0u: goto label_32fdc0;
        case 0x32fdc4u: goto label_32fdc4;
        case 0x32fdc8u: goto label_32fdc8;
        case 0x32fdccu: goto label_32fdcc;
        case 0x32fdd0u: goto label_32fdd0;
        case 0x32fdd4u: goto label_32fdd4;
        case 0x32fdd8u: goto label_32fdd8;
        case 0x32fddcu: goto label_32fddc;
        case 0x32fde0u: goto label_32fde0;
        case 0x32fde4u: goto label_32fde4;
        case 0x32fde8u: goto label_32fde8;
        case 0x32fdecu: goto label_32fdec;
        case 0x32fdf0u: goto label_32fdf0;
        case 0x32fdf4u: goto label_32fdf4;
        case 0x32fdf8u: goto label_32fdf8;
        case 0x32fdfcu: goto label_32fdfc;
        case 0x32fe00u: goto label_32fe00;
        case 0x32fe04u: goto label_32fe04;
        case 0x32fe08u: goto label_32fe08;
        case 0x32fe0cu: goto label_32fe0c;
        case 0x32fe10u: goto label_32fe10;
        case 0x32fe14u: goto label_32fe14;
        case 0x32fe18u: goto label_32fe18;
        case 0x32fe1cu: goto label_32fe1c;
        case 0x32fe20u: goto label_32fe20;
        case 0x32fe24u: goto label_32fe24;
        case 0x32fe28u: goto label_32fe28;
        case 0x32fe2cu: goto label_32fe2c;
        case 0x32fe30u: goto label_32fe30;
        case 0x32fe34u: goto label_32fe34;
        case 0x32fe38u: goto label_32fe38;
        case 0x32fe3cu: goto label_32fe3c;
        case 0x32fe40u: goto label_32fe40;
        case 0x32fe44u: goto label_32fe44;
        case 0x32fe48u: goto label_32fe48;
        case 0x32fe4cu: goto label_32fe4c;
        case 0x32fe50u: goto label_32fe50;
        case 0x32fe54u: goto label_32fe54;
        case 0x32fe58u: goto label_32fe58;
        case 0x32fe5cu: goto label_32fe5c;
        case 0x32fe60u: goto label_32fe60;
        case 0x32fe64u: goto label_32fe64;
        case 0x32fe68u: goto label_32fe68;
        case 0x32fe6cu: goto label_32fe6c;
        case 0x32fe70u: goto label_32fe70;
        case 0x32fe74u: goto label_32fe74;
        case 0x32fe78u: goto label_32fe78;
        case 0x32fe7cu: goto label_32fe7c;
        case 0x32fe80u: goto label_32fe80;
        case 0x32fe84u: goto label_32fe84;
        case 0x32fe88u: goto label_32fe88;
        case 0x32fe8cu: goto label_32fe8c;
        case 0x32fe90u: goto label_32fe90;
        case 0x32fe94u: goto label_32fe94;
        case 0x32fe98u: goto label_32fe98;
        case 0x32fe9cu: goto label_32fe9c;
        case 0x32fea0u: goto label_32fea0;
        case 0x32fea4u: goto label_32fea4;
        case 0x32fea8u: goto label_32fea8;
        case 0x32feacu: goto label_32feac;
        case 0x32feb0u: goto label_32feb0;
        case 0x32feb4u: goto label_32feb4;
        case 0x32feb8u: goto label_32feb8;
        case 0x32febcu: goto label_32febc;
        case 0x32fec0u: goto label_32fec0;
        case 0x32fec4u: goto label_32fec4;
        case 0x32fec8u: goto label_32fec8;
        case 0x32feccu: goto label_32fecc;
        case 0x32fed0u: goto label_32fed0;
        case 0x32fed4u: goto label_32fed4;
        case 0x32fed8u: goto label_32fed8;
        case 0x32fedcu: goto label_32fedc;
        case 0x32fee0u: goto label_32fee0;
        case 0x32fee4u: goto label_32fee4;
        case 0x32fee8u: goto label_32fee8;
        case 0x32feecu: goto label_32feec;
        case 0x32fef0u: goto label_32fef0;
        case 0x32fef4u: goto label_32fef4;
        case 0x32fef8u: goto label_32fef8;
        case 0x32fefcu: goto label_32fefc;
        case 0x32ff00u: goto label_32ff00;
        case 0x32ff04u: goto label_32ff04;
        case 0x32ff08u: goto label_32ff08;
        case 0x32ff0cu: goto label_32ff0c;
        case 0x32ff10u: goto label_32ff10;
        case 0x32ff14u: goto label_32ff14;
        case 0x32ff18u: goto label_32ff18;
        case 0x32ff1cu: goto label_32ff1c;
        case 0x32ff20u: goto label_32ff20;
        case 0x32ff24u: goto label_32ff24;
        case 0x32ff28u: goto label_32ff28;
        case 0x32ff2cu: goto label_32ff2c;
        case 0x32ff30u: goto label_32ff30;
        case 0x32ff34u: goto label_32ff34;
        case 0x32ff38u: goto label_32ff38;
        case 0x32ff3cu: goto label_32ff3c;
        case 0x32ff40u: goto label_32ff40;
        case 0x32ff44u: goto label_32ff44;
        case 0x32ff48u: goto label_32ff48;
        case 0x32ff4cu: goto label_32ff4c;
        case 0x32ff50u: goto label_32ff50;
        case 0x32ff54u: goto label_32ff54;
        case 0x32ff58u: goto label_32ff58;
        case 0x32ff5cu: goto label_32ff5c;
        case 0x32ff60u: goto label_32ff60;
        case 0x32ff64u: goto label_32ff64;
        case 0x32ff68u: goto label_32ff68;
        case 0x32ff6cu: goto label_32ff6c;
        case 0x32ff70u: goto label_32ff70;
        case 0x32ff74u: goto label_32ff74;
        case 0x32ff78u: goto label_32ff78;
        case 0x32ff7cu: goto label_32ff7c;
        case 0x32ff80u: goto label_32ff80;
        case 0x32ff84u: goto label_32ff84;
        case 0x32ff88u: goto label_32ff88;
        case 0x32ff8cu: goto label_32ff8c;
        case 0x32ff90u: goto label_32ff90;
        case 0x32ff94u: goto label_32ff94;
        case 0x32ff98u: goto label_32ff98;
        case 0x32ff9cu: goto label_32ff9c;
        case 0x32ffa0u: goto label_32ffa0;
        case 0x32ffa4u: goto label_32ffa4;
        case 0x32ffa8u: goto label_32ffa8;
        case 0x32ffacu: goto label_32ffac;
        case 0x32ffb0u: goto label_32ffb0;
        case 0x32ffb4u: goto label_32ffb4;
        case 0x32ffb8u: goto label_32ffb8;
        case 0x32ffbcu: goto label_32ffbc;
        case 0x32ffc0u: goto label_32ffc0;
        case 0x32ffc4u: goto label_32ffc4;
        case 0x32ffc8u: goto label_32ffc8;
        case 0x32ffccu: goto label_32ffcc;
        case 0x32ffd0u: goto label_32ffd0;
        case 0x32ffd4u: goto label_32ffd4;
        case 0x32ffd8u: goto label_32ffd8;
        case 0x32ffdcu: goto label_32ffdc;
        case 0x32ffe0u: goto label_32ffe0;
        case 0x32ffe4u: goto label_32ffe4;
        case 0x32ffe8u: goto label_32ffe8;
        case 0x32ffecu: goto label_32ffec;
        case 0x32fff0u: goto label_32fff0;
        case 0x32fff4u: goto label_32fff4;
        case 0x32fff8u: goto label_32fff8;
        case 0x32fffcu: goto label_32fffc;
        case 0x330000u: goto label_330000;
        case 0x330004u: goto label_330004;
        case 0x330008u: goto label_330008;
        case 0x33000cu: goto label_33000c;
        case 0x330010u: goto label_330010;
        case 0x330014u: goto label_330014;
        case 0x330018u: goto label_330018;
        case 0x33001cu: goto label_33001c;
        case 0x330020u: goto label_330020;
        case 0x330024u: goto label_330024;
        case 0x330028u: goto label_330028;
        case 0x33002cu: goto label_33002c;
        case 0x330030u: goto label_330030;
        case 0x330034u: goto label_330034;
        case 0x330038u: goto label_330038;
        case 0x33003cu: goto label_33003c;
        case 0x330040u: goto label_330040;
        case 0x330044u: goto label_330044;
        case 0x330048u: goto label_330048;
        case 0x33004cu: goto label_33004c;
        case 0x330050u: goto label_330050;
        case 0x330054u: goto label_330054;
        case 0x330058u: goto label_330058;
        case 0x33005cu: goto label_33005c;
        case 0x330060u: goto label_330060;
        case 0x330064u: goto label_330064;
        case 0x330068u: goto label_330068;
        case 0x33006cu: goto label_33006c;
        case 0x330070u: goto label_330070;
        case 0x330074u: goto label_330074;
        case 0x330078u: goto label_330078;
        case 0x33007cu: goto label_33007c;
        default: break;
    }

    ctx->pc = 0x32fc38u;

label_32fc38:
    // 0x32fc38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_32fc3c:
    // 0x32fc3c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x32fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_32fc40:
    // 0x32fc40: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x32fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_32fc44:
    // 0x32fc44: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32fc44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32fc48:
    // 0x32fc48: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x32fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_32fc4c:
    // 0x32fc4c: 0x26c50020  addiu       $a1, $s6, 0x20
    ctx->pc = 0x32fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_32fc50:
    // 0x32fc50: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x32fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_32fc54:
    // 0x32fc54: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x32fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_32fc58:
    // 0x32fc58: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x32fc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_32fc5c:
    // 0x32fc5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x32fc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_32fc60:
    // 0x32fc60: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x32fc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_32fc64:
    // 0x32fc64: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x32fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_32fc68:
    // 0x32fc68: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x32fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_32fc6c:
    // 0x32fc6c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x32fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_32fc70:
    // 0x32fc70: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x32fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_32fc74:
    // 0x32fc74: 0x82c300ac  lb          $v1, 0xAC($s6)
    ctx->pc = 0x32fc74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 172)));
label_32fc78:
    // 0x32fc78: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x32fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_32fc7c:
    // 0x32fc7c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x32fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_32fc80:
    // 0x32fc80: 0x8ed1001c  lw          $s1, 0x1C($s6)
    ctx->pc = 0x32fc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_32fc84:
    // 0x32fc84: 0x186000f1  blez        $v1, . + 4 + (0xF1 << 2)
label_32fc88:
    if (ctx->pc == 0x32FC88u) {
        ctx->pc = 0x32FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC84u;
        // 0x32fc88: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FC8Cu;
        goto label_32fc8c;
    }
    ctx->pc = 0x32FC84u;
    {
        const bool branch_taken_0x32fc84 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x32FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC84u;
        // 0x32fc88: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fc84) {
            ctx->pc = 0x33004Cu;
            goto label_33004c;
        }
    }
    ctx->pc = 0x32FC8Cu;
label_32fc8c:
    // 0x32fc8c: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x32fc8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32fc90:
    // 0x32fc90: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x32fc90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32fc94:
    // 0x32fc94: 0x0  nop
    ctx->pc = 0x32fc94u;
    // NOP
label_32fc98:
    // 0x32fc98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fc9c:
    // 0x32fc9c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_32fca0:
    // 0x32fca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fca4:
    // 0x32fca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fca8:
    // 0x32fca8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32fcac:
    // 0x32fcac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x32fcacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_32fcb0:
    // 0x32fcb0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x32fcb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32fcb4:
    // 0x32fcb4: 0x60f809  jalr        $v1
label_32fcb8:
    if (ctx->pc == 0x32FCB8u) {
        ctx->pc = 0x32FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCB4u;
        // 0x32fcb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FCBCu;
        goto label_32fcbc;
    }
    ctx->pc = 0x32FCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32FCBCu);
        ctx->pc = 0x32FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCB4u;
        // 0x32fcb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FCB4u, 0x32FCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FCBCu;
label_32fcbc:
    // 0x32fcbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_32fcc0:
    if (ctx->pc == 0x32FCC0u) {
        ctx->pc = 0x32FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCBCu;
        // 0x32fcc0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FCC4u;
        goto label_32fcc4;
    }
    ctx->pc = 0x32FCBCu;
    {
        const bool branch_taken_0x32fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCBCu;
        // 0x32fcc0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fcbc) {
            ctx->pc = 0x32FCCCu;
            goto label_32fccc;
        }
    }
    ctx->pc = 0x32FCC4u;
label_32fcc4:
    // 0x32fcc4: 0x0  nop
    ctx->pc = 0x32fcc4u;
    // NOP
label_32fcc8:
    // 0x32fcc8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x32fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_32fccc:
    // 0x32fccc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32fcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32fcd0:
    // 0x32fcd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32fcd4:
    if (ctx->pc == 0x32FCD4u) {
        ctx->pc = 0x32FCD8u;
        goto label_32fcd8;
    }
    ctx->pc = 0x32FCD0u;
    {
        const bool branch_taken_0x32fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fcd0) {
            ctx->pc = 0x32FCECu;
            goto label_32fcec;
        }
    }
    ctx->pc = 0x32FCD8u;
label_32fcd8:
    // 0x32fcd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x32fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_32fcdc:
    // 0x32fcdc: 0xc0cbe9a  jal         func_32FA68
label_32fce0:
    if (ctx->pc == 0x32FCE0u) {
        ctx->pc = 0x32FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCDCu;
        // 0x32fce0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FCE4u;
        goto label_32fce4;
    }
    ctx->pc = 0x32FCDCu;
    SET_GPR_U32(ctx, 31, 0x32FCE4u);
    ctx->pc = 0x32FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCDCu;
    // 0x32fce0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FA68u, 0x32FCDCu, 0x32FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCE4u;
label_32fce4:
    // 0x32fce4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_32fce8:
    if (ctx->pc == 0x32FCE8u) {
        ctx->pc = 0x32FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCE4u;
        // 0x32fce8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FCECu;
        goto label_32fcec;
    }
    ctx->pc = 0x32FCE4u;
    {
        const bool branch_taken_0x32fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fce4) {
            ctx->pc = 0x32FCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FCE4u;
            // 0x32fce8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fcc8;
        }
    }
    ctx->pc = 0x32FCECu;
label_32fcec:
    // 0x32fcec: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
label_32fcf0:
    if (ctx->pc == 0x32FCF0u) {
        ctx->pc = 0x32FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCECu;
        // 0x32fcf0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FCF4u;
        goto label_32fcf4;
    }
    ctx->pc = 0x32FCECu;
    {
        const bool branch_taken_0x32fcec = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x32FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCECu;
        // 0x32fcf0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fcec) {
            ctx->pc = 0x32FD64u;
            goto label_32fd64;
        }
    }
    ctx->pc = 0x32FCF4u;
label_32fcf4:
    // 0x32fcf4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x32fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32fcf8:
    // 0x32fcf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32fcfc:
    // 0x32fcfc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32fcfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32fd00:
    // 0x32fd00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32fd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32fd04:
    // 0x32fd04: 0xc0ceb28  jal         func_33ACA0
label_32fd08:
    if (ctx->pc == 0x32FD08u) {
        ctx->pc = 0x32FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD04u;
        // 0x32fd08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD0Cu;
        goto label_32fd0c;
    }
    ctx->pc = 0x32FD04u;
    SET_GPR_U32(ctx, 31, 0x32FD0Cu);
    ctx->pc = 0x32FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD04u;
    // 0x32fd08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32FD04u, 0x32FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD0Cu;
label_32fd0c:
    // 0x32fd0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fd10:
    // 0x32fd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fd14:
    // 0x32fd14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fd18:
    // 0x32fd18: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32fd1c:
    // 0x32fd1c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x32fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32fd20:
    // 0x32fd20: 0x40f809  jalr        $v0
label_32fd24:
    if (ctx->pc == 0x32FD24u) {
        ctx->pc = 0x32FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD20u;
        // 0x32fd24: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD28u;
        goto label_32fd28;
    }
    ctx->pc = 0x32FD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FD28u);
        ctx->pc = 0x32FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD20u;
        // 0x32fd24: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD20u, 0x32FD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FD28u;
label_32fd28:
    // 0x32fd28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fd2c:
    // 0x32fd2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fd30:
    // 0x32fd30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fd34:
    // 0x32fd34: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32fd38:
    // 0x32fd38: 0x40f809  jalr        $v0
label_32fd3c:
    if (ctx->pc == 0x32FD3Cu) {
        ctx->pc = 0x32FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD38u;
        // 0x32fd3c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD40u;
        goto label_32fd40;
    }
    ctx->pc = 0x32FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FD40u);
        ctx->pc = 0x32FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD38u;
        // 0x32fd3c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD38u, 0x32FD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FD40u;
label_32fd40:
    // 0x32fd40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fd44:
    // 0x32fd44: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_32fd48:
    // 0x32fd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fd4c:
    // 0x32fd4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32fd50:
    // 0x32fd50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fd54:
    // 0x32fd54: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x32fd54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_32fd58:
    // 0x32fd58: 0x40f809  jalr        $v0
label_32fd5c:
    if (ctx->pc == 0x32FD5Cu) {
        ctx->pc = 0x32FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD58u;
        // 0x32fd5c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD60u;
        goto label_32fd60;
    }
    ctx->pc = 0x32FD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FD60u);
        ctx->pc = 0x32FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD58u;
        // 0x32fd5c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD58u, 0x32FD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FD60u;
label_32fd60:
    // 0x32fd60: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_32fd64:
    // 0x32fd64: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x32fd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_32fd68:
    // 0x32fd68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_32fd6c:
    if (ctx->pc == 0x32FD6Cu) {
        ctx->pc = 0x32FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD68u;
        // 0x32fd6c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD70u;
        goto label_32fd70;
    }
    ctx->pc = 0x32FD68u;
    {
        const bool branch_taken_0x32fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD68u;
        // 0x32fd6c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd68) {
            ctx->pc = 0x32FD90u;
            goto label_32fd90;
        }
    }
    ctx->pc = 0x32FD70u;
label_32fd70:
    // 0x32fd70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fd74:
    // 0x32fd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fd78:
    // 0x32fd78: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x32fd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32fd7c:
    // 0x32fd7c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32fd80:
    // 0x32fd80: 0x40f809  jalr        $v0
label_32fd84:
    if (ctx->pc == 0x32FD84u) {
        ctx->pc = 0x32FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD80u;
        // 0x32fd84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD88u;
        goto label_32fd88;
    }
    ctx->pc = 0x32FD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FD88u);
        ctx->pc = 0x32FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD80u;
        // 0x32fd84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD80u, 0x32FD88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FD88u;
label_32fd88:
    // 0x32fd88: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_32fd8c:
    if (ctx->pc == 0x32FD8Cu) {
        ctx->pc = 0x32FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD88u;
        // 0x32fd8c: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD90u;
        goto label_32fd90;
    }
    ctx->pc = 0x32FD88u;
    {
        const bool branch_taken_0x32fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD88u;
        // 0x32fd8c: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd88) {
            ctx->pc = 0x330050u;
            goto label_330050;
        }
    }
    ctx->pc = 0x32FD90u;
label_32fd90:
    // 0x32fd90: 0xc0cbe62  jal         func_32F988
label_32fd94:
    if (ctx->pc == 0x32FD94u) {
        ctx->pc = 0x32FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD90u;
        // 0x32fd94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FD98u;
        goto label_32fd98;
    }
    ctx->pc = 0x32FD90u;
    SET_GPR_U32(ctx, 31, 0x32FD98u);
    ctx->pc = 0x32FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD90u;
    // 0x32fd94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F988u, 0x32FD90u, 0x32FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD98u;
label_32fd98:
    // 0x32fd98: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_32fd9c:
    if (ctx->pc == 0x32FD9Cu) {
        ctx->pc = 0x32FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD98u;
        // 0x32fd9c: 0x3c024149  lui         $v0, 0x4149 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDA0u;
        goto label_32fda0;
    }
    ctx->pc = 0x32FD98u;
    {
        const bool branch_taken_0x32fd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD98u;
        // 0x32fd9c: 0x3c024149  lui         $v0, 0x4149 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd98) {
            ctx->pc = 0x32FD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fd70;
        }
    }
    ctx->pc = 0x32FDA0u;
label_32fda0:
    // 0x32fda0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32fda4:
    // 0x32fda4: 0x34425845  ori         $v0, $v0, 0x5845
    ctx->pc = 0x32fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22597);
label_32fda8:
    // 0x32fda8: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_32fdac:
    if (ctx->pc == 0x32FDACu) {
        ctx->pc = 0x32FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDA8u;
        // 0x32fdac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDB0u;
        goto label_32fdb0;
    }
    ctx->pc = 0x32FDA8u;
    {
        const bool branch_taken_0x32fda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDA8u;
        // 0x32fdac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fda8) {
            ctx->pc = 0x32FE60u;
            goto label_32fe60;
        }
    }
    ctx->pc = 0x32FDB0u;
label_32fdb0:
    // 0x32fdb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_32fdb4:
    if (ctx->pc == 0x32FDB4u) {
        ctx->pc = 0x32FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDB0u;
        // 0x32fdb4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDB8u;
        goto label_32fdb8;
    }
    ctx->pc = 0x32FDB0u;
    {
        const bool branch_taken_0x32fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDB0u;
        // 0x32fdb4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdb0) {
            ctx->pc = 0x32FDBCu;
            goto label_32fdbc;
        }
    }
    ctx->pc = 0x32FDB8u;
label_32fdb8:
    // 0x32fdb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32fdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32fdbc:
    // 0x32fdbc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_32fdc0:
    // 0x32fdc0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32fdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32fdc4:
    // 0x32fdc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32fdc8:
    if (ctx->pc == 0x32FDC8u) {
        ctx->pc = 0x32FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDC4u;
        // 0x32fdc8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDCCu;
        goto label_32fdcc;
    }
    ctx->pc = 0x32FDC4u;
    {
        const bool branch_taken_0x32fdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDC4u;
        // 0x32fdc8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdc4) {
            ctx->pc = 0x32FDE0u;
            goto label_32fde0;
        }
    }
    ctx->pc = 0x32FDCCu;
label_32fdcc:
    // 0x32fdcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x32fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_32fdd0:
    // 0x32fdd0: 0xc0cbe9a  jal         func_32FA68
label_32fdd4:
    if (ctx->pc == 0x32FDD4u) {
        ctx->pc = 0x32FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDD0u;
        // 0x32fdd4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDD8u;
        goto label_32fdd8;
    }
    ctx->pc = 0x32FDD0u;
    SET_GPR_U32(ctx, 31, 0x32FDD8u);
    ctx->pc = 0x32FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FDD0u;
    // 0x32fdd4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FA68u, 0x32FDD0u, 0x32FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDD8u;
label_32fdd8:
    // 0x32fdd8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_32fddc:
    if (ctx->pc == 0x32FDDCu) {
        ctx->pc = 0x32FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDD8u;
        // 0x32fddc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDE0u;
        goto label_32fde0;
    }
    ctx->pc = 0x32FDD8u;
    {
        const bool branch_taken_0x32fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDD8u;
        // 0x32fddc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdd8) {
            ctx->pc = 0x32FDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fdb8;
        }
    }
    ctx->pc = 0x32FDE0u;
label_32fde0:
    // 0x32fde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32fde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32fde4:
    // 0x32fde4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32fde4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32fde8:
    // 0x32fde8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32fde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32fdec:
    // 0x32fdec: 0xc0ceb28  jal         func_33ACA0
label_32fdf0:
    if (ctx->pc == 0x32FDF0u) {
        ctx->pc = 0x32FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDECu;
        // 0x32fdf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FDF4u;
        goto label_32fdf4;
    }
    ctx->pc = 0x32FDECu;
    SET_GPR_U32(ctx, 31, 0x32FDF4u);
    ctx->pc = 0x32FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FDECu;
    // 0x32fdf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32FDECu, 0x32FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDF4u;
label_32fdf4:
    // 0x32fdf4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fdf8:
    // 0x32fdf8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32fdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32fdfc:
    // 0x32fdfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fe00:
    // 0x32fe00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32fe04:
    // 0x32fe04: 0x40f809  jalr        $v0
label_32fe08:
    if (ctx->pc == 0x32FE08u) {
        ctx->pc = 0x32FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE04u;
        // 0x32fe08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE0Cu;
        goto label_32fe0c;
    }
    ctx->pc = 0x32FE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FE0Cu);
        ctx->pc = 0x32FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE04u;
        // 0x32fe08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE04u, 0x32FE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FE0Cu;
label_32fe0c:
    // 0x32fe0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fe10:
    // 0x32fe10: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x32fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32fe14:
    // 0x32fe14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fe18:
    // 0x32fe18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32fe18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32fe1c:
    // 0x32fe1c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32fe20:
    // 0x32fe20: 0x40f809  jalr        $v0
label_32fe24:
    if (ctx->pc == 0x32FE24u) {
        ctx->pc = 0x32FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE20u;
        // 0x32fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE28u;
        goto label_32fe28;
    }
    ctx->pc = 0x32FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FE28u);
        ctx->pc = 0x32FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE20u;
        // 0x32fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE20u, 0x32FE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FE28u;
label_32fe28:
    // 0x32fe28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fe2c:
    // 0x32fe2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fe30:
    // 0x32fe30: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32fe34:
    // 0x32fe34: 0x40f809  jalr        $v0
label_32fe38:
    if (ctx->pc == 0x32FE38u) {
        ctx->pc = 0x32FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE34u;
        // 0x32fe38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE3Cu;
        goto label_32fe3c;
    }
    ctx->pc = 0x32FE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FE3Cu);
        ctx->pc = 0x32FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE34u;
        // 0x32fe38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE34u, 0x32FE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FE3Cu;
label_32fe3c:
    // 0x32fe3c: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
label_32fe40:
    if (ctx->pc == 0x32FE40u) {
        ctx->pc = 0x32FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE3Cu;
        // 0x32fe40: 0xa2c00004  sb          $zero, 0x4($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE44u;
        goto label_32fe44;
    }
    ctx->pc = 0x32FE3Cu;
    {
        const bool branch_taken_0x32fe3c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x32fe3c) {
            ctx->pc = 0x32FE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FE3Cu;
            // 0x32fe40: 0xa2c00004  sb          $zero, 0x4($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FE44u;
            goto label_32fe44;
        }
    }
    ctx->pc = 0x32FE44u;
label_32fe44:
    // 0x32fe44: 0x82c20004  lb          $v0, 0x4($s6)
    ctx->pc = 0x32fe44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_32fe48:
    // 0x32fe48: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_32fe4c:
    if (ctx->pc == 0x32FE4Cu) {
        ctx->pc = 0x32FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE48u;
        // 0x32fe4c: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE50u;
        goto label_32fe50;
    }
    ctx->pc = 0x32FE48u;
    {
        const bool branch_taken_0x32fe48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE48u;
        // 0x32fe4c: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe48) {
            ctx->pc = 0x330050u;
            goto label_330050;
        }
    }
    ctx->pc = 0x32FE50u;
label_32fe50:
    // 0x32fe50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32fe54:
    // 0x32fe54: 0x1000007d  b           . + 4 + (0x7D << 2)
label_32fe58:
    if (ctx->pc == 0x32FE58u) {
        ctx->pc = 0x32FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE54u;
        // 0x32fe58: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE5Cu;
        goto label_32fe5c;
    }
    ctx->pc = 0x32FE54u;
    {
        const bool branch_taken_0x32fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE54u;
        // 0x32fe58: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe54) {
            ctx->pc = 0x33004Cu;
            goto label_33004c;
        }
    }
    ctx->pc = 0x32FE5Cu;
label_32fe5c:
    // 0x32fe5c: 0x0  nop
    ctx->pc = 0x32fe5cu;
    // NOP
label_32fe60:
    // 0x32fe60: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x32fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_32fe64:
    // 0x32fe64: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_32fe68:
    // 0x32fe68: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x32fe68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32fe6c:
    // 0x32fe6c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_32fe70:
    if (ctx->pc == 0x32FE70u) {
        ctx->pc = 0x32FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE6Cu;
        // 0x32fe70: 0x93b00008  lbu         $s0, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE74u;
        goto label_32fe74;
    }
    ctx->pc = 0x32FE6Cu;
    {
        const bool branch_taken_0x32fe6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE6Cu;
        // 0x32fe70: 0x93b00008  lbu         $s0, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe6c) {
            ctx->pc = 0x32FD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fd70;
        }
    }
    ctx->pc = 0x32FE74u;
label_32fe74:
    // 0x32fe74: 0x82c20002  lb          $v0, 0x2($s6)
    ctx->pc = 0x32fe74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_32fe78:
    // 0x32fe78: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32fe78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32fe7c:
    // 0x32fe7c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_32fe80:
    if (ctx->pc == 0x32FE80u) {
        ctx->pc = 0x32FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE7Cu;
        // 0x32fe80: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE84u;
        goto label_32fe84;
    }
    ctx->pc = 0x32FE7Cu;
    {
        const bool branch_taken_0x32fe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fe7c) {
            ctx->pc = 0x32FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FE7Cu;
            // 0x32fe80: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FEB8u;
            goto label_32feb8;
        }
    }
    ctx->pc = 0x32FE84u;
label_32fe84:
    // 0x32fe84: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32fe88:
    // 0x32fe88: 0xc0cff2c  jal         func_33FCB0
label_32fe8c:
    if (ctx->pc == 0x32FE8Cu) {
        ctx->pc = 0x32FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE88u;
        // 0x32fe8c: 0x248430a0  addiu       $a0, $a0, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE90u;
        goto label_32fe90;
    }
    ctx->pc = 0x32FE88u;
    SET_GPR_U32(ctx, 31, 0x32FE90u);
    ctx->pc = 0x32FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE88u;
    // 0x32fe8c: 0x248430a0  addiu       $a0, $a0, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32FE88u, 0x32FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE90u;
label_32fe90:
    // 0x32fe90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fe94:
    // 0x32fe94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fe98:
    // 0x32fe98: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x32fe98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32fe9c:
    // 0x32fe9c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x32fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_32fea0:
    // 0x32fea0: 0x60f809  jalr        $v1
label_32fea4:
    if (ctx->pc == 0x32FEA4u) {
        ctx->pc = 0x32FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEA0u;
        // 0x32fea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FEA8u;
        goto label_32fea8;
    }
    ctx->pc = 0x32FEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32FEA8u);
        ctx->pc = 0x32FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEA0u;
        // 0x32fea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FEA0u, 0x32FEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FEA8u;
label_32fea8:
    // 0x32fea8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32feac:
    // 0x32feac: 0x10000067  b           . + 4 + (0x67 << 2)
label_32feb0:
    if (ctx->pc == 0x32FEB0u) {
        ctx->pc = 0x32FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEACu;
        // 0x32feb0: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FEB4u;
        goto label_32feb4;
    }
    ctx->pc = 0x32FEACu;
    {
        const bool branch_taken_0x32feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEACu;
        // 0x32feb0: 0xa2c20001  sb          $v0, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32feac) {
            ctx->pc = 0x33004Cu;
            goto label_33004c;
        }
    }
    ctx->pc = 0x32FEB4u;
label_32feb4:
    // 0x32feb4: 0x0  nop
    ctx->pc = 0x32feb4u;
    // NOP
label_32feb8:
    // 0x32feb8: 0x10b880  sll         $s7, $s0, 2
    ctx->pc = 0x32feb8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_32febc:
    // 0x32febc: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x32febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_32fec0:
    // 0x32fec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32fec4:
    // 0x32fec4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32fec8:
    // 0x32fec8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32fecc:
    // 0x32fecc: 0x40f809  jalr        $v0
label_32fed0:
    if (ctx->pc == 0x32FED0u) {
        ctx->pc = 0x32FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FECCu;
        // 0x32fed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FED4u;
        goto label_32fed4;
    }
    ctx->pc = 0x32FECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FED4u);
        ctx->pc = 0x32FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FECCu;
        // 0x32fed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FECCu, 0x32FED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FED4u;
label_32fed4:
    // 0x32fed4: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x32fed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_32fed8:
    // 0x32fed8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32fed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32fedc:
    // 0x32fedc: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_32fee0:
    if (ctx->pc == 0x32FEE0u) {
        ctx->pc = 0x32FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEDCu;
        // 0x32fee0: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FEE4u;
        goto label_32fee4;
    }
    ctx->pc = 0x32FEDCu;
    {
        const bool branch_taken_0x32fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEDCu;
        // 0x32fee0: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fedc) {
            ctx->pc = 0x32FD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fd70;
        }
    }
    ctx->pc = 0x32FEE4u;
label_32fee4:
    // 0x32fee4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x32fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32fee8:
    // 0x32fee8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x32fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_32feec:
    // 0x32feec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32feecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32fef0:
    // 0x32fef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32fef4:
    // 0x32fef4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x32fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_32fef8:
    // 0x32fef8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32fef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32fefc:
    // 0x32fefc: 0xc0ceb28  jal         func_33ACA0
label_32ff00:
    if (ctx->pc == 0x32FF00u) {
        ctx->pc = 0x32FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEFCu;
        // 0x32ff00: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF04u;
        goto label_32ff04;
    }
    ctx->pc = 0x32FEFCu;
    SET_GPR_U32(ctx, 31, 0x32FF04u);
    ctx->pc = 0x32FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEFCu;
    // 0x32ff00: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32FEFCu, 0x32FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF04u;
label_32ff04:
    // 0x32ff04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ff08:
    // 0x32ff08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ff0c:
    // 0x32ff0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32ff0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32ff10:
    // 0x32ff10: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32ff14:
    // 0x32ff14: 0x40f809  jalr        $v0
label_32ff18:
    if (ctx->pc == 0x32FF18u) {
        ctx->pc = 0x32FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF14u;
        // 0x32ff18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF1Cu;
        goto label_32ff1c;
    }
    ctx->pc = 0x32FF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FF1Cu);
        ctx->pc = 0x32FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF14u;
        // 0x32ff18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF14u, 0x32FF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FF1Cu;
label_32ff1c:
    // 0x32ff1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32ff20:
    // 0x32ff20: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x32ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32ff24:
    // 0x32ff24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32ff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32ff28:
    // 0x32ff28: 0xc0ceb28  jal         func_33ACA0
label_32ff2c:
    if (ctx->pc == 0x32FF2Cu) {
        ctx->pc = 0x32FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF28u;
        // 0x32ff2c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF30u;
        goto label_32ff30;
    }
    ctx->pc = 0x32FF28u;
    SET_GPR_U32(ctx, 31, 0x32FF30u);
    ctx->pc = 0x32FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF28u;
    // 0x32ff2c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32FF28u, 0x32FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF30u;
label_32ff30:
    // 0x32ff30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ff34:
    // 0x32ff34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32ff34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32ff38:
    // 0x32ff38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ff3c:
    // 0x32ff3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32ff40:
    // 0x32ff40: 0x40f809  jalr        $v0
label_32ff44:
    if (ctx->pc == 0x32FF44u) {
        ctx->pc = 0x32FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF40u;
        // 0x32ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF48u;
        goto label_32ff48;
    }
    ctx->pc = 0x32FF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FF48u);
        ctx->pc = 0x32FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF40u;
        // 0x32ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF40u, 0x32FF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FF48u;
label_32ff48:
    // 0x32ff48: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x32ff48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_32ff4c:
    // 0x32ff4c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x32ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_32ff50:
    // 0x32ff50: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x32ff50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32ff54:
    // 0x32ff54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_32ff58:
    if (ctx->pc == 0x32FF58u) {
        ctx->pc = 0x32FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF54u;
        // 0x32ff58: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF5Cu;
        goto label_32ff5c;
    }
    ctx->pc = 0x32FF54u;
    {
        const bool branch_taken_0x32ff54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF54u;
        // 0x32ff58: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff54) {
            ctx->pc = 0x32FF90u;
            goto label_32ff90;
        }
    }
    ctx->pc = 0x32FF5Cu;
label_32ff5c:
    // 0x32ff5c: 0xc0cff2c  jal         func_33FCB0
label_32ff60:
    if (ctx->pc == 0x32FF60u) {
        ctx->pc = 0x32FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF5Cu;
        // 0x32ff60: 0x248430c8  addiu       $a0, $a0, 0x30C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF64u;
        goto label_32ff64;
    }
    ctx->pc = 0x32FF5Cu;
    SET_GPR_U32(ctx, 31, 0x32FF64u);
    ctx->pc = 0x32FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF5Cu;
    // 0x32ff60: 0x248430c8  addiu       $a0, $a0, 0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32FF5Cu, 0x32FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF64u;
label_32ff64:
    // 0x32ff64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ff68:
    // 0x32ff68: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32ff68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32ff6c:
    // 0x32ff6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ff70:
    // 0x32ff70: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32ff74:
    // 0x32ff74: 0x40f809  jalr        $v0
label_32ff78:
    if (ctx->pc == 0x32FF78u) {
        ctx->pc = 0x32FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF74u;
        // 0x32ff78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF7Cu;
        goto label_32ff7c;
    }
    ctx->pc = 0x32FF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FF7Cu);
        ctx->pc = 0x32FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF74u;
        // 0x32ff78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF74u, 0x32FF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FF7Cu;
label_32ff7c:
    // 0x32ff7c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x32ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ff80:
    // 0x32ff80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ff84:
    // 0x32ff84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x32ff84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32ff88:
    // 0x32ff88: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_32ff8c:
    if (ctx->pc == 0x32FF8Cu) {
        ctx->pc = 0x32FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF88u;
        // 0x32ff8c: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF90u;
        goto label_32ff90;
    }
    ctx->pc = 0x32FF88u;
    {
        const bool branch_taken_0x32ff88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF88u;
        // 0x32ff8c: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff88) {
            ctx->pc = 0x32FEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fea0;
        }
    }
    ctx->pc = 0x32FF90u;
label_32ff90:
    // 0x32ff90: 0x1860001c  blez        $v1, . + 4 + (0x1C << 2)
label_32ff94:
    if (ctx->pc == 0x32FF94u) {
        ctx->pc = 0x32FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF90u;
        // 0x32ff94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FF98u;
        goto label_32ff98;
    }
    ctx->pc = 0x32FF90u;
    {
        const bool branch_taken_0x32ff90 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x32FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF90u;
        // 0x32ff94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff90) {
            ctx->pc = 0x330004u;
            goto label_330004;
        }
    }
    ctx->pc = 0x32FF98u;
label_32ff98:
    // 0x32ff98: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x32ff98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32ff9c:
    // 0x32ff9c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x32ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_32ffa0:
    // 0x32ffa0: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x32ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_32ffa4:
    // 0x32ffa4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32ffa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32ffa8:
    // 0x32ffa8: 0x2e38021  addu        $s0, $s7, $v1
    ctx->pc = 0x32ffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_32ffac:
    // 0x32ffac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ffb0:
    // 0x32ffb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ffb4:
    // 0x32ffb4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32ffb8:
    // 0x32ffb8: 0x40f809  jalr        $v0
label_32ffbc:
    if (ctx->pc == 0x32FFBCu) {
        ctx->pc = 0x32FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB8u;
        // 0x32ffbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFC0u;
        goto label_32ffc0;
    }
    ctx->pc = 0x32FFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FFC0u);
        ctx->pc = 0x32FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB8u;
        // 0x32ffbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FFB8u, 0x32FFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FFC0u;
label_32ffc0:
    // 0x32ffc0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x32ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_32ffc4:
    // 0x32ffc4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_32ffc8:
    // 0x32ffc8: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x32ffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_32ffcc:
    // 0x32ffcc: 0xc0e9452  jal         func_3A5148
label_32ffd0:
    if (ctx->pc == 0x32FFD0u) {
        ctx->pc = 0x32FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFCCu;
        // 0x32ffd0: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFD4u;
        goto label_32ffd4;
    }
    ctx->pc = 0x32FFCCu;
    SET_GPR_U32(ctx, 31, 0x32FFD4u);
    ctx->pc = 0x32FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FFCCu;
    // 0x32ffd0: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x32FFCCu, 0x32FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFD4u;
label_32ffd4:
    // 0x32ffd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ffd8:
    // 0x32ffd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ffdc:
    // 0x32ffdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ffe0:
    // 0x32ffe0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32ffe4:
    // 0x32ffe4: 0x40f809  jalr        $v0
label_32ffe8:
    if (ctx->pc == 0x32FFE8u) {
        ctx->pc = 0x32FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFE4u;
        // 0x32ffe8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FFECu;
        goto label_32ffec;
    }
    ctx->pc = 0x32FFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FFECu);
        ctx->pc = 0x32FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFE4u;
        // 0x32ffe8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FFE4u, 0x32FFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FFECu;
label_32ffec:
    // 0x32ffec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x32ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_32fff0:
    // 0x32fff0: 0x87a2000a  lh          $v0, 0xA($sp)
    ctx->pc = 0x32fff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_32fff4:
    // 0x32fff4: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x32fff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_32fff8:
    // 0x32fff8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32fff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32fffc:
    // 0x32fffc: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_330000:
    if (ctx->pc == 0x330000u) {
        ctx->pc = 0x330000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFFCu;
        // 0x330000: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330004u;
        goto label_330004;
    }
    ctx->pc = 0x32FFFCu;
    {
        const bool branch_taken_0x32fffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFFCu;
        // 0x330000: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fffc) {
            ctx->pc = 0x32FF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ff9c;
        }
    }
    ctx->pc = 0x330004u;
label_330004:
    // 0x330004: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x330004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_330008:
    // 0x330008: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x330008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33000c:
    // 0x33000c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330010:
    // 0x330010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x330010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330014:
    // 0x330014: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x330014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_330018:
    // 0x330018: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x330018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_33001c:
    // 0x33001c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_330020:
    // 0x330020: 0x60f809  jalr        $v1
label_330024:
    if (ctx->pc == 0x330024u) {
        ctx->pc = 0x330024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330020u;
        // 0x330024: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330028u;
        goto label_330028;
    }
    ctx->pc = 0x330020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x330028u);
        ctx->pc = 0x330024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330020u;
        // 0x330024: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330020u, 0x330028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330028u;
label_330028:
    // 0x330028: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x330028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_33002c:
    // 0x33002c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x33002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_330030:
    // 0x330030: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x330030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_330034:
    // 0x330034: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x330034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_330038:
    // 0x330038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33003c:
    // 0x33003c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_330040:
    // 0x330040: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x330040u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_330044:
    // 0x330044: 0x1480ff14  bnez        $a0, . + 4 + (-0xEC << 2)
label_330048:
    if (ctx->pc == 0x330048u) {
        ctx->pc = 0x330048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330044u;
        // 0x330048: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33004Cu;
        goto label_33004c;
    }
    ctx->pc = 0x330044u;
    {
        const bool branch_taken_0x330044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330044u;
        // 0x330048: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330044) {
            ctx->pc = 0x32FC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fc98;
        }
    }
    ctx->pc = 0x33004Cu;
label_33004c:
    // 0x33004c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x33004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_330050:
    // 0x330050: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x330050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_330054:
    // 0x330054: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x330054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_330058:
    // 0x330058: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x330058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33005c:
    // 0x33005c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x33005cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_330060:
    // 0x330060: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x330060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_330064:
    // 0x330064: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x330064u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_330068:
    // 0x330068: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x330068u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_33006c:
    // 0x33006c: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x33006cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_330070:
    // 0x330070: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x330070u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_330074:
    // 0x330074: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x330074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_330078:
    // 0x330078: 0x3e00008  jr          $ra
label_33007c:
    if (ctx->pc == 0x33007Cu) {
        ctx->pc = 0x33007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330078u;
        // 0x33007c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330080u;
        goto label_fallthrough_0x330078;
    }
    ctx->pc = 0x330078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330078u;
        // 0x33007c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x330078:
    ctx->pc = 0x330080u;
}
