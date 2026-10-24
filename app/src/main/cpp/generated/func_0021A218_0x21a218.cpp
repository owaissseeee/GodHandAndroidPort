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

// Function: func_0021A218
// Address: 0x21a218 - 0x21a538
void func_0021A218_0x21a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0021A218_0x21a218");
#endif

    switch (ctx->pc) {
        case 0x21a27cu: goto label_21a27c;
        case 0x21a3d4u: goto label_21a3d4;
        case 0x21a470u: goto label_21a470;
        case 0x21a484u: goto label_21a484;
        case 0x21a4acu: goto label_21a4ac;
        case 0x21a4b4u: goto label_21a4b4;
        case 0x21a4c0u: goto label_21a4c0;
        case 0x21a4ccu: goto label_21a4cc;
        case 0x21a518u: goto label_21a518;
        default: break;
    }

    ctx->pc = 0x21a218u;

    // 0x21a218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21a21c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a220: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x21a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21a224: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21a224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a228: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x21a22c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x21a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x21a230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a234: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x21a234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21a238: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x21a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x21a23c: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x21a23cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x21a240: 0x34620400  ori         $v0, $v1, 0x400
    ctx->pc = 0x21a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x21a244: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A244u;
    {
        const bool branch_taken_0x21a244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A244u;
        // 0x21a248: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a244) {
            ctx->pc = 0x21A260u;
            goto label_21a260;
        }
    }
    ctx->pc = 0x21A24Cu;
    // 0x21a24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a250: 0x1082008a  beq         $a0, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x21A250u;
    {
        const bool branch_taken_0x21a250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a250) {
            ctx->pc = 0x21A47Cu;
            goto label_21a47c;
        }
    }
    ctx->pc = 0x21A258u;
    // 0x21a258: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x21A258u;
    {
        const bool branch_taken_0x21a258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A258u;
        // 0x21a25c: 0xc64116c0  lwc1        $f1, 0x16C0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a258) {
            ctx->pc = 0x21A4D0u;
            goto label_21a4d0;
        }
    }
    ctx->pc = 0x21A260u;
label_21a260:
    // 0x21a260: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21a264: 0x34630402  ori         $v1, $v1, 0x402
    ctx->pc = 0x21a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1026);
    // 0x21a268: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x21a268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x21a26c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a270: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21a270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a274: 0xc09d91a  jal         func_276468
    ctx->pc = 0x21A274u;
    SET_GPR_U32(ctx, 31, 0x21A27Cu);
    ctx->pc = 0x21A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A274u;
    // 0x21a278: 0xae4316d0  sw          $v1, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x21A274u, 0x21A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A27Cu;
label_21a27c:
    // 0x21a27c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x21a27cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21a280: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x21a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x21a284: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x21a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x21a288: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x21a288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x21a28c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A28Cu;
    {
        const bool branch_taken_0x21a28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A28Cu;
        // 0x21a290: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a28c) {
            ctx->pc = 0x21A2ACu;
            goto label_21a2ac;
        }
    }
    ctx->pc = 0x21A294u;
    // 0x21a294: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a298: 0x24426f50  addiu       $v0, $v0, 0x6F50
    ctx->pc = 0x21a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28496));
    // 0x21a29c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a2a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a2a4: 0x800008  jr          $a0
    ctx->pc = 0x21A2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A2ACu: goto label_21a2ac;
            case 0x21A2BCu: goto label_21a2bc;
            case 0x21A2CCu: goto label_21a2cc;
            case 0x21A2DCu: goto label_21a2dc;
            case 0x21A2ECu: goto label_21a2ec;
            case 0x21A2FCu: goto label_21a2fc;
            case 0x21A30Cu: goto label_21a30c;
            case 0x21A31Cu: goto label_21a31c;
            case 0x21A32Cu: goto label_21a32c;
            case 0x21A33Cu: goto label_21a33c;
            case 0x21A34Cu: goto label_21a34c;
            case 0x21A35Cu: goto label_21a35c;
            case 0x21A36Cu: goto label_21a36c;
            case 0x21A37Cu: goto label_21a37c;
            case 0x21A38Cu: goto label_21a38c;
            case 0x21A39Cu: goto label_21a39c;
            case 0x21A3ACu: goto label_21a3ac;
            case 0x21A3DCu: goto label_21a3dc;
            case 0x21A3ECu: goto label_21a3ec;
            case 0x21A3FCu: goto label_21a3fc;
            case 0x21A40Cu: goto label_21a40c;
            case 0x21A41Cu: goto label_21a41c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A2A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21A2ACu;
label_21a2ac:
    // 0x21a2ac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a2b0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x21a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x21a2b4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x21A2B4u;
    {
        const bool branch_taken_0x21a2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B4u;
        // 0x21a2b8: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2b4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A2BCu;
label_21a2bc:
    // 0x21a2bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a2c0: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x21a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x21a2c4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x21A2C4u;
    {
        const bool branch_taken_0x21a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2C4u;
        // 0x21a2c8: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2c4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A2CCu;
label_21a2cc:
    // 0x21a2cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a2d0: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x21a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x21a2d4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x21A2D4u;
    {
        const bool branch_taken_0x21a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2D4u;
        // 0x21a2d8: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2d4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A2DCu;
label_21a2dc:
    // 0x21a2dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a2e0: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x21a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x21a2e4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x21A2E4u;
    {
        const bool branch_taken_0x21a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E4u;
        // 0x21a2e8: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2e4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A2ECu;
label_21a2ec:
    // 0x21a2ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a2f0: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x21a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x21a2f4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21A2F4u;
    {
        const bool branch_taken_0x21a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2F4u;
        // 0x21a2f8: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2f4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A2FCu;
label_21a2fc:
    // 0x21a2fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a300: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x21a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x21a304: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x21A304u;
    {
        const bool branch_taken_0x21a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A304u;
        // 0x21a308: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a304) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A30Cu;
label_21a30c:
    // 0x21a30c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a310: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x21a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x21a314: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x21A314u;
    {
        const bool branch_taken_0x21a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A314u;
        // 0x21a318: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a314) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A31Cu;
label_21a31c:
    // 0x21a31c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a320: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x21a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x21a324: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x21A324u;
    {
        const bool branch_taken_0x21a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A324u;
        // 0x21a328: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a324) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A32Cu;
label_21a32c:
    // 0x21a32c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a330: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x21a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x21a334: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21A334u;
    {
        const bool branch_taken_0x21a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A334u;
        // 0x21a338: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a334) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A33Cu;
label_21a33c:
    // 0x21a33c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a340: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x21a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x21a344: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x21A344u;
    {
        const bool branch_taken_0x21a344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A344u;
        // 0x21a348: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a344) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A34Cu;
label_21a34c:
    // 0x21a34c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a350: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x21a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x21a354: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x21A354u;
    {
        const bool branch_taken_0x21a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A354u;
        // 0x21a358: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a354) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A35Cu;
label_21a35c:
    // 0x21a35c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a360: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x21a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x21a364: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21A364u;
    {
        const bool branch_taken_0x21a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A364u;
        // 0x21a368: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a364) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A36Cu;
label_21a36c:
    // 0x21a36c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a370: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x21a370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x21a374: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x21A374u;
    {
        const bool branch_taken_0x21a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A374u;
        // 0x21a378: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a374) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A37Cu;
label_21a37c:
    // 0x21a37c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a380: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x21a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x21a384: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x21A384u;
    {
        const bool branch_taken_0x21a384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A384u;
        // 0x21a388: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a384) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A38Cu;
label_21a38c:
    // 0x21a38c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a390: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x21a394: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21A394u;
    {
        const bool branch_taken_0x21a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A394u;
        // 0x21a398: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a394) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A39Cu;
label_21a39c:
    // 0x21a39c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a3a0: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x21a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x21a3a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x21A3A4u;
    {
        const bool branch_taken_0x21a3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3A4u;
        // 0x21a3a8: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3a4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A3ACu;
label_21a3ac:
    // 0x21a3ac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a3b0: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x21a3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x21a3b4: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x21a3b8: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x21a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x21a3bc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x21a3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a3c0: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A3C0u;
    {
        const bool branch_taken_0x21a3c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3C0u;
        // 0x21a3c4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3c0) {
            ctx->pc = 0x21A430u;
            goto label_21a430;
        }
    }
    ctx->pc = 0x21A3C8u;
    // 0x21a3c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x21a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3cc: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x21A3CCu;
    SET_GPR_U32(ctx, 31, 0x21A3D4u);
    ctx->pc = 0x21A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3CCu;
    // 0x21a3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x21A3CCu, 0x21A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3D4u;
label_21a3d4:
    // 0x21a3d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21A3D4u;
    {
        const bool branch_taken_0x21a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D4u;
        // 0x21a3d8: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3d4) {
            ctx->pc = 0x21A434u;
            goto label_21a434;
        }
    }
    ctx->pc = 0x21A3DCu;
label_21a3dc:
    // 0x21a3dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a3e0: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x21a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x21a3e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21A3E4u;
    {
        const bool branch_taken_0x21a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3E4u;
        // 0x21a3e8: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3e4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A3ECu;
label_21a3ec:
    // 0x21a3ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a3f0: 0x8c43244c  lw          $v1, 0x244C($v0)
    ctx->pc = 0x21a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9292)));
    // 0x21a3f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21A3F4u;
    {
        const bool branch_taken_0x21a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3F4u;
        // 0x21a3f8: 0x8c442450  lw          $a0, 0x2450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3f4) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A3FCu;
label_21a3fc:
    // 0x21a3fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a400: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x21a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x21a404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A404u;
    {
        const bool branch_taken_0x21a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A404u;
        // 0x21a408: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a404) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A40Cu;
label_21a40c:
    // 0x21a40c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a410: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x21a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x21a414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21A414u;
    {
        const bool branch_taken_0x21a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A414u;
        // 0x21a418: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a414) {
            ctx->pc = 0x21A428u;
            goto label_21a428;
        }
    }
    ctx->pc = 0x21A41Cu;
label_21a41c:
    // 0x21a41c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a420: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x21a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x21a424: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x21a424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_21a428:
    // 0x21a428: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x21a428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a42c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x21a42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21a430:
    // 0x21a430: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x21a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_21a434:
    // 0x21a434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A434u;
    {
        const bool branch_taken_0x21a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a434) {
            ctx->pc = 0x21A450u;
            goto label_21a450;
        }
    }
    ctx->pc = 0x21A43Cu;
    // 0x21a43c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21a440: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x21a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    // 0x21a444: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x21a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x21a448: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x21a448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a44c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x21a44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21a450:
    // 0x21a450: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21a450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21a454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a458: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21a458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a45c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x21a45cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a464: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x21a464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21a468: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x21A468u;
    SET_GPR_U32(ctx, 31, 0x21A470u);
    ctx->pc = 0x21A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A468u;
    // 0x21a46c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x21A468u, 0x21A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A470u;
label_21a470:
    // 0x21a470: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x21a470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x21a474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a478: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x21a478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_21a47c:
    // 0x21a47c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21A47Cu;
    SET_GPR_U32(ctx, 31, 0x21A484u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21A47Cu, 0x21A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A484u;
label_21a484:
    // 0x21a484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21a488: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21a488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21a48c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x21a48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a494: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x21a494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x21a498: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x21a498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x21a49c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21a49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21a4a0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x21a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21a4a4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x21A4A4u;
    SET_GPR_U32(ctx, 31, 0x21A4ACu);
    ctx->pc = 0x21A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4A4u;
    // 0x21a4a8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x21A4A4u, 0x21A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4ACu;
label_21a4ac:
    // 0x21a4ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x21A4ACu;
    SET_GPR_U32(ctx, 31, 0x21A4B4u);
    ctx->pc = 0x21A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4ACu;
    // 0x21a4b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x21A4ACu, 0x21A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4B4u;
label_21a4b4:
    // 0x21a4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x21A4B8u;
    SET_GPR_U32(ctx, 31, 0x21A4C0u);
    ctx->pc = 0x21A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4B8u;
    // 0x21a4bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x21A4B8u, 0x21A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4C0u;
label_21a4c0:
    // 0x21a4c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21a4c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21a4c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x21A4C4u;
    SET_GPR_U32(ctx, 31, 0x21A4CCu);
    ctx->pc = 0x21A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4C4u;
    // 0x21a4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x21A4C4u, 0x21A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4CCu;
label_21a4cc:
    // 0x21a4cc: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x21a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a4d0:
    // 0x21a4d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a4d4: 0x0  nop
    ctx->pc = 0x21a4d4u;
    // NOP
    // 0x21a4d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21a4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a4dc: 0x0  nop
    ctx->pc = 0x21a4dcu;
    // NOP
    // 0x21a4e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21A4E0u;
    {
        const bool branch_taken_0x21a4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E0u;
        // 0x21a4e4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e0) {
            ctx->pc = 0x21A4FCu;
            goto label_21a4fc;
        }
    }
    ctx->pc = 0x21A4E8u;
    // 0x21a4e8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x21a4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a4ec: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x21a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x21a4f0: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x21a4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a4f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4F4u;
        // 0x21a4f8: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A4FCu;
label_21a4fc:
    // 0x21a4fc: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x21a500: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x21a504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21a508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A508u;
    {
        const bool branch_taken_0x21a508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A508u;
        // 0x21a50c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a508) {
            ctx->pc = 0x21A51Cu;
            goto label_21a51c;
        }
    }
    ctx->pc = 0x21A510u;
    // 0x21a510: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x21A510u;
    SET_GPR_U32(ctx, 31, 0x21A518u);
    ctx->pc = 0x21A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A510u;
    // 0x21a514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x21A510u, 0x21A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A518u;
label_21a518:
    // 0x21a518: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x21a518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21a51c:
    // 0x21a51c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21a51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a524: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x21a524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a52c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x21a52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21a530: 0x3e00008  jr          $ra
    ctx->pc = 0x21A530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A530u;
        // 0x21a534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A538u;
}
