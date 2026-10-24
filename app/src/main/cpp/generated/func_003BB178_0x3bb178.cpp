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

// Function: func_003BB178
// Address: 0x3bb178 - 0x3bb468
void func_003BB178_0x3bb178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BB178_0x3bb178");
#endif

    switch (ctx->pc) {
        case 0x3bb1e0u: goto label_3bb1e0;
        case 0x3bb21cu: goto label_3bb21c;
        case 0x3bb2a0u: goto label_3bb2a0;
        case 0x3bb2d0u: goto label_3bb2d0;
        case 0x3bb2e0u: goto label_3bb2e0;
        case 0x3bb31cu: goto label_3bb31c;
        case 0x3bb350u: goto label_3bb350;
        case 0x3bb370u: goto label_3bb370;
        case 0x3bb384u: goto label_3bb384;
        case 0x3bb3b8u: goto label_3bb3b8;
        case 0x3bb410u: goto label_3bb410;
        case 0x3bb428u: goto label_3bb428;
        default: break;
    }

    ctx->pc = 0x3bb178u;

    // 0x3bb178: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3bb178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3bb17c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3bb17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3bb180: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3bb180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3bb184: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bb184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb188: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3bb188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3bb18c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3bb18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb190: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3bb190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3bb194: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3bb194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb198: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3bb198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3bb19c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3bb19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3bb1a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3bb1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3bb1a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3bb1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3bb1a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3bb1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3bb1ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb1b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3bb1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb1b4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x3bb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x3bb1b8: 0x8c76fff0  lw          $s6, -0x10($v1)
    ctx->pc = 0x3bb1b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3bb1bc: 0x2d2102b  sltu        $v0, $s6, $s2
    ctx->pc = 0x3bb1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3bb1c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB1C0u;
    {
        const bool branch_taken_0x3bb1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1C0u;
        // 0x3bb1c4: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1c0) {
            ctx->pc = 0x3BB1E0u;
            goto label_3bb1e0;
        }
    }
    ctx->pc = 0x3BB1C8u;
    // 0x3bb1c8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3bb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3bb1cc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3bb1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3bb1d0: 0x2484c3f8  addiu       $a0, $a0, -0x3C08
    ctx->pc = 0x3bb1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951928));
    // 0x3bb1d4: 0x24c6c430  addiu       $a2, $a2, -0x3BD0
    ctx->pc = 0x3bb1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951984));
    // 0x3bb1d8: 0xc0e9ed6  jal         func_3A7B58
    ctx->pc = 0x3BB1D8u;
    SET_GPR_U32(ctx, 31, 0x3BB1E0u);
    ctx->pc = 0x3BB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB1D8u;
    // 0x3bb1dc: 0x2405009c  addiu       $a1, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B58u, 0x3BB1D8u, 0x3BB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB1E0u;
label_3bb1e0:
    // 0x3bb1e0: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x3bb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x3bb1e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bb1e8: 0x53202b  sltu        $a0, $v0, $s3
    ctx->pc = 0x3bb1e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3bb1ec: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x3bb1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x3bb1f0: 0x44980b  movn        $s3, $v0, $a0
    ctx->pc = 0x3bb1f0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x3bb1f4: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x3bb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3bb1f8: 0x2d38023  subu        $s0, $s6, $s3
    ctx->pc = 0x3bb1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x3bb1fc: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x3bb1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3bb200: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB200u;
    {
        const bool branch_taken_0x3bb200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB200u;
        // 0x3bb204: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb200) {
            ctx->pc = 0x3BB21Cu;
            goto label_3bb21c;
        }
    }
    ctx->pc = 0x3BB208u;
    // 0x3bb208: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3bb208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3bb20c: 0x2484c3f8  addiu       $a0, $a0, -0x3C08
    ctx->pc = 0x3bb20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951928));
    // 0x3bb210: 0x24c6c440  addiu       $a2, $a2, -0x3BC0
    ctx->pc = 0x3bb210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952000));
    // 0x3bb214: 0xc0e9ed6  jal         func_3A7B58
    ctx->pc = 0x3BB214u;
    SET_GPR_U32(ctx, 31, 0x3BB21Cu);
    ctx->pc = 0x3BB218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB214u;
    // 0x3bb218: 0x2405009f  addiu       $a1, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B58u, 0x3BB214u, 0x3BB21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB21Cu;
label_3bb21c:
    // 0x3bb21c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3bb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb220: 0x215b821  addu        $s7, $s0, $s5
    ctx->pc = 0x3bb220u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3bb224: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x3bb224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3bb228: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3bb228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x3bb22c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3bb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb230: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3bb230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bb234: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3bb234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3bb238: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3bb238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3bb23c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3BB23Cu;
    {
        const bool branch_taken_0x3bb23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB23Cu;
        // 0x3bb240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb23c) {
            ctx->pc = 0x3BB274u;
            goto label_3bb274;
        }
    }
    ctx->pc = 0x3BB244u;
    // 0x3bb244: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3bb244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3bb248: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3bb248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3bb24c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3BB24Cu;
    {
        const bool branch_taken_0x3bb24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb24c) {
            ctx->pc = 0x3BB250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB24Cu;
            // 0x3bb250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB278u;
            goto label_3bb278;
        }
    }
    ctx->pc = 0x3BB254u;
    // 0x3bb254: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3bb254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3bb258: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3bb258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bb25c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x3bb25cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3bb260: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3bb260u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3bb264: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3bb264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bb268: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3bb268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3bb26c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB26Cu;
    {
        const bool branch_taken_0x3bb26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb26c) {
            ctx->pc = 0x3BB278u;
            goto label_3bb278;
        }
    }
    ctx->pc = 0x3BB274u;
label_3bb274:
    // 0x3bb274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3bb274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bb278:
    // 0x3bb278: 0x10c0005c  beqz        $a2, . + 4 + (0x5C << 2)
    ctx->pc = 0x3BB278u;
    {
        const bool branch_taken_0x3bb278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB278u;
        // 0x3bb27c: 0x26e30001  addiu       $v1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb278) {
            ctx->pc = 0x3BB3ECu;
            goto label_3bb3ec;
        }
    }
    ctx->pc = 0x3BB280u;
    // 0x3bb280: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x3bb280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bb284: 0x2552021  addu        $a0, $s2, $s5
    ctx->pc = 0x3bb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x3bb288: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x3bb288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bb28c: 0x253f021  addu        $fp, $s2, $s3
    ctx->pc = 0x3bb28cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3bb290: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB290u;
    {
        const bool branch_taken_0x3bb290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB290u;
        // 0x3bb294: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb290) {
            ctx->pc = 0x3BB2B8u;
            goto label_3bb2b8;
        }
    }
    ctx->pc = 0x3BB298u;
    // 0x3bb298: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x3bb298u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3bb29c: 0x0  nop
    ctx->pc = 0x3bb29cu;
    // NOP
label_3bb2a0:
    // 0x3bb2a0: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x3bb2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bb2a4: 0x0  nop
    ctx->pc = 0x3bb2a4u;
    // NOP
    // 0x3bb2a8: 0x0  nop
    ctx->pc = 0x3bb2a8u;
    // NOP
    // 0x3bb2ac: 0x0  nop
    ctx->pc = 0x3bb2acu;
    // NOP
    // 0x3bb2b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BB2B0u;
    {
        const bool branch_taken_0x3bb2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb2b0) {
            ctx->pc = 0x3BB2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB2B0u;
            // 0x3bb2b4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb2a0;
        }
    }
    ctx->pc = 0x3BB2B8u;
label_3bb2b8:
    // 0x3bb2b8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3bb2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3bb2bc: 0x2e020081  sltiu       $v0, $s0, 0x81
    ctx->pc = 0x3bb2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb2c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB2C0u;
    {
        const bool branch_taken_0x3bb2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2C0u;
        // 0x3bb2c4: 0x26250017  addiu       $a1, $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2c0) {
            ctx->pc = 0x3BB2E8u;
            goto label_3bb2e8;
        }
    }
    ctx->pc = 0x3BB2C8u;
    // 0x3bb2c8: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3BB2C8u;
    SET_GPR_U32(ctx, 31, 0x3BB2D0u);
    ctx->pc = 0x3BB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB2C8u;
    // 0x3bb2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3BB2C8u, 0x3BB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB2D0u;
label_3bb2d0:
    // 0x3bb2d0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BB2D0u;
    {
        const bool branch_taken_0x3bb2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2D0u;
        // 0x3bb2d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2d0) {
            ctx->pc = 0x3BB328u;
            goto label_3bb328;
        }
    }
    ctx->pc = 0x3BB2D8u;
    // 0x3bb2d8: 0xc0c75ba  jal         func_31D6E8
    ctx->pc = 0x3BB2D8u;
    SET_GPR_U32(ctx, 31, 0x3BB2E0u);
    ctx->pc = 0x3BB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB2D8u;
    // 0x3bb2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6E8u, 0x3BB2D8u, 0x3BB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB2E0u;
label_3bb2e0:
    // 0x3bb2e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB2E0u;
    {
        const bool branch_taken_0x3bb2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2E0u;
        // 0x3bb2e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2e0) {
            ctx->pc = 0x3BB328u;
            goto label_3bb328;
        }
    }
    ctx->pc = 0x3BB2E8u;
label_3bb2e8:
    // 0x3bb2e8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3bb2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3bb2ec: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3bb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x3bb2f0: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x3bb2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x3bb2f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb2f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb2fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3bb2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bb300: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bb300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bb304: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB304u;
    {
        const bool branch_taken_0x3bb304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb304) {
            ctx->pc = 0x3BB308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB304u;
            // 0x3bb308: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB324u;
            goto label_3bb324;
        }
    }
    ctx->pc = 0x3BB30Cu;
    // 0x3bb30c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3bb30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3bb310: 0x3484fff8  ori         $a0, $a0, 0xFFF8
    ctx->pc = 0x3bb310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65528);
    // 0x3bb314: 0xc0c764a  jal         func_31D928
    ctx->pc = 0x3BB314u;
    SET_GPR_U32(ctx, 31, 0x3BB31Cu);
    ctx->pc = 0x3BB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB314u;
    // 0x3bb318: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D928u, 0x3BB314u, 0x3BB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB31Cu;
label_3bb31c:
    // 0x3bb31c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB31Cu;
    {
        const bool branch_taken_0x3bb31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB31Cu;
        // 0x3bb320: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb31c) {
            ctx->pc = 0x3BB328u;
            goto label_3bb328;
        }
    }
    ctx->pc = 0x3BB324u;
label_3bb324:
    // 0x3bb324: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3bb324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3bb328:
    // 0x3bb328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb32c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x3bb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x3bb330: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3bb330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3bb334: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x3bb334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bb338: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3bb338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3bb33c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB33Cu;
    {
        const bool branch_taken_0x3bb33c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB33Cu;
        // 0x3bb340: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb33c) {
            ctx->pc = 0x3BB350u;
            goto label_3bb350;
        }
    }
    ctx->pc = 0x3BB344u;
    // 0x3bb344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bb344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb348: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3BB348u;
    SET_GPR_U32(ctx, 31, 0x3BB350u);
    ctx->pc = 0x3BB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB348u;
    // 0x3bb34c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BB348u, 0x3BB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB350u;
label_3bb350:
    // 0x3bb350: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3bb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb354: 0x2de3023  subu        $a2, $s6, $fp
    ctx->pc = 0x3bb354u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x3bb358: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x3bb358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3bb35c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB35Cu;
    {
        const bool branch_taken_0x3bb35c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB35Cu;
        // 0x3bb360: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb35c) {
            ctx->pc = 0x3BB370u;
            goto label_3bb370;
        }
    }
    ctx->pc = 0x3BB364u;
    // 0x3bb364: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3bb364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3bb368: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3BB368u;
    SET_GPR_U32(ctx, 31, 0x3BB370u);
    ctx->pc = 0x3BB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB368u;
    // 0x3bb36c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BB368u, 0x3BB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB370u;
label_3bb370:
    // 0x3bb370: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB370u;
    {
        const bool branch_taken_0x3bb370 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB370u;
        // 0x3bb374: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb370) {
            ctx->pc = 0x3BB384u;
            goto label_3bb384;
        }
    }
    ctx->pc = 0x3BB378u;
    // 0x3bb378: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x3bb378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3bb37c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3BB37Cu;
    SET_GPR_U32(ctx, 31, 0x3BB384u);
    ctx->pc = 0x3BB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB37Cu;
    // 0x3bb380: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BB37Cu, 0x3BB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB384u;
label_3bb384:
    // 0x3bb384: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x3bb384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb388: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3bb388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bb38c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3bb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3bb390: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb394: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB394u;
    {
        const bool branch_taken_0x3bb394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB394u;
        // 0x3bb398: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb394) {
            ctx->pc = 0x3BB3E4u;
            goto label_3bb3e4;
        }
    }
    ctx->pc = 0x3BB39Cu;
    // 0x3bb39c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3bb39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bb3a0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3bb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3bb3a4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3bb3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb3a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB3A8u;
    {
        const bool branch_taken_0x3bb3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3A8u;
        // 0x3bb3ac: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb3a8) {
            ctx->pc = 0x3BB3C0u;
            goto label_3bb3c0;
        }
    }
    ctx->pc = 0x3BB3B0u;
    // 0x3bb3b0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3BB3B0u;
    SET_GPR_U32(ctx, 31, 0x3BB3B8u);
    ctx->pc = 0x3BB3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB3B0u;
    // 0x3bb3b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3BB3B0u, 0x3BB3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB3B8u;
label_3bb3b8:
    // 0x3bb3b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3BB3B8u;
    {
        const bool branch_taken_0x3bb3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3B8u;
        // 0x3bb3bc: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb3b8) {
            ctx->pc = 0x3BB428u;
            goto label_3bb428;
        }
    }
    ctx->pc = 0x3BB3C0u;
label_3bb3c0:
    // 0x3bb3c0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3bb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3bb3c4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bb3c8: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3bb3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3bb3cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb3d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb3d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bb3d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb3dc: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3bb3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3bb3e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bb3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bb3e4:
    // 0x3bb3e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3BB3E4u;
    {
        const bool branch_taken_0x3bb3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3E4u;
        // 0x3bb3e8: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb3e4) {
            ctx->pc = 0x3BB428u;
            goto label_3bb428;
        }
    }
    ctx->pc = 0x3BB3ECu;
label_3bb3ec:
    // 0x3bb3ec: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3bb3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb3f0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x3bb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3bb3f4: 0x2c23023  subu        $a2, $s6, $v0
    ctx->pc = 0x3bb3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x3bb3f8: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x3bb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x3bb3fc: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x3bb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3bb400: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB400u;
    {
        const bool branch_taken_0x3bb400 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB400u;
        // 0x3bb404: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb400) {
            ctx->pc = 0x3BB410u;
            goto label_3bb410;
        }
    }
    ctx->pc = 0x3BB408u;
    // 0x3bb408: 0xc0e947d  jal         func_3A51F4
    ctx->pc = 0x3BB408u;
    SET_GPR_U32(ctx, 31, 0x3BB410u);
    ctx->pc = 0x3BB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB408u;
    // 0x3bb40c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3BB408u, 0x3BB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB410u;
label_3bb410:
    // 0x3bb410: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB410u;
    {
        const bool branch_taken_0x3bb410 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB410u;
        // 0x3bb414: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb410) {
            ctx->pc = 0x3BB428u;
            goto label_3bb428;
        }
    }
    ctx->pc = 0x3BB418u;
    // 0x3bb418: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3bb418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb41c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3bb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3bb420: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3BB420u;
    SET_GPR_U32(ctx, 31, 0x3BB428u);
    ctx->pc = 0x3BB424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB420u;
    // 0x3bb424: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BB420u, 0x3BB428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB428u;
label_3bb428:
    // 0x3bb428: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3bb428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bb42c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3bb42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb430: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3bb430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3bb434: 0xac77fff0  sw          $s7, -0x10($v1)
    ctx->pc = 0x3bb434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 23));
    // 0x3bb438: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3bb438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bb43c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3bb43cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bb440: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3bb440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bb444: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3bb444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bb448: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3bb448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bb44c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3bb44cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bb450: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3bb450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb454: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3bb454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb45c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB45Cu;
        // 0x3bb460: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB464u;
    // 0x3bb464: 0x0  nop
    ctx->pc = 0x3bb464u;
    // NOP
    ctx->pc = 0x3bb468u;
}
