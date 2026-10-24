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

// Function: Poker_Initialize
// Address: 0x1d70d0 - 0x1d72b0
void Poker_Initialize_0x1d70d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_Initialize_0x1d70d0");
#endif

    switch (ctx->pc) {
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d70d4u: goto label_1d70d4;
        case 0x1d70d8u: goto label_1d70d8;
        case 0x1d70dcu: goto label_1d70dc;
        case 0x1d70e0u: goto label_1d70e0;
        case 0x1d70e4u: goto label_1d70e4;
        case 0x1d70e8u: goto label_1d70e8;
        case 0x1d70ecu: goto label_1d70ec;
        case 0x1d70f0u: goto label_1d70f0;
        case 0x1d70f4u: goto label_1d70f4;
        case 0x1d70f8u: goto label_1d70f8;
        case 0x1d70fcu: goto label_1d70fc;
        case 0x1d7100u: goto label_1d7100;
        case 0x1d7104u: goto label_1d7104;
        case 0x1d7108u: goto label_1d7108;
        case 0x1d710cu: goto label_1d710c;
        case 0x1d7110u: goto label_1d7110;
        case 0x1d7114u: goto label_1d7114;
        case 0x1d7118u: goto label_1d7118;
        case 0x1d711cu: goto label_1d711c;
        case 0x1d7120u: goto label_1d7120;
        case 0x1d7124u: goto label_1d7124;
        case 0x1d7128u: goto label_1d7128;
        case 0x1d712cu: goto label_1d712c;
        case 0x1d7130u: goto label_1d7130;
        case 0x1d7134u: goto label_1d7134;
        case 0x1d7138u: goto label_1d7138;
        case 0x1d713cu: goto label_1d713c;
        case 0x1d7140u: goto label_1d7140;
        case 0x1d7144u: goto label_1d7144;
        case 0x1d7148u: goto label_1d7148;
        case 0x1d714cu: goto label_1d714c;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7154u: goto label_1d7154;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d715cu: goto label_1d715c;
        case 0x1d7160u: goto label_1d7160;
        case 0x1d7164u: goto label_1d7164;
        case 0x1d7168u: goto label_1d7168;
        case 0x1d716cu: goto label_1d716c;
        case 0x1d7170u: goto label_1d7170;
        case 0x1d7174u: goto label_1d7174;
        case 0x1d7178u: goto label_1d7178;
        case 0x1d717cu: goto label_1d717c;
        case 0x1d7180u: goto label_1d7180;
        case 0x1d7184u: goto label_1d7184;
        case 0x1d7188u: goto label_1d7188;
        case 0x1d718cu: goto label_1d718c;
        case 0x1d7190u: goto label_1d7190;
        case 0x1d7194u: goto label_1d7194;
        case 0x1d7198u: goto label_1d7198;
        case 0x1d719cu: goto label_1d719c;
        case 0x1d71a0u: goto label_1d71a0;
        case 0x1d71a4u: goto label_1d71a4;
        case 0x1d71a8u: goto label_1d71a8;
        case 0x1d71acu: goto label_1d71ac;
        case 0x1d71b0u: goto label_1d71b0;
        case 0x1d71b4u: goto label_1d71b4;
        case 0x1d71b8u: goto label_1d71b8;
        case 0x1d71bcu: goto label_1d71bc;
        case 0x1d71c0u: goto label_1d71c0;
        case 0x1d71c4u: goto label_1d71c4;
        case 0x1d71c8u: goto label_1d71c8;
        case 0x1d71ccu: goto label_1d71cc;
        case 0x1d71d0u: goto label_1d71d0;
        case 0x1d71d4u: goto label_1d71d4;
        case 0x1d71d8u: goto label_1d71d8;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e0u: goto label_1d71e0;
        case 0x1d71e4u: goto label_1d71e4;
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71ecu: goto label_1d71ec;
        case 0x1d71f0u: goto label_1d71f0;
        case 0x1d71f4u: goto label_1d71f4;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d71fcu: goto label_1d71fc;
        case 0x1d7200u: goto label_1d7200;
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d720cu: goto label_1d720c;
        case 0x1d7210u: goto label_1d7210;
        case 0x1d7214u: goto label_1d7214;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d721cu: goto label_1d721c;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d7228u: goto label_1d7228;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7230u: goto label_1d7230;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d723cu: goto label_1d723c;
        case 0x1d7240u: goto label_1d7240;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        case 0x1d7270u: goto label_1d7270;
        case 0x1d7274u: goto label_1d7274;
        case 0x1d7278u: goto label_1d7278;
        case 0x1d727cu: goto label_1d727c;
        case 0x1d7280u: goto label_1d7280;
        case 0x1d7284u: goto label_1d7284;
        case 0x1d7288u: goto label_1d7288;
        case 0x1d728cu: goto label_1d728c;
        case 0x1d7290u: goto label_1d7290;
        case 0x1d7294u: goto label_1d7294;
        case 0x1d7298u: goto label_1d7298;
        case 0x1d729cu: goto label_1d729c;
        case 0x1d72a0u: goto label_1d72a0;
        case 0x1d72a4u: goto label_1d72a4;
        case 0x1d72a8u: goto label_1d72a8;
        case 0x1d72acu: goto label_1d72ac;
        default: break;
    }

    ctx->pc = 0x1d70d0u;

label_1d70d0:
    // 0x1d70d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d70d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1d70d4:
    // 0x1d70d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d70d8:
    // 0x1d70d8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1d70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1d70dc:
    // 0x1d70dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1d70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1d70e0:
    // 0x1d70e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d70e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d70e4:
    // 0x1d70e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1d70e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1d70e8:
    // 0x1d70e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1d70e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1d70ec:
    // 0x1d70ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d70ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1d70f0:
    // 0x1d70f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d70f4:
    // 0x1d70f4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1d70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1d70f8:
    // 0x1d70f8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1d70f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1d70fc:
    // 0x1d70fc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1d70fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1d7100:
    // 0x1d7100: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7104:
    // 0x1d7104: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d7104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1d7108:
    // 0x1d7108: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
label_1d710c:
    if (ctx->pc == 0x1D710Cu) {
        ctx->pc = 0x1D710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7108u;
        // 0x1d710c: 0xae652e60  sw          $a1, 0x2E60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7110u;
        goto label_1d7110;
    }
    ctx->pc = 0x1D7108u;
    {
        const bool branch_taken_0x1d7108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7108u;
        // 0x1d710c: 0xae652e60  sw          $a1, 0x2E60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7108) {
            ctx->pc = 0x1D714Cu;
            goto label_1d714c;
        }
    }
    ctx->pc = 0x1D7110u;
label_1d7110:
    // 0x1d7110: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d7110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7114:
    // 0x1d7114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d7118:
    if (ctx->pc == 0x1D7118u) {
        ctx->pc = 0x1D7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7114u;
        // 0x1d7118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D711Cu;
        goto label_1d711c;
    }
    ctx->pc = 0x1D7114u;
    {
        const bool branch_taken_0x1d7114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7114u;
        // 0x1d7118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7114) {
            ctx->pc = 0x1D712Cu;
            goto label_1d712c;
        }
    }
    ctx->pc = 0x1D711Cu;
label_1d711c:
    // 0x1d711c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1d7120:
    if (ctx->pc == 0x1D7120u) {
        ctx->pc = 0x1D7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D711Cu;
        // 0x1d7120: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7124u;
        goto label_1d7124;
    }
    ctx->pc = 0x1D711Cu;
    {
        const bool branch_taken_0x1d711c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D711Cu;
        // 0x1d7120: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d711c) {
            ctx->pc = 0x1D7144u;
            goto label_1d7144;
        }
    }
    ctx->pc = 0x1D7124u;
label_1d7124:
    // 0x1d7124: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d7128:
    if (ctx->pc == 0x1D7128u) {
        ctx->pc = 0x1D712Cu;
        goto label_1d712c;
    }
    ctx->pc = 0x1D7124u;
    {
        const bool branch_taken_0x1d7124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7124) {
            ctx->pc = 0x1D7168u;
            goto label_1d7168;
        }
    }
    ctx->pc = 0x1D712Cu;
label_1d712c:
    // 0x1d712c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1d7130:
    if (ctx->pc == 0x1D7130u) {
        ctx->pc = 0x1D7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712Cu;
        // 0x1d7130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7134u;
        goto label_1d7134;
    }
    ctx->pc = 0x1D712Cu;
    {
        const bool branch_taken_0x1d712c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712Cu;
        // 0x1d7130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d712c) {
            ctx->pc = 0x1D7154u;
            goto label_1d7154;
        }
    }
    ctx->pc = 0x1D7134u;
label_1d7134:
    // 0x1d7134: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1d7138:
    if (ctx->pc == 0x1D7138u) {
        ctx->pc = 0x1D7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7134u;
        // 0x1d7138: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D713Cu;
        goto label_1d713c;
    }
    ctx->pc = 0x1D7134u;
    {
        const bool branch_taken_0x1d7134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7134u;
        // 0x1d7138: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7134) {
            ctx->pc = 0x1D715Cu;
            goto label_1d715c;
        }
    }
    ctx->pc = 0x1D713Cu;
label_1d713c:
    // 0x1d713c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d7140:
    if (ctx->pc == 0x1D7140u) {
        ctx->pc = 0x1D7144u;
        goto label_1d7144;
    }
    ctx->pc = 0x1D713Cu;
    {
        const bool branch_taken_0x1d713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d713c) {
            ctx->pc = 0x1D7168u;
            goto label_1d7168;
        }
    }
    ctx->pc = 0x1D7144u;
label_1d7144:
    // 0x1d7144: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d7148:
    if (ctx->pc == 0x1D7148u) {
        ctx->pc = 0x1D7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7144u;
        // 0x1d7148: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D714Cu;
        goto label_1d714c;
    }
    ctx->pc = 0x1D7144u;
    {
        const bool branch_taken_0x1d7144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7144u;
        // 0x1d7148: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7144) {
            ctx->pc = 0x1D7160u;
            goto label_1d7160;
        }
    }
    ctx->pc = 0x1D714Cu;
label_1d714c:
    // 0x1d714c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d7150:
    if (ctx->pc == 0x1D7150u) {
        ctx->pc = 0x1D7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D714Cu;
        // 0x1d7150: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7154u;
        goto label_1d7154;
    }
    ctx->pc = 0x1D714Cu;
    {
        const bool branch_taken_0x1d714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D714Cu;
        // 0x1d7150: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d714c) {
            ctx->pc = 0x1D7160u;
            goto label_1d7160;
        }
    }
    ctx->pc = 0x1D7154u;
label_1d7154:
    // 0x1d7154: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d7158:
    if (ctx->pc == 0x1D7158u) {
        ctx->pc = 0x1D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7154u;
        // 0x1d7158: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D715Cu;
        goto label_1d715c;
    }
    ctx->pc = 0x1D7154u;
    {
        const bool branch_taken_0x1d7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7154u;
        // 0x1d7158: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7154) {
            ctx->pc = 0x1D7160u;
            goto label_1d7160;
        }
    }
    ctx->pc = 0x1D715Cu;
label_1d715c:
    // 0x1d715c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1d715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1d7160:
    // 0x1d7160: 0xae623030  sw          $v0, 0x3030($s3)
    ctx->pc = 0x1d7160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12336), GPR_U32(ctx, 2));
label_1d7164:
    // 0x1d7164: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1d7164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1d7168:
    // 0x1d7168: 0x3c013fb1  lui         $at, 0x3FB1
    ctx->pc = 0x1d7168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16305 << 16));
label_1d716c:
    // 0x1d716c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1d716cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1d7170:
    // 0x1d7170: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d7170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d7174:
    // 0x1d7174: 0x2466b270  addiu       $a2, $v1, -0x4D90
    ctx->pc = 0x1d7174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947440));
label_1d7178:
    // 0x1d7178: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1d7178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1d717c:
    // 0x1d717c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1d717cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1d7180:
    // 0x1d7180: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1d7180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1d7184:
    // 0x1d7184: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1d7184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1d7188:
    // 0x1d7188: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1d7188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d718c:
    // 0x1d718c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1d718cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d7190:
    // 0x1d7190: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1d7190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d7194:
    // 0x1d7194: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1d7194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d7198:
    // 0x1d7198: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d719c:
    // 0x1d719c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d719cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d71a0:
    // 0x1d71a0: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d71a4:
    // 0x1d71a4: 0x26772e64  addiu       $s7, $s3, 0x2E64
    ctx->pc = 0x1d71a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 11876));
label_1d71a8:
    // 0x1d71a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d71ac:
    // 0x1d71ac: 0x0  nop
    ctx->pc = 0x1d71acu;
    // NOP
label_1d71b0:
    // 0x1d71b0: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d71b4:
    // 0x1d71b4: 0x3a2a821  addu        $s5, $sp, $v0
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1d71b8:
    // 0x1d71b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d71b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d71bc:
    // 0x1d71bc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d71c0:
    // 0x1d71c0: 0xc0c3ea6  jal         func_30FA98
label_1d71c4:
    if (ctx->pc == 0x1D71C4u) {
        ctx->pc = 0x1D71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71C0u;
        // 0x1d71c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71C8u;
        goto label_1d71c8;
    }
    ctx->pc = 0x1D71C0u;
    SET_GPR_U32(ctx, 31, 0x1D71C8u);
    ctx->pc = 0x1D71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71C0u;
    // 0x1d71c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1D71C0u, 0x1D71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71C8u;
label_1d71c8:
    // 0x1d71c8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1d71cc:
    if (ctx->pc == 0x1D71CCu) {
        ctx->pc = 0x1D71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71C8u;
        // 0x1d71cc: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71D0u;
        goto label_1d71d0;
    }
    ctx->pc = 0x1D71C8u;
    {
        const bool branch_taken_0x1d71c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71C8u;
        // 0x1d71cc: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71c8) {
            ctx->pc = 0x1D7254u;
            goto label_1d7254;
        }
    }
    ctx->pc = 0x1D71D0u;
label_1d71d0:
    // 0x1d71d0: 0x24638150  addiu       $v1, $v1, -0x7EB0
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934864));
label_1d71d4:
    // 0x1d71d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1d71d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d71d8:
    // 0x1d71d8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1d71d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1d71dc:
    // 0x1d71dc: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x1d71dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1d71e0:
    // 0x1d71e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d71e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d71e4:
    // 0x1d71e4: 0x2f18021  addu        $s0, $s7, $s1
    ctx->pc = 0x1d71e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_1d71e8:
    // 0x1d71e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d71e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d71ec:
    // 0x1d71ec: 0xc0723fc  jal         func_1C8FF0
label_1d71f0:
    if (ctx->pc == 0x1D71F0u) {
        ctx->pc = 0x1D71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71ECu;
        // 0x1d71f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71F4u;
        goto label_1d71f4;
    }
    ctx->pc = 0x1D71ECu;
    SET_GPR_U32(ctx, 31, 0x1D71F4u);
    ctx->pc = 0x1D71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71ECu;
    // 0x1d71f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8FF0u, 0x1D71ECu, 0x1D71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71F4u;
label_1d71f4:
    // 0x1d71f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d71f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d71f8:
    // 0x1d71f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d71f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d71fc:
    // 0x1d71fc: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d7200:
    // 0x1d7200: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d7204:
    // 0x1d7204: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d7208:
    // 0x1d7208: 0x60f809  jalr        $v1
label_1d720c:
    if (ctx->pc == 0x1D720Cu) {
        ctx->pc = 0x1D720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7208u;
        // 0x1d720c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7210u;
        goto label_1d7210;
    }
    ctx->pc = 0x1D7208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D7210u);
        ctx->pc = 0x1D720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7208u;
        // 0x1d720c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7208u, 0x1D7210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7210u;
label_1d7210:
    // 0x1d7210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d7214:
    // 0x1d7214: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d7218:
    // 0x1d7218: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x1d7218u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1d721c:
    // 0x1d721c: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1d721cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1d7220:
    // 0x1d7220: 0xe4540110  swc1        $f20, 0x110($v0)
    ctx->pc = 0x1d7220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d7224:
    // 0x1d7224: 0x26312e68  addiu       $s1, $s1, 0x2E68
    ctx->pc = 0x1d7224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11880));
label_1d7228:
    // 0x1d7228: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d722c:
    // 0x1d722c: 0xe4540114  swc1        $f20, 0x114($v0)
    ctx->pc = 0x1d722cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1d7230:
    // 0x1d7230: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d7234:
    // 0x1d7234: 0xe4740118  swc1        $f20, 0x118($v1)
    ctx->pc = 0x1d7234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
label_1d7238:
    // 0x1d7238: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d723c:
    // 0x1d723c: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1d723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_1d7240:
    // 0x1d7240: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d7240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d7244:
    // 0x1d7244: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1d7244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_1d7248:
    // 0x1d7248: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d724c:
    // 0x1d724c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1d724cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1d7250:
    // 0x1d7250: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d7250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d7254:
    // 0x1d7254: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d7254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d7258:
    // 0x1d7258: 0x2a42000d  slti        $v0, $s2, 0xD
    ctx->pc = 0x1d7258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
label_1d725c:
    // 0x1d725c: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_1d7260:
    if (ctx->pc == 0x1D7260u) {
        ctx->pc = 0x1D7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D725Cu;
        // 0x1d7260: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7264u;
        goto label_1d7264;
    }
    ctx->pc = 0x1D725Cu;
    {
        const bool branch_taken_0x1d725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d725c) {
            ctx->pc = 0x1D7260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D725Cu;
            // 0x1d7260: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D71C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71c0;
        }
    }
    ctx->pc = 0x1D7264u;
label_1d7264:
    // 0x1d7264: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1d7264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d7268:
    // 0x1d7268: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1d7268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d726c:
    // 0x1d726c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_1d7270:
    if (ctx->pc == 0x1D7270u) {
        ctx->pc = 0x1D7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D726Cu;
        // 0x1d7270: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7274u;
        goto label_1d7274;
    }
    ctx->pc = 0x1D726Cu;
    {
        const bool branch_taken_0x1d726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D726Cu;
        // 0x1d7270: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d726c) {
            ctx->pc = 0x1D71B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71b0;
        }
    }
    ctx->pc = 0x1D7274u;
label_1d7274:
    // 0x1d7274: 0xc077e24  jal         func_1DF890
label_1d7278:
    if (ctx->pc == 0x1D7278u) {
        ctx->pc = 0x1D7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7274u;
        // 0x1d7278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D727Cu;
        goto label_1d727c;
    }
    ctx->pc = 0x1D7274u;
    SET_GPR_U32(ctx, 31, 0x1D727Cu);
    ctx->pc = 0x1D7278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7274u;
    // 0x1d7278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF890u, 0x1D7274u, 0x1D727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D727Cu;
label_1d727c:
    // 0x1d727c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1d727cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d7280:
    // 0x1d7280: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1d7280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d7284:
    // 0x1d7284: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1d7284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d7288:
    // 0x1d7288: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1d7288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d728c:
    // 0x1d728c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d728cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d7290:
    // 0x1d7290: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d7290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d7294:
    // 0x1d7294: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1d7294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7298:
    // 0x1d7298: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1d7298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d729c:
    // 0x1d729c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1d729cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d72a0:
    // 0x1d72a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d72a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d72a4:
    // 0x1d72a4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d72a8:
    // 0x1d72a8: 0x3e00008  jr          $ra
label_1d72ac:
    if (ctx->pc == 0x1D72ACu) {
        ctx->pc = 0x1D72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72A8u;
        // 0x1d72ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D72B0u;
        goto label_fallthrough_0x1d72a8;
    }
    ctx->pc = 0x1D72A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72A8u;
        // 0x1d72ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D72A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d72a8:
    ctx->pc = 0x1D72B0u;
}
