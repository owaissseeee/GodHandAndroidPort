#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CD168
// Address: 0x7cd168 - 0x7cd2e0
void func_007CD168_0x7cd168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CD168_0x7cd168");
#endif

    switch (ctx->pc) {
        case 0x7cd1b8u: goto label_7cd1b8;
        case 0x7cd1f8u: goto label_7cd1f8;
        case 0x7cd298u: goto label_7cd298;
        default: break;
    }

    ctx->pc = 0x7cd168u;

    // 0x7cd168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cd168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cd16c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x7cd16cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd170: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x7cd170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x7cd174: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7cd174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7cd178: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x7cd178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x7cd17c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x7cd17cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd180: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x7cd180u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd184: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x7cd184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7cd188: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x7cd188u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x7cd18c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7cd18cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd190: 0x181140  sll         $v0, $t8, 5
    ctx->pc = 0x7cd190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x7cd194: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x7cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x7cd198: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x7cd198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x7cd19c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x7cd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x7cd1a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7cd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7cd1a4: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x7cd1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x7cd1a8: 0x13000036  beqz        $t8, . + 4 + (0x36 << 2)
    ctx->pc = 0x7CD1A8u;
    {
        const bool branch_taken_0x7cd1a8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD1A8u;
        // 0x7cd1ac: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd1a8) {
            ctx->pc = 0x7CD284u;
            goto label_7cd284;
        }
    }
    ctx->pc = 0x7CD1B0u;
    // 0x7cd1b0: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x7cd1b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x7cd1b4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x7cd1b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_7cd1b8:
    // 0x7cd1b8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x7cd1b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd1bc: 0x110d0029  beq         $t0, $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x7CD1BCu;
    {
        const bool branch_taken_0x7cd1bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x7CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD1BCu;
        // 0x7cd1c0: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd1bc) {
            ctx->pc = 0x7CD264u;
            goto label_7cd264;
        }
    }
    ctx->pc = 0x7CD1C4u;
    // 0x7cd1c4: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x7cd1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x7cd1c8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x7cd1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x7cd1cc: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x7cd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x7cd1d0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x7cd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x7cd1d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x7cd1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cd1d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x7cd1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cd1dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7cd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cd1e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x7cd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7cd1e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x7cd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7cd1e8: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7CD1E8u;
    {
        const bool branch_taken_0x7cd1e8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD1E8u;
        // 0x7cd1ec: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd1e8) {
            ctx->pc = 0x7CD264u;
            goto label_7cd264;
        }
    }
    ctx->pc = 0x7CD1F0u;
    // 0x7cd1f0: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x7cd1f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x7cd1f4: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x7cd1f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_7cd1f8:
    // 0x7cd1f8: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x7cd1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x7cd1fc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x7cd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x7cd200: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x7cd200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cd204: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x7cd204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x7cd208: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x7cd208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x7cd20c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x7cd20cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cd210: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x7cd210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x7cd214: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7cd214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7cd218: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x7cd218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x7cd21c: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x7cd21cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x7cd220: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x7cd220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x7cd224: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x7cd224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x7cd228: 0x110d000f  beq         $t0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x7CD228u;
    {
        const bool branch_taken_0x7cd228 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x7CD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD228u;
        // 0x7cd22c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd228) {
            ctx->pc = 0x7CD268u;
            goto label_7cd268;
        }
    }
    ctx->pc = 0x7CD230u;
    // 0x7cd230: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x7cd230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x7cd234: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x7cd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x7cd238: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7cd238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd23c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x7cd23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cd240: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x7cd240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x7cd244: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x7cd244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cd248: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x7cd248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7cd24c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7cd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cd250: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x7cd250u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7cd254: 0x460ffe8  bltz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x7CD254u;
    {
        const bool branch_taken_0x7cd254 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x7CD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD254u;
        // 0x7cd258: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd254) {
            ctx->pc = 0x7CD1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd1f8;
        }
    }
    ctx->pc = 0x7CD25Cu;
    // 0x7cd25c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD25Cu;
    {
        const bool branch_taken_0x7cd25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD25Cu;
        // 0x7cd260: 0x20b1821  addu        $v1, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd25c) {
            ctx->pc = 0x7CD270u;
            goto label_7cd270;
        }
    }
    ctx->pc = 0x7CD264u;
label_7cd264:
    // 0x7cd264: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x7cd264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_7cd268:
    // 0x7cd268: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x7cd268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd26c: 0x20b1821  addu        $v1, $s0, $t3
    ctx->pc = 0x7cd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_7cd270:
    // 0x7cd270: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x7cd270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd274: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x7cd274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x7cd278: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x7CD278u;
    {
        const bool branch_taken_0x7cd278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD278u;
        // 0x7cd27c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd278) {
            ctx->pc = 0x7CD1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd1b8;
        }
    }
    ctx->pc = 0x7CD280u;
    // 0x7cd280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7cd280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cd284:
    // 0x7cd284: 0x1300000f  beqz        $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x7CD284u;
    {
        const bool branch_taken_0x7cd284 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD284u;
        // 0x7cd288: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd284) {
            ctx->pc = 0x7CD2C4u;
            goto label_7cd2c4;
        }
    }
    ctx->pc = 0x7CD28Cu;
    // 0x7cd28c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x7cd28cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x7cd290: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x7cd290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x7cd294: 0x0  nop
    ctx->pc = 0x7cd294u;
    // NOP
label_7cd298:
    // 0x7cd298: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x7cd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x7cd29c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7cd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cd2a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD2A0u;
    {
        const bool branch_taken_0x7cd2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD2A0u;
        // 0x7cd2a4: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd2a0) {
            ctx->pc = 0x7CD2B4u;
            goto label_7cd2b4;
        }
    }
    ctx->pc = 0x7CD2A8u;
    // 0x7cd2a8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x7cd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x7cd2ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x7cd2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x7cd2b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x7cd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_7cd2b4:
    // 0x7cd2b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x7cd2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x7cd2b8: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x7cd2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x7cd2bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7CD2BCu;
    {
        const bool branch_taken_0x7cd2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD2BCu;
        // 0x7cd2c0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd2bc) {
            ctx->pc = 0x7CD298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd298;
        }
    }
    ctx->pc = 0x7CD2C4u;
label_7cd2c4:
    // 0x7cd2c4: 0xade80004  sw          $t0, 0x4($t7)
    ctx->pc = 0x7cd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x7cd2c8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x7cd2c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd2cc: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x7cd2ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd2d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x7cd2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cd2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD2D4u;
        // 0x7cd2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD2DCu;
    // 0x7cd2dc: 0x0  nop
    ctx->pc = 0x7cd2dcu;
    // NOP
    ctx->pc = 0x7cd2e0u;
}
} // namespace gh_mcport
